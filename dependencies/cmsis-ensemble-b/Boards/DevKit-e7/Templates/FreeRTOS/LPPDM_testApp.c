/* Copyright (C) 2023 Alif Semiconductor - All Rights Reserved.
 * Use, distribution and modification of this code is permitted under the
 * terms stated in the Alif Semiconductor Software License Agreement
 *
 * You should have received a copy of the Alif Semiconductor Software
 * License Agreement with this file. If not, please write to:
 * contact@alifsemi.com, or visit: https://alifsemi.com/license
 *
 */

/******************************************************************************
 * @file     LPPDM_testApp.c
 * @author   Nisarga A M
 * @email    nisarga.am@alifsemi.com
 * @version  V1.0.0
 * @date     29-May-2023
 * @brief    TestApp to verify LPPDM(Low Power Pulse Density Modulation) interface
 *           using FreeRTOS as an operating system.
 *           -> Select the PDM channel
 *           -> Select the mode of operation in the Control API.
 *           -> Select the mode of operation in the Control API.
 *           -> Then build the project and flash the generated axf file on the target
 *           -> Then Start playing some audio or speak near to the PDM microphone which
 *              is on Flat board.
 *           -> Once the sample count reaches the maximum value,the PCM samples will be
 *              stored in the particular buffer.
 *           -> Export the memory and To play the PCM data, use pcmplay.c file which
 *              will generate the pcm_samples.pcm audio file
 *           -> Use ffplay command to play the audio.
 *           Hardware setup:
 *           -> Connect Flat board PDM Microphone PDM data line to LPPDM data
 *              line of P3_5 (J11 on Flat board)
 *            For channel 0 and channel 1
 *           -> Clock line (LPPDM_C0_B):
                pin P6_7 (on Flat board J15) --> pin P3_4 (on Flat board J11)
             -> Data line (LPPDM_D0_B):
                pin P5_4 (on Flat board J14) --> pin P3_5 (on Flat board J11)

 ******************************************************************************/
/* System Includes */
#include <stdio.h>

/* Project Includes */
/* include for PDM Driver */
#include "Driver_PDM.h"
#include "pinconf.h"

#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"

/* For Release build disable printf and semihosting */
#define DISABLE_PRINTF

#ifdef DISABLE_PRINTF
    #define printf(fmt, ...) (0)
    /* Also Disable Semihosting */
    #if __ARMCC_VERSION >= 6000000
            __asm(".global __use_no_semihosting");
    #elif __ARMCC_VERSION >= 5000000
            #pragma import(__use_no_semihosting)
    #else
            #error Unsupported compiler
    #endif

    void _sys_exit(int return_code) {
            while (1);
    }
#endif

/* PDM driver instance */
extern ARM_DRIVER_PDM Driver_LPPDM;
static ARM_DRIVER_PDM *PDMdrv = &Driver_LPPDM;

/*Define for FreeRTOS*/
#define STACK_SIZE       1024
#define TIMER_SERVICE_TASK_STACK_SIZE   configTIMER_TASK_STACK_DEPTH
#define IDLE_TASK_STACK_SIZE            configMINIMAL_STACK_SIZE

StackType_t IdleStack[2 * IDLE_TASK_STACK_SIZE];
StaticTask_t IdleTcb;
StackType_t TimerStack[2 * TIMER_SERVICE_TASK_STACK_SIZE];
StaticTask_t TimerTcb;

/* To select the PDM channel 0 and channel 1 */
#define AUDIO_EN_CHANNEL  (ARM_PDM_AUDIO_CHANNEL_0 | ARM_PDM_AUDIO_CHANNEL_1 )

/* Store the number of samples */
/* For 40000 samples user can hear maximum up to 4 sec of audio
 * to store maximum samples then change the scatter file and increase the memory */
#define NUM_SAMPLE  30000

/* channel number used for channel configuration and status register */
#define CHANNEL_0  0
#define CHANNEL_1  1

TaskHandle_t pdm_xHandle;

/****************************** FreeRTOS functions **********************/

