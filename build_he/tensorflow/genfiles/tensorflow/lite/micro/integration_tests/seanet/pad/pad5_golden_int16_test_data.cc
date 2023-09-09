#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/pad/pad5_golden_int16_test_data.h"

const unsigned int g_pad5_golden_int16_test_data_size = 1344;
alignas(16) const int16_t g_pad5_golden_int16_test_data[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-30387,415,-25277,25360,-31406,9961,20075,-32549,-17387,-29191,26436,-29789,-30223,27977,-32254,11331,10773,-29871,-1345,16733,-6567,5077,-14748,23602,1021,737,18140,-5726,31295,-22512,-18032,9925,-7734,-17123,16237,23374,21134,-5178,-19804,-26421,358,17947,-26203,-20707,-26246,765,23923,-3983,28670,-31300,-1580,8842,15931,10365,5985,-7854,21757,1362,-417,3618,-23318,-31537,26469,12511,-10497,-1085,818,12233,-2206,9803,-31466,-25404,-18252,24697,13806,10430,-31615,-28913,26743,-27808,-1678,-6658,-2812,-31021,30127,-13585,16294,1500,-25919,-26704,24987,18564,-20445,31684,-7755,29619,29317,10357,5071,-13749,9485,11746,15821,-25094,710,15304,12460,2041,5780,-31736,26479,30357,28234,-3044,16207,-25481,10581,-4814,24144,-25777,-22993,21133,5247,-2190,27336,368,-32455,-17280,-8566,16436,-26696,15257,-7904,27572,-14266,32289,-15227,5095,10885,23691,18376,-10807,13809,7082,-5444,-24470,26878,-2824,18941,11882,2912,13605,-29719,17330,5968,-15410,-24371,-8432,3636,277,1230,-30727,-9968,-3322,13691,-20522,22348,17222,9288,-13603,17756,-10189,-23839,-32069,-27802,-22511,-1005,-28591,-6234,-1261,-10332,-16581,26269,-11812,-6988,-23043,-606,-20377,22465,9473,9565,16860,-190,14995,-23077,-19162,-22403,22890,-23809,-4002,21268,22009,-29374,-29112,5027,-30179,-31448,11481,-27428,4494,8371,-3786,2697,640,-10738,9283,-24719,-7866,-22745,17209,26254,11106,11541,-27661,-7905,21469,20800,-9786,9479,-12682,-22491,-25195,-7452,-23508,-23363,1722,-8455,23789,19050,-26648,2989,-11287,-10782,-26093,12689,-5264,24533,-13058,4234,-13905,20323,-27812,31604,-2410,-6303,-1031,31682,9994,29380,-25582,22903,21512,-6557,30602,19804,-10405,13325,-10328,-12811,-1531,19048,31431,29240,5040,13696,17235,-32520,-19113,-31637,-28842,14408,8567,15857,24839,-22133,12251,-13602,-28005,-25710,-10990,-9210,13022,13260,19214,-27363,-9616,12555,-1989,-18090,-20245,26670,-9669,11945,32175,-22093,28380,-27938,-4811,-21460,19190,-7583,-6703,-27341,15177,12451,13279,6111,-3358,1907,-23415,1668,28038,-12293,-30619,-31830,-10983,10316,15959,21492,-21874,31628,-19135,-29357,8254,29359,19816,-31404,-8504,-19713,-10339,-3293,-4808,14828,-14342,28914,-20296,-25421,-12755,-26496,-5611,14107,-21545,-23413,2109,-11060,23151,12874,-12968,-9647,20867,-26729,-21290,30721,-13797,27130,11862,-29522,8610,29228,-12282,-5866,637,-26046,-11619,-24373,-30157,-1051,-19119,-298,-25796,22798,-6786,-11555,-25513,17750,20895,24983,24480,-29137,24120,-23980,17896,22504,-23589,27475,-19458,19183,11179,20397,23909,22268,18119,15542,20453,21399,-31458,25940,12294,-29076,-2559,17698,27367,-16513,10360,4898,-11598,-5171,18460,-24613,7553,4009,31538,-20740,-29409,22308,-18950,-10881,-2173,20856,2791,-8224,2012,25959,14947,-3573,9478,-7910,13703,-11925,6081,-13730,-7206,18708,-31579,25436,-27942,3933,-13456,12054,17654,28338,7127,20431,24184,27366,-9210,-13956,-1306,22638,-6900,-23394,9855,10255,-27582,32291,-21988,7033,13838,-12842,4881,5814,31204,11026,19606,-1920,749,-30512,10145,10943,-9039,4204,-16730,-4942,-9883,16239,17565,28671,19596,-1994,1888,-11551,11993,11110,-25235,626,1491,-16341,-15069,-6025,-5190,20484,19726,-21522,20401,23263,-1142,-13659,1882,2632,-27554,32127,-371,23399,22877,21438,5420,29450,-18416,-11750,-13717,-11893,-4886,-13710,-6076,60,-9601,-19480,17499,-9520,-11298,32520,-20881,21860,13808,14690,30579,2883,-15778,-21509,27308,-22584,-20845,29488,-24880,-5916,-17077,6290,-27247,-4935,24497,-11888,12237,23492,13020,7806,-10078,-3499,25040,-19104,31233,-20495,4992,5100,-17677,30809,-8666,8429,-6502,-7569,-30994,-31786,-31487,-15290,-20289,-10190,18271,-8039,-638,-23128,28814,-31276,12690,673,10924,-15068,15705,-13322,-16474,15022,4936,-29600,-15648,-2872,-229,-24030,-30771,-16388,3526,-28866,-30683,30332,-3755,7238,4953,3119,-31530,2203,-6728,1418,-25388,27443,-2101,31721,-4911,6858,-14165,-10421,-7885,-22346,8952,8356,4144,7064,-250,-31321,28022,29115,5547,918,-24382,-30777,-28682,-32542,15777,27117,-3,-7820,-1756,11520,-22376,-2498,-8736,-26362,20284,-24554,-4897,22702,-5115,15382,1582,-9977,23155,-7615,-6168,25887,-29355,-20764,-5881,-8138,-30157,-11429,-27662,12735,17058,-20769,-14031,20272,-30922,14338,14194,9392,32099,-30745,29345,18900,-23908,18372,19306,-13069,1952,12201,-16080,-29813,-30579,12342,25978,7087,25473,-12400,-23540,-11432,20527,-9904,-27510,-18754,9148,12938,14901,-18531,-9258,8198,-30874,-7825,-15966,13640,30403,-30920,-1277,-1826,11770,18192,31298,23761,8719,-5724,-24382,28027,866,11137,-26928,-31255,-22726,31569,-8399,-29945,22531,-31856,-18042,21858,-23064,-17706,24686,220,-14294,-16986,3251,-12909,-15294,-17528,-11196,23171,-16214,16379,21185,25197,18240,30464,-30758,8123,-31486,-2863,-23813,9092,5073,27743,1058,10852,20423,-18732,-30517,12798,-3527,-6371,-25855,-28867,2266,27446,-20210,9309,-1586,15569,11410,14264,-24558,6937,-24112,-25921,-24108,-31613,-13813,-7472,32353,-18276,19292,20871,20923,15977,-6521,-11959,20229,17409,-15519,32139,-8372,-15963,30604,-335,14066,-14040,14145,-8055,30756,-7547,1188,25113,-17294,18923,-14667,-568,-15245,24101,-31133,12695,-18661,-8067,-23349,-13923,-4489,-18986,-20403,30447,-23467,-29108,-31828,-16620,9453,31856,-28053,-14722,-30691,-16304,-2913,81,3109,26993,15249,6938,-16984,-24791,20215,15960,15361,341,28287,7555,-32120,6659,23737,-2082,28374,-4464,-1927,27221,-3708,12724,-9194,20800,-31442,24660,-7806,-22698,12123,-28494,-23941,29068,-5748,11180,9161,32177,-5311,-25559,-5279,7058,19893,-29204,8058,-23429,32366,-7212,3469,-845,8241,29806,23484,-23358,-6109,13577,-30102,-28411,28120,-30220,29618,-29447,10728,10689,10827,16910,-11118,-13293,31631,-22965,11750,-6368,4754,24383,-5543,-18330,8589,-4057,-10822,-15166,31334,-1106,-9458,23752,9588,6317,-8578,19668,-13307,-4629,-7198,16679,-31365,-3205,16058,-12372,30408,4305,-21893,17414,-20839,-6420,-8125,-17749,-26058,-12564,-19018,-3373,-6376,17916,24122,15716,-28680,-6715,-14089,-2368,-14343,31865,-13151,-16090,19445,25476,-698,22864,14920,-8553,-25253,16927,-3794,-24978,-31660,30751,17124,15841,-8625,-23389,12146,11891,20362,-32266,-6760,22637,1167,-9431,10809,-24288,8916,-16001,30467,15238,25000,30980,-17452,7235,13911,-26356,-30645,24293,5520,-8834,-10021,-27431,29199,27968,6277,-31078,17286,8618,-11967,-1724,-21283,-14733,18446,-11112,-8227,-29916,13226,-26750,-31901,20360,23925,-30347,-2014,3397,-13772,7725,19624,30730,-3985,25458,11141,19519,-29227,-20627,-10823,-14870,-23285,-32503,-28778,18257,-323,-18834,7419,30265,-5323,12725,-7576,23273,4114,-2838,-7478,6528,19625,18749,26791,-30554,-10942,4695,15092,21057,30322,4766,-18691,-10474,-30357,10173,7292,3377,-1647,21923,-28004,-21481,2028,-9254,28872,-7109,-15236,19107,8920,13425,23410,3435,25557,10489,24345,14451,-15187,-31020,-3561,-12286,11763,-12595,-5398,534,-7123,-1268,2532,2771,-14227,-1749,-6119,-27623,-25737,25277,15494,-8043,4672,-4432,-5149,-3412,-1987,-6145,-1762,26252,5195,9406,25060,-25317,-4532,21248,-21596,26264,23061,27374,-11004,13680,-8183,21131,6170,14838,19076,-10306,-8415,-12531,9222,26822,12171,13007,9569,29195,23373,22710,8348,-7403,-19668,25038,5963,-31588,17450,-30158,-27390,-6949,4898,-26161,27298,-16332,21707,-27911,-18066,9810,8083,-26933,-1509,-5249,-13230,4143,-222,13597,-4894,-9488,-21385,24135,15694,22253,20555,3617,28250,15242,-24623,29047,27224,5412,1447,27560,4107,14250,-5135,18665,20190,-31579,-19957,-13908,31263,19423,18926,-30046,26271,-17724,16718,-11042,-18121,-20339,11228,18420,4196,18951,26742,17329,-28592,-19371,20591,21118,-19093,17323,-17669,-781,2202,-23165,17695,28905,9046,-32164,-20142,28070,-8395,-14961,1583,-17525,-12706,-24478,23626,26901,-30020,-12069,-194,-19071,-12331,-14424,5052,1876,-27782,-6630,-21311,26583,18694,-6324,14803,7103,25330,31089,22213,-629,17335,24921,-6489,24881,-30506,-20004,-1435,-16648,-9437,-15464,284,-12229,29213,-26581,-11165,1879,14889,-23653,12114,6594,17625,14046,1400,-20687,-4904,-18645,31554,29997,-24770,-9381,1811,-9467,5550,8064,17886,-2413,-28721,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};
