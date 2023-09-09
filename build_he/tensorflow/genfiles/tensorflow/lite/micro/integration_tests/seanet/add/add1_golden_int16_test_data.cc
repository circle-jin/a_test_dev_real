#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add1_golden_int16_test_data.h"

const unsigned int g_add1_golden_int16_test_data_size = 2304;
alignas(16) const int16_t g_add1_golden_int16_test_data[] = {-12538,-20543,29744,-7517,-17820,-19703,-32768,-32768,16581,13568,-28908,3648,-14839,27443,-12920,-6401,-13344,857,15757,18988,24684,-21548,-20160,11135,244,-22077,25109,29305,-9548,10428,5389,-15950,32767,24349,-10643,-7959,-3015,-32768,-65,-14637,15201,22868,-29648,-32768,2822,-15259,15182,-2257,7983,-11291,26223,-32768,-25457,-30047,763,3504,19951,5462,21113,-19017,-14037,-26146,-4980,-8364,357,5355,13814,2703,-27957,-24099,10612,-32768,-10866,720,-5729,-32768,-24504,30943,-11947,-10950,32767,18111,22306,11876,-11375,21576,17,13789,-9352,-32768,11382,16709,-4876,4735,3719,6520,2560,3126,-32214,-7602,23641,2411,-23217,-24571,-5463,22434,-29144,-7853,-24537,-18889,-16043,14309,-6315,5480,23435,27765,-12024,-32768,23203,-32768,26855,-18799,-12509,-6868,-8474,-16871,-26507,32767,-5837,9682,-32768,-12832,-1623,-15189,15164,-2898,9162,-3454,-23342,27896,23919,3492,-22722,23970,23533,-2422,-29445,32317,27082,-11812,-6021,11299,-480,-17500,-21901,-9790,21258,-13233,2673,2163,29374,6182,-18073,-6602,27871,-24613,-27790,-14085,32767,32767,-32768,32767,28311,7548,-26232,-31718,-31402,-25879,8742,-19400,-25363,-22118,13413,-32768,13407,-10783,32767,-7525,-32768,27282,5563,32767,4273,26570,25208,20505,7214,20528,-19271,4242,-24613,32767,-21808,27360,-1216,-20918,32767,5574,30621,-28152,32767,32767,12980,32767,18552,-31048,32767,-6633,-24170,3588,-30865,32767,18582,29657,-29508,-22408,14686,4285,-32768,-12764,32767,7300,23292,28569,32767,-11890,9049,-12497,-32768,-6979,10318,-8319,-32768,2625,32767,20035,16157,30711,-29060,-25062,6012,32767,-12975,-29298,5389,32767,23965,-8433,-32768,-13876,22503,31800,-26894,-11883,-11984,-25478,-10141,-28556,-29055,21264,32767,-26766,9739,-7930,24355,-6897,11394,11304,-3282,32767,-6082,9201,-15375,32767,6552,6709,15352,25691,2503,-27922,17860,-6959,29645,-31669,-29179,9204,-11893,-3888,19019,18244,-2582,16599,10763,32767,10913,17986,31912,-16628,-32768,31764,23021,30513,13686,-6121,-22885,-8880,-31844,3131,-9329,28871,27721,10067,7242,5875,13593,-19546,-10290,-12701,-12494,9176,6746,-14449,32767,-13054,16539,-14175,29049,-32768,9290,-23944,8215,-30166,-16576,23896,1854,-51,-4100,-4648,-10411,2039,23159,19707,2883,-29095,3057,-20851,19031,11521,3692,10441,-12424,32539,-10101,2191,18338,-9656,25191,23962,12972,-4664,-28074,-16371,18871,32767,-30180,11951,-25692,16658,-3257,6540,22592,-26708,-2182,-9046,-32768,-32768,15232,8801,-10965,2731,-10713,7289,-32768,-12635,29012,-14048,-14560,-16796,-18702,20680,-11869,-23973,-16787,3422,-6016,-20474,-5468,-12016,24891,26678,10312,-19660,25530,3575,-20241,12697,-18196,-32088,21382,32767,16951,-1820,-22179,-1367,-32768,7111,-32768,26763,30494,-24472,9279,6608,-5389,-23928,-20610,-27261,16930,30056,-2239,9171,-15098,-18208,-6606,-2284,-6289,-10605,32767,-23088,-31263,-27780,30801,-31404,4347,22907,5766,-422,-3860,18332,10457,24673,4076,-87,-7626,21682,-14062,-16247,32767,32767,21609,26303,-24124,10461,31733,21994,-4651,-11110,13055,-32768,673,1066,-13513,14438,-3010,7744,4253,30641,14557,-8303,13397,-32768,-24960,5765,7719,30845,-32768,-24279,32767,-5054,17139,-7012,11155,-10209,-6445,-23284,32767,10172,-32768,-15399,31771,-32768,672,979,-5079,2470,-27023,-32768,-32768,26082,20765,-28038,-10324,-2255,27626,7270,17307,-11479,-22141,-32768,-17025,-10739,-23247,-18750,-4432,13204,-9084,-32768,-15598,-15682,-14378,-11607,32767,18527,-666,15710,12246,30013,-2721,22132,5970,-11412,-15969,17924,-32768,-8704,-4259,-16535,8567,3678,22735,32767,32767,-3089,-4830,-3767,-27191,-26887,13570,4422,-32768,-22701,-15539,14891,-25213,10923,-10581,17410,28816,32767,4675,-7622,-21863,-959,11181,25109,10702,-18835,-13780,-32768,-14370,-11175,10992,24792,7827,-13900,-20721,-26714,32767,26403,-8401,32767,-19768,-13685,-14741,2869,-31936,-32768,-32768,69,29760,-4753,28000,14927,-32768,28907,-24819,16179,-28725,-9916,-15421,-25325,-17234,-17842,32767,-13503,2210,13826,18517,-12749,-8863,31246,16107,22447,-25863,15505,-6359,-25554,32767,14340,-8995,19462,14401,22515,16963,-20651,10955,-5731,-8348,-30479,-14608,-12424,15024,-8123,-32768,-7995,10897,-9517,13538,8722,-23796,-17092,8066,-32768,5016,21128,8938,-9714,-31053,26971,-4633,32767,11312,-12411,16902,-16040,-26133,-31070,-2594,-86,-1389,20989,32767,5180,561,13271,-26947,-15527,5224,5427,-25986,21463,24592,20421,-13902,-32768,-21955,-7545,-15477,10791,-21726,18610,-21005,-20348,16479,-7570,7004,-7428,-15697,32767,12188,32745,-10082,-17588,14847,6058,25227,-28299,28875,-20771,12709,20633,-26790,8257,-6809,32767,8255,-22917,1773,12403,-10158,997,23046,-2803,5236,-32768,2078,-25140,19893,-16940,-24119,-32768,31286,3320,-23747,8533,1492,17215,-32768,8667,25096,-10242,-11494,-12260,-14990,-13567,19683,-503,6877,8792,-24399,-21683,-1280,10748,-32650,4903,-32298,-1867,11362,8995,-103,6272,-585,7875,29811,-970,24216,-17363,-8477,-10551,-29316,11361,-8211,-32768,31077,27929,-21917,-18038,24178,-28645,-10332,32767,32767,29896,11453,-26815,-18282,23028,1056,-17916,15632,11253,8308,11672,-17073,-7342,-5490,19637,-4954,11606,-13289,32767,-13864,26986,24664,32767,2303,-20769,-15010,30378,2199,12094,11903,-9935,1493,-23957,32167,-12631,17343,-22544,8162,-19997,-28830,28162,11871,-8782,-32768,-9709,-25288,-14684,-6022,-32768,-7545,12617,-32768,10517,9091,1844,-20929,19449,28205,17287,-32768,-4146,-14787,-8257,18851,-27086,-28782,-9240,12870,20359,7867,19098,-32768,9015,465,32767,27741,-7804,15400,17293,1317,-2691,13777,-18532,16908,-32768,26041,3573,-15094,-28036,27421,-14304,18287,-12015,32767,26366,-3248,4294,893,5761,9052,-740,13730,3683,2935,-7539,-29116,-32768,21923,-6746,20190,32767,-10167,-5534,8013,-21904,32767,3744,-23314,-32768,-11894,13934,-9526,5979,41,-22879,26574,32767,15532,-31938,-3171,5619,-6621,32596,2550,-20030,-22050,19791,3564,-25212,25933,-26441,18590,-13000,-2984,-19446,11289,31234,17243,-6028,-5938,32115,25298,15637,16471,-6142,13680,17587,9010,-32768,-10302,6117,-9245,2361,-14764,-25100,-10970,-28084,-32768,18768,-9293,18567,-2697,2702,20748,-27886,1259,-18973,-29334,32267,-7692,-13612,20788,-32768,5929,-8604,-5797,9433,-29887,-31886,31168,-15469,2912,28703,16258,3271,10208,-14752,-8763,-14346,15640,-8885,32767,13418,-22148,-8626,15216,6877,-2423,-4954,4772,-32036,-21501,-32768,-32768,1369,2267,1589,32767,19448,-7181,940,3669,25352,32767,25800,24490,10545,-2762,14337,18623,-10751,-25392,1621,-3825,-24559,-26268,4998,-19180,-27679,11857,32767,-24945,4395,15308,28684,9002,-5705,4851,-6514,19623,13901,18458,-10716,13739,-15636,22869,-20170,32767,32767,13065,32767,10049,-3855,20350,25662,-2342,-32768,30488,11067,-13486,15817,-12837,32767,257,-21550,-9364,22204,-13398,-27916,-18544,31761,20725,28623,-20599,20136,-5895,3855,-24614,819,-21389,18153,-8414,27796,-4644,32767,23222,-32768,-25534,13956,-9243,32767,-15694,4470,-11380,3705,2379,1774,3129,16195,-32768,32767,-6137,8336,32767,-9646,18991,13881,18579,25661,-31129,319,-3071,13386,-5740,-4381,-24112,-24959,27131,32767,23321,29721,11991,-22493,32767,-16416,-24062,-6162,-17687,15982,-11865,8276,-16105,-8714,14206,17289,23063,21138,-23734,32767,-14047,-27364,8077,-5450,9503,-32768,18674,-30960,-18779,-12194,-9548,-1037,13535,15008,-25867,5318,-18096,-21148,18397,1812,23246,1294,-29975,32767,-3340,9169,9714,-29194,11623,12105,32767,9250,-32768,-21658,9128,-20950,25171,-22872,-8648,1117,11183,19860,-5164,-8579,4927,23432,31849,-13166,-596,2716,-8800,-32768,-32768,-22371,18033,-25474,32643,7351,-32768,32767,26873,3721,-13981,-14574,-32768,-13955,9881,-13170,-9629,-22095,-19397,32767,9699,-15869,5945,-12483,-12660,-14825,-32768,-13207,-3370,-9426,18838,4646,13935,-32067,-25093,-15509,-11948,2243,10056,18013,-31889,-7454,15639,22889,-23737,-27535,-14325,-14784,13371,16243,-24147,21143,14415,-23851,-32768,-15732,5503,-14265,8908,-23450,20467,-6960,18536,3411,7555,-15900,2494,26449,-6449,-12768,-13170,18774,-8979,-21488,-26784,19461,-29033,-32768,-13228,1394,32417,14616,16086,-19672,4298,17372,-6319,-25105,-27502,-17363,14816,-23376,-32768,18362,-32768,-17280,-11840,-3287,28074,-23836,-8204,-2482,27746,-6059,26491,6807,-13394,32585,23340,-25639,-11273,23384,-27783,-3032,-2331,-4972,32026,14220,32767,10633,-25749,-16942,-31415,-11904,2902,-26142,2667,12902,32767,-12031,2175,1159,-2686,7978,1808,19444,-20792,-7935,-11136,26184,32767,-29089,32767,-13506,-10390,3902,6871,-6626,31823,2743,4403,-6914,154,14769,8384,6257,-32768,-15461,16091,2828,-22296,445,-21918,17802,10163,-5814,11772,3486,26613,-7508,-30689,32617,-11755,-23231,16810,8732,10993,10369,-16143,-14217,15816,32767,21327,8085,-10273,-7843,-6073,32767,29244,32767,32767,32767,-12790,10435,-8478,-14497,5343,13936,16228,-15462,-19375,15575,5661,9234,-27696,1144,13737,-3284,-22126,-24342,16523,-8848,14255,-3885,-5735,3567,-5923,32767,-14638,-31588,22098,-7304,32767,-32768,21366,-13497,9861,-9144,16827,11208,5618,-29879,-1774,1510,26262,-6168,-23443,-32307,14366,-14908,20545,-32768,22095,-25087,18050,5249,13155,9021,-26339,32767,21578,-8889,-23941,18244,18561,-1231,7887,11088,28007,5143,15386,-22209,-11456,-8650,-6799,703,-26514,10387,-7253,13837,2304,15340,32767,-3992,-32768,-3166,225,29625,-12168,32767,4866,-17513,-7199,9325,-8221,26448,8467,-4956,32767,6297,15268,12723,-1813,5988,-32768,21490,-32768,-19200,17097,14481,25248,28229,20158,-7373,19464,-4025,-15060,18768,-1592,24966,-17322,-3214,8717,-32768,12977,32767,10542,-2737,15191,-1625,-22063,32767,27076,7297,-839,-19732,28540,-1339,-5606,32767,27288,-32768,-20582,-13479,-25604,5529,-25382,32767,32767,-6714,14659,-32768,10377,16298,-14908,32767,3265,-454,1907,6778,-2454,-24527,32767,30138,32486,6523,12756,-4094,-17289,32767,-10159,27969,-31037,2377,14124,17958,-27009,25038,-32231,-18536,32767,6277,-11831,26303,32340,8808,1257,-28357,5305,10426,32535,-2237,7887,-279,32767,-24707,3190,8389,32767,2426,-15911,23714,-13469,-12794,15998,-18356,-26513,-13070,10588,-16012,22141,6195,1599,-16153,32767,24477,-2386,1485,23844,9111,7197,14995,-9804,-1527,10628,-24779,8585,29285,32767,12644,9421,-19603,-7304,-19382,2965,18598,-14223,-21181,-8072,-19256,3952,32767,27505,-3902,10646,-26123,-16743,18423,-31326,9218,-12242,-19717,-21905,-16134,-3249,-26792,-27468,-17321,14239,-13355,-28296,17317,-7339,18836,-13732,-14495,10339,21223,2611,18434,-31338,22349,22952,-16748,-10723,-12750,-4499,-9257,-23550,-7879,23233,-16598,32767,-24366,24319,-32768,-4206,-11314,-4263,-32768,183,-5315,15369,9080,5434,-26263,9487,6432,13921,18057,-12573,-17120,-16390,14316,-30394,-18976,12954,11327,1894,-3719,32767,16577,2758,-20225,-25650,17507,-12102,30633,4590,30156,-24326,5308,32767,-32768,32767,-14126,-18772,-11874,1424,-27880,32767,4356,-11323,366,13368,-2375,4675,-32768,24934,-1014,-24106,4136,10714,15064,23953,-23618,23533,-18100,-16770,-10062,32767,20494,-506,-195,-22567,-31441,-29123,22303,-17583,-11783,31620,-16863,-4711,-21332,4958,-4440,-13151,32767,-25950,-3368,-17686,-1605,17074,9660,-32768,32767,-2217,-6738,-15939,11070,-22701,-26443,-15205,-17526,7477,22232,17624,30878,-13319,16861,-25770,15959,4658,17773,12117,2928,-13682,22151,23471,22617,-14154,27274,-22075,15508,-32768,20134,-32768,32767,-23110,-10458,1418,-21444,-32768,14814,13098,-2520,2546,27675,-7864,-6724,-1686,-20285,-23698,-8578,-5612,10429,-6445,-16749,12073,-32768,-5249,-26811,-12147,13334,-14688,-12605,-5579,32767,1548,6430,-2748,-32768,-10330,32767,-32341,20800,-2331,32767,-20204,-32768,32767,-212,-32768,882,-4374,-18695,-27835,-1632,0,-5450,-11928,2710,-14418,7594,-32768,-32768,15682,15527,-27505,12491,6610,-13948,-485,15045,22545,28622,-17791,24068,-13610,19068,-20230,18451,-12935,-3596,-1530,-14703,-29364,-32768,29005,1313,4297,-7891,-16864,2653,27710,-2322,25207,21176,14365,13090,12874,-15404,5162,-22925,-5144,697,8976,-32768,27292,4801,13269,-3325,4136,16337,-31692,-11821,-16426,-8755,-8448,-32768,32767,23419,31961,14052,31205,591,-5990,-4538,21669,-20937,-5549,6415,-18423,-17207,16865,-15287,-13334,32767,15189,-12576,-23834,22820,26085,-13625,20451,-21426,4025,2701,-20,14751,11873,2065,-16029,-6383,22932,16481,-19154,5000,-4045,-8790,10618,-10526,9851,-3098,-24926,-32768,16040,32767,24233,19202,-9102,26075,-32768,-19349,-7403,1464,-12565,32767,11102,-23129,-10109,17942,6737,-10703,-20543,28165,10804,-8093,15673,-7853,-32768,-17850,-21175,18011,-32768,-15934,-26383,9596,-28698,27056,24694,-9366,-29214,-6318,8333,-20003,-22880,27098,-6604,-32768,-15181,15117,26028,-979,-23765,9942,18524,-22365,-9332,32767,-7722,-11474,7037,14831,243,-16688,-10178,4056,20591,-8478,26102,19240,23595,19342,26215,7742,24318,26832,32767,-2503,19117,-2745,-32768,26749,-12801,11669,20470,32767,32767,-24671,20896,5132,14848,-3547,-32768,13202,-22803,8860,-15268,-3162,-8622,-6885,-1880,12609,6536,3759,26642,-7902,5340,-14172,-10841,27360,-20139,-32768,-4863,11518,-2111,32767,-32768,-4932,22861,13994,13285,-23509,10944,-3347,5594,-9194,-15927,-32768,-6637,-24490,8499,-5604,-30251,-23062,-2539,27151,-14672,-4449,-8507,-15091,-7118,31991,18379,-5408,-11264,3352,-19666,17906,-1417,-25151,-27134,-9988,-28831,32767,11013,2876,-3540,7526,-21057,-7613,-2577,31953,-32602,17285,7614,-32768,-25226,1601,-6614,-6791,-3789,-19950,-2734,22425,-1080,22891,4766,-11168,11127,23984,-24147,23019,18601,-22919,-12992,-32768,-17655,-8253,-23786,-11964,-16897,-876,11094,3177,12204,-15540,32767,-8533,23464,-16589,25809,-8394,-17667,-25314,634,26559,-15377,-20809,-11086,19163,-22435,6835,-21662,8252,25753,-7881,-926,32767,-32768,18279,5079,-18939,27640,13130,16428,32767,-29599,16872,-940,-4551,-32768,11227,-19266,-15747,-9991,-12061,-15918,-6556,-27025,6438,-20188,-15500,-22258,-7294,-29591,-5333,-29915,12445,32767,926,-15599,5339,-20313,-23490,14442,-14176,9460,-27052,-3261,-10109,-25112,17893,18538,-19532,-32516,642,6136,-2631,6619,-2782,-27002,9399,19632,-12583,12588,30224,-18461,-5706,32767,-31655,-17830,25922,12273,-32207,-1597,29939,32767,16301,27307,32767,19602,22769,-6959,-29103,17543,15407,-32768,-18885,16850,23246,8893,7072,3718,-8757,-6408,21703,-17324,5772,-32768,-23886,3963,31221,1803,5450,-23065,-5377,-28252,-22224,-25392,-32768,-25542,10239,2377,30083,-31910,-11806,16339,-17218,-22368,-7448,17484,-32768,-1922,6291,32767,-22701,31786,1940,-30333,27975,-3250,-7313,-20483,25798,27030,-19549,9254,13268,12554,14877,-32768,8693,4199,4072,23436,-13213,-3644,10240,-4224,-22555
};