void vApplicationGetIdleTaskMemory(StaticTask_t **ppxIdleTaskTCBBuffer,
      StackType_t **ppxIdleTaskStackBuffer, uint32_t *pulIdleTaskStackSize) {
   *ppxIdleTaskTCBBuffer = &IdleTcb;
   *ppxIdleTaskStackBuffer = IdleStack;
   *pulIdleTaskStackSize = IDLE_TASK_STACK_SIZE;
}

void vApplicationStackOverflowHook(TaskHandle_t pxTask, char *pcTaskName)
{
   (void) pxTask;

   for (;;);
}

void vApplicationGetTimerTaskMemory(StaticTask_t **ppxTimerTaskTCBBuffer,
      StackType_t **ppxTimerTaskStackBuffer, uint32_t *pulTimerTaskStackSize)
{
   *ppxTimerTaskTCBBuffer = &TimerTcb;
   *ppxTimerTaskStackBuffer = TimerStack;
   *pulTimerTaskStackSize = TIMER_SERVICE_TASK_STACK_SIZE;
}

void vApplicationIdleHook(void)
{
   for (;;);
}

typedef enum{
    PDM_CALLBACK_ERROR_EVENT           = (1 << 0),
    PDM_CALLBACK_WARNING_EVENT         = (1 << 1),
    PDM_CALLBACK_AUDIO_DETECTION_EVENT = (1 << 2)
}PDM_CB_EVENTS;

PDM_CH_CONFIG pdm_coef_reg;

/* For Demo purpose use channel 0  and channel 1 */
/* To store the PCM samples for Channel 0 and channel 1 */
uint32_t ch_0_1[NUM_SAMPLE];

/* Channel 0 FIR coefficient */
uint32_t ch0_fir[18] = { 0x00000000,0x000007FF,0x00000000,0x00000004,0x00000004,0x000007FC,0x00000000,0x000007FB,0x000007E4,
                         0x00000000,0x0000002B,0x00000009,0x00000016,0x00000049,0x00000793,0x000006F8,0x00000045,0x00000178};

/* Channel 1 FIR coefficient */
uint32_t ch1_fir[18] = {0x00000001, 0x00000003,0x00000003,0x000007F4,0x00000004,0x000007ED,0x000007F5,0x000007F4,0x000007D3,
                        0x000007FE,0x000007BC,0x000007E5,0x000007D9,0x00000793,0x00000029,0x0000072C,0x00000072,0x000002FD};

static void PDM_fifo_callback(uint32_t event)
{
    BaseType_t xHigherPriorityTaskWoken = pdFALSE, xResult = pdFALSE;
    /* Save received events */
    /* Optionally, user can define specific actions for an event */

    if(event & ARM_PDM_EVENT_ERROR )
    {
        xTaskNotifyFromISR(pdm_xHandle, PDM_CALLBACK_ERROR_EVENT, eSetBits, &xHigherPriorityTaskWoken);

        if (xResult == pdTRUE)        {    portYIELD_FROM_ISR( xHigherPriorityTaskWoken );    }
    }

    if(event & ARM_PDM_EVENT_CAPTURE_COMPLETE)
    {
        xTaskNotifyFromISR(pdm_xHandle, PDM_CALLBACK_WARNING_EVENT, eSetBits, &xHigherPriorityTaskWoken);

        if (xResult == pdTRUE)        {    portYIELD_FROM_ISR( xHigherPriorityTaskWoken );    }
    }

    if(event & ARM_PDM_EVENT_AUDIO_DETECTION)
    {
        xTaskNotifyFromISR(pdm_xHandle, PDM_CALLBACK_AUDIO_DETECTION_EVENT, eSetBits, &xHigherPriorityTaskWoken);

        if (xResult == pdTRUE)        {    portYIELD_FROM_ISR( xHigherPriorityTaskWoken );    }
    }
}

