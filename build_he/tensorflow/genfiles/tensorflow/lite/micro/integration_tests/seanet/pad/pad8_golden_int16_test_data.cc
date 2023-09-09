#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/pad/pad8_golden_int16_test_data.h"

const unsigned int g_pad8_golden_int16_test_data_size = 704;
alignas(16) const int16_t g_pad8_golden_int16_test_data[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20047,-32634,26773,-31598,-18305,15237,10250,17406,-23685,-30220,-31847,-5344,3451,21999,22909,-6315,-12184,-32449,-31292,10487,-27678,10221,-2723,20853,4374,2528,19677,-25107,15416,-20572,15491,-18144,5399,-12406,-4572,-9244,18097,-21006,7096,-30701,-31905,7405,20527,-5221,24970,24199,-21536,-8880,-27402,-16682,-13478,29605,-9536,-29278,-20051,-22976,10949,-451,-18019,19025,1988,32273,-21946,-17835,2463,15960,-9415,-6430,29433,-14898,30999,15158,-591,-23895,-4899,-11599,-718,-17197,-27176,9981,-31115,32698,20598,-6748,-2981,2671,-28615,-28183,13857,-19623,21344,21355,28580,-26269,-9521,10124,27320,-30093,7281,-20117,12534,1708,-17828,13664,13158,-32713,19036,28483,-3263,-22855,-7378,-609,2770,-23975,-302,7681,4979,-5941,-13299,-20197,28092,26533,11538,15394,-19896,19407,27734,-8697,31400,18550,-26357,-22431,6626,-697,-24296,-16453,-13437,23794,-6332,16453,-12498,15534,-2035,-13615,18729,-11256,-25411,22463,24795,12107,-10781,19932,-31590,19701,-9693,16571,-18504,14416,-9703,-23435,29917,-2666,-16832,-80,-8036,-4836,28179,-4968,8039,25052,-876,-21665,670,-24698,30702,-19154,708,-26298,-30551,19723,7582,-19544,28564,-12667,19219,1062,17236,12231,14956,-23417,2183,-9394,14646,13916,-18662,29123,-11042,14950,14029,29923,-11515,-12891,7579,27802,-1040,-4818,24645,22066,16365,20693,-9278,25906,-22656,-3436,9989,-2711,8576,791,-9501,-21778,20156,14238,-12810,-7611,7118,26161,8449,-29085,-16690,-13012,-25376,-1154,4510,27606,3683,10424,6311,13949,9058,18700,-5545,3693,-11910,17364,23810,27680,-20654,-17286,-13503,-26010,11359,-22768,-27266,-9231,-549,9204,13620,-13483,-8785,-26012,32263,-21519,16583,26506,7251,17283,-21022,25872,26289,10923,20951,7348,-31079,-7659,27479,-6177,31090,10516,-29317,15740,28170,-4430,-7275,-32186,10116,21636,12465,15607,-8439,-28499,29198,-5236,-17444,-17147,-7423,-22490,1656,22885,12465,13451,3277,-9594,25769,-19426,-962,-10368,-28044,-821,9130,-19455,-15543,4906,-10599,-29011,-9072,19256,11741,-14303,-9439,11187,-19399,-28103,2490,-4277,-30867,14782,-5813,-4127,-15406,8517,13034,12453,2533,4987,-8656,-15745,7894,-32275,-6643,-28579,22226,29991,27014,-2914,14364,-13140,-26917,-23013,-24935,8219,-10401,-2294,-27070,24636,-32048,25094,-13767,-8263,18808,1266,25504,-15126,1677,-4901,-13940,30199,-17203,14237,11652,29725,-6879,24128,-17803,-17998,-26581,2653,5477,2967,21006,6132,3660,31365,-22491,3955,-6167,3369,22626,-1275,12500,27984,4647,13422,9058,7017,-30760,-12317,9448,-3950,28576,-19302,17282,-26795,-26188,15080,-16901,-24500,22643,13680,31693,12719,15361,-6496,-3884,-23501,5884,-21629,15938,6107,-7505,-3650,30719,-12355,-32481,-8821,-21683,13998,-30409,11184,1514,2583,-23765,14919,20517,23474,-25972,-31352,-11229,14541,-28846,12826,-31814,23886,9681,-7644,-29918,14414,-8756,-27224,-26806,9548,5,4412,11243,-25008,-23423,21096,4260,14974,-29025,-8678,-19814,-29727,-10945,-30548,-13991,-26847,-16748,3987,-14196,9744,15529,-15914,6732,-223,21849,-8788,-7498,-22217,-5905,14740,-22293,9510,21544,1337,7378,21870,370,11831,-17731,31865,-17355,18066,10256,-12391,9687,-28807,-6826,-8941,-16159,28302,22170,-29424,-25777,12403,-6846,-11117,25970,-32397,27426,10608,20847,11750,-12379,18537,14260,3230,19539,-22095,32649,17497,32703,2191,15132,-29385,-8673,-7499,8248,14096,28698,-15215,19627,24905,7737,-30921,-20224,-9206,-16650,31602,7349,-8043,-3219,-31024,30057,24287,-18627,-22180,31441,26382,-29497,14402,-5606,21598,-8121,23009,7952,-1075,-8932,-20203,-9189,15214,-7388,27439,-19216,-8199,-21455,23304,-23041,8548,-25107,7899,15204,-21809,-31214,-4257,-20078,-31087,-29235,29915,22102,24289,15512,2774,-2901,-17706,27321,576,23490,6129,12998,1815,9579,-3370,14327,6749,5824,-20244,21646,24455,-12596,-29142,-11739,17400,-111,31452,-27300,14846,7433,25606,-24030,-31560,31329,-14797,22452,4932,29071,13257,17228,-13100,23887,-4496,-12334,2326,-2087,-15441,4942,1128,13406,5312,30896,-15530,14450,-31012,-28212,-31342,-11806,-27666,-21604,17839,-15033,13036,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};