/**
 * @fn         : void pdm_demo_thread_entry(void *pvParameters)
 * @brief      : PDM fifo callback
 *               -> Initialize the PDM module.
 *               -> Enable the Power for the PDM module
 *               -> Select the mode of operation in Control API.The
 *                    mode which user has selected will be applies to
 *                    all the channel which user has selected.
 *               -> Select the Bypass DC blocking IIR filter for reference.
 *               -> Select the PDM channel and use the selected channel
 *                    configuration and status register values.
 *               -> Give the Fifo watermark value
 *               -> Play some audio and start capturing the data.
 *               -> Once all data has stored in the particular buffer ,
 *                  call back event will be set and it will stop capturing
 *                  data.
 *               -> Once all the data capture is done , go to the particular
 *                  memory location which user has given for storing PCM data
 *                  samples.
 *               -> Then export the memory and give the total size of
 *                  the buffer memory and select the particular bin file and export
 *                  the memory.
 *               -> Play the PCM sample file using ffplay command.
 * @return     : none
 */
void pdm_demo_thread_entry(void *pvParameters)
{
    uint32_t  ret = 0;
    ARM_DRIVER_VERSION version;
    int32_t retval;
    uint32_t ulNotificationValue;

    printf("\r\n >>> PDM demo starting up!!! <<< \r\n");

    version = PDMdrv->GetVersion();
    printf("\r\n PDM version api:%X driver:%X...\r\n", version.api, version.drv);

    /* Data line for Channel 0 and 1 (LPPDM_D0_B -> pin P3_5) */
    retval = pinconf_set(PORT_3, PIN_5, PINMUX_ALTERNATE_FUNCTION_3, PADCTRL_READ_ENABLE);
    if (retval)
        printf("pinconf_set failed\n");

    /* Clock line for Channel 0 and 1 (LPPDM_C0_B -> pin P3_4) */
    retval = pinconf_set(PORT_3, PIN_4, PINMUX_ALTERNATE_FUNCTION_3, 0x0);
    if (retval)
        printf("pinconf_set failed\n");

    /* Initialize PDM driver */
    ret = PDMdrv->Initialize(PDM_fifo_callback);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM init failed\n");
        return;
    }

    /* Enable the power for PDM */
    ret = PDMdrv->PowerControl(ARM_POWER_FULL);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Power up failed\n");
        goto error_uninitialize;
    }

    /* Select Wide band width audio PDM mode */
    ret = PDMdrv->Control(ARM_PDM_MODE, ARM_PDM_MODE_STANDARD_VOICE_512_CLK_FRQ);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Wide band width audio control failed\n");
        goto error_poweroff;
    }

    /* Select the DC blocking IIR filter */
    ret = PDMdrv->Control(ARM_PDM_BYPASS_IIR_FILTER, ENABLE);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM DC blocking IIR control failed\n");
        goto error_poweroff;
    }

    /* Channel 0 configuration values */
    pdm_coef_reg.ch_num             = CHANNEL_0;     /* Channel 0 */
    memcpy(pdm_coef_reg.ch_fir_coef, ch0_fir, sizeof(pdm_coef_reg.ch_fir_coef)); /* Channel 0 fir coefficient */
    pdm_coef_reg.ch_iir_coef        = 0x00000004;    /* Channel IIR Filter Coefficient */
    pdm_coef_reg.ch_phase           = 0x00000003;    /* Channel Phase Control */
    pdm_coef_reg.ch_gain            = 0x00000013;    /* Channel gain control */
    pdm_coef_reg.ch_peak_detect_th  = 0x00060002;    /* Channel Peak Detector Threshold */
    pdm_coef_reg.ch_peak_detect_itv = 0x00020027;    /* Channel Peak Detector Interval */

    ret = PDMdrv->Config(&pdm_coef_reg);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Channel_Config failed\n");
        goto error_uninitialize;
    }

    /* Channel 1 configuration values */
    pdm_coef_reg.ch_num              = CHANNEL_1;    /* Channel 1 */
    memcpy(pdm_coef_reg.ch_fir_coef, ch1_fir, sizeof(pdm_coef_reg.ch_fir_coef)); /* Channel 1 fir coefficient*/
    pdm_coef_reg.ch_iir_coef         = 0x00000004;   /* Channel IIR Filter Coefficient */
    pdm_coef_reg.ch_phase            = 0x0000001F;   /* Channel Phase Control */
    pdm_coef_reg.ch_gain             = 0x0000000D;   /* Channel gain control */
    pdm_coef_reg.ch_peak_detect_th   = 0x00060002;   /* Channel Peak Detector Threshold */
    pdm_coef_reg.ch_peak_detect_itv  = 0x0004002D;   /* Channel Peak Detector Interval */

    ret = PDMdrv->Config(&pdm_coef_reg);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Channel_Config failed\n");
        goto error_uninitialize;
    }

    ret = PDMdrv->Config(&pdm_coef_reg);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Channel_Config failed\n");
        goto error_uninitialize;
    }

    /* PDM Capture Configurations */
    PDM_Capture_CONFIG pdm_cap_cnfg;
    pdm_cap_cnfg.en_multiple_ch = AUDIO_EN_CHANNEL;
    pdm_cap_cnfg.ch0_1_addr = ch_0_1;
        printf("size of ch 0 and 1: %d  and Address of ch 0 and 1: 0x%p\n", sizeof(ch_0_1), ch_0_1);

    /* Store the number of Samples */
    pdm_cap_cnfg.total_no_samples = NUM_SAMPLE;

    /* Give the fifo watermark value. */
    pdm_cap_cnfg.fifo_watermark = 0x00000007;

    printf("\n------> Start Speaking or Play some Audio!------> \n");

    /* Start capturing the audio samples */
    ret = PDMdrv->Capture(&pdm_cap_cnfg);
    if(ret != ARM_DRIVER_OK){
        printf("\r\n Error: PDM Capture failed\n");
       goto error_capture;
    }

    /* wait for the call back event */
    xTaskNotifyWait(NULL, PDM_CALLBACK_ERROR_EVENT | PDM_CALLBACK_WARNING_EVENT | \
                    PDM_CALLBACK_AUDIO_DETECTION_EVENT, \
                    &ulNotificationValue, \
                    portMAX_DELAY);

    /* PDM channel audio detection event */
    if(ulNotificationValue & PDM_CALLBACK_AUDIO_DETECTION_EVENT)
    {
        printf("\n PDM audio detect event: data in the audio channel");
    }

    /* PDM fifo alomost full warning event */
    if(ulNotificationValue & PDM_CALLBACK_WARNING_EVENT)
    {
        printf("\n PDM warning event : Fifo almost full\n");
    }

    /* PDM fifo overflow error event */
    if(ulNotificationValue & PDM_CALLBACK_ERROR_EVENT)
    {
        printf("\n PDM error event: Fifo overflow \n");
    }

    printf("\n------> Stop recording ------> \n");
    printf("\n ---END--- \r\n <<< wait forever >>> \n");
    while(1);

error_capture:
error_poweroff:
    ret = PDMdrv->PowerControl(ARM_POWER_OFF);
    if(ret != ARM_DRIVER_OK)
    {
        printf("\n Error: PDM power off failed\n");
    }

error_uninitialize:
    ret = PDMdrv->Uninitialize();
    if(ret != ARM_DRIVER_OK)
    {
        printf("\n Error: PDM Uninitialize failed\n");
    }

    printf("\r\n XXX PDM demo exiting XXX...\r\n");
}

/*----------------------------------------------------------------------------
 *      Main: Initialize and start the FreeRTOS Kernel
 *---------------------------------------------------------------------------*/
int main(void)
{
   /* System Initialization */
   SystemCoreClockUpdate();

   /* Create application main thread */
   BaseType_t xReturned = xTaskCreate(pdm_demo_thread_entry, "LPPDMFreertos", 256, NULL,configMAX_PRIORITIES-1, &pdm_xHandle);
   if (xReturned != pdPASS)
   {
      vTaskDelete(pdm_xHandle);
      return -1;
   }

   /* Start thread execution */
   vTaskStartScheduler();
}
