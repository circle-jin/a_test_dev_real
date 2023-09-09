#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv14_input_int16_test_data.h"

const unsigned int g_conv14_input_int16_test_data_size = 2112;
alignas(16) const int16_t g_conv14_input_int16_test_data[] = {-17510,3751,22003,-24853,-20269,32744,-3837,-24530,-25991,7950,27632,9158,-18500,19697,-7445,-28883,-5184,24439,28378,-9282,-7691,2304,-29294,6741,24332,22442,-4475,8250,-30626,-23754,-8065,28488,20716,8140,29728,15131,-4420,26550,-18389,-1843,-19784,-28394,23174,11138,-20372,22009,24020,-14673,17777,5591,-181,-10102,10014,-30355,19163,-31035,29426,25767,-20347,232,28093,-31969,-27289,-27747,29692,23933,-17464,-31900,-6770,-22330,-30786,10825,-12141,23732,-8959,24257,-27857,3101,-16396,-14106,-24425,-23453,22077,-2669,-20860,24751,-10936,-14260,3194,4761,-10754,-23285,-31048,14364,-22378,21849,-8015,-29464,8144,26209,20786,15820,-20445,3302,6461,-19214,-30412,-2158,-16338,-2133,21253,3636,13524,5273,10875,-8823,-4131,-1912,-8733,16063,8004,-31725,-32516,-4590,22531,13502,-4403,26205,-15405,-29650,20699,29236,24983,6818,21244,-30167,11786,29027,-31541,-27840,16759,-25118,-8026,8755,9546,-28756,15086,11992,-20468,-23376,-29044,-16322,7497,17368,-28654,4167,-29411,-12808,-1309,32130,29167,-31303,-30820,-10420,-25040,-31225,32390,-1696,11001,26673,13587,1893,12841,-20688,-11282,-18485,20849,-14062,980,31266,12233,28750,-27015,-20360,-10164,19328,-4356,-22519,-4168,15479,-17771,-9720,21816,-12840,26960,1349,32412,-6019,8882,11499,-28815,-18884,25703,-20354,-5036,11688,14216,2139,28115,15210,22923,8670,-17973,29167,32334,-2738,-7030,-17186,2364,-17716,24071,24543,-28158,13836,27509,-22745,26251,11119,-18616,30037,-23256,-25818,22380,19513,13544,-25605,-10115,10120,-32249,206,-19031,3176,-5536,-8874,1101,3371,3829,-13589,-22710,-24444,19871,2131,-19851,-27409,13509,-27406,18335,-16311,15646,28152,5978,-983,-16528,30336,-1108,-24646,-11953,-24637,-8987,-24926,19754,9049,4959,11177,21752,-1026,10420,-11736,2358,28590,-6281,16366,12517,19005,-25179,-9332,21053,3639,2116,9706,-30402,33,31043,27675,-25818,25697,21023,-11306,7459,32015,13025,-7544,-10818,11326,-17403,-21570,14343,21270,-15216,19972,-6690,1613,-24416,-11443,-10327,-18692,10971,28795,17193,-9239,22465,17388,7550,-4066,-23192,19450,-32334,26087,9203,-18397,-17409,24067,-8186,3422,15520,-31880,-6930,-12874,-22239,-6799,21571,-7077,-17306,-16875,-27108,32766,-10174,-1369,215,7259,10807,25211,6005,-7236,-11091,10574,-3657,-26424,22532,-16432,10505,10054,-14580,21194,-32135,30078,11939,15105,-11480,-26939,9233,-32741,-14501,-17540,8559,21348,-2049,5756,12767,-5996,2346,16566,19539,-20212,11290,19031,7895,-29295,-9426,-24696,-27491,8132,-18879,7637,-3227,10130,28878,22021,18011,11781,30737,-16413,32584,-660,14509,6201,23061,-10152,18843,-11022,16646,-2321,32706,-12547,5446,-31574,-8731,-1453,31669,22879,11117,-26106,31595,31018,4329,24419,-16131,-19930,25609,32403,-4326,15303,-696,2824,20474,-13728,-15262,-14456,22310,26792,17800,25383,-30935,-11714,30842,-22785,-19989,25234,-25743,-2676,-6176,-15328,-21533,2644,-26465,29853,23697,-31462,-30992,-7370,-4869,2257,21002,-18025,22744,-31359,32239,32669,-18211,-21818,27513,25159,21975,-2767,31370,14581,14906,-11639,-11209,8143,-24447,-7178,15237,5980,7836,-29979,30768,3997,32089,-20633,26392,-1677,6214,32130,31206,9343,-23072,-28946,27401,-18480,12346,13883,-24843,26538,-25240,1948,9553,-5305,12117,-22677,18968,-27903,-10017,-7935,-1863,127,25275,-23441,24760,-6129,19969,-7961,9621,9110,-31675,-19967,10584,-25125,8197,14220,-18623,15761,-28247,12004,10434,20162,-27072,-31391,28259,-5777,14941,20503,12155,-14175,21866,-4206,-5332,-10232,-15647,-1601,-6574,-1054,-25592,28952,-3674,14127,-6597,-21152,1701,-31676,-5036,-3171,6388,17477,938,17088,-1574,18792,-8857,5404,-28200,-6514,24922,-16379,31574,-4591,-24912,-25608,16087,27977,4714,-10854,7466,28995,-32253,32397,-11484,-1116,-976,27844,-32559,-2799,-19259,15931,7532,-2917,2275,-23546,-20714,28330,14850,-27052,-10286,15515,17326,9209,-29514,28767,11967,4599,26427,-13312,-1818,22023,-343,-28780,25045,10268,-14220,-26415,-29564,29278,-25022,22646,18275,-13198,-28696,13425,28513,-23455,-15331,-9203,-23777,8199,16326,-16694,27332,22281,-14819,-31292,-12987,-21670,18236,-2601,11262,-23589,-16827,-6230,-13411,-27607,-28346,-15725,-25425,-21361,-12677,-3383,-27854,3298,24108,11173,1015,-32235,-23460,9289,-15027,-19041,1053,8033,-3339,-5921,4674,-21816,-4045,28014,-21489,-9751,23163,-16400,-10127,18641,23764,1596,-25969,-17624,15639,-29146,-4737,-20633,-3839,14103,-1359,18743,-7972,620,16844,7506,-2127,-25183,-8658,-22606,-21553,1275,-28713,12634,12922,20357,23949,-28916,6208,21302,-10011,-18111,14043,-11257,-20105,13482,-28322,-4563,-17505,-17367,5197,-21243,-14657,13388,-11886,32162,10052,-2916,-1868,-29557,4955,-6233,-10807,-24015,-27081,15437,5759,-3083,22967,-26011,5219,15360,10056,5025,-4588,1963,-19481,30510,13334,1655,-9074,21816,32541,-6481,-10433,-29935,10064,-8058,16306,-17967,-28193,16435,-25332,-17989,9511,-30702,-9832,9472,6872,22782,-976,1139,19130,8685,-23390,-13974,-12547,-27494,31189,23771,-29845,10290,15568,26933,4485,-18278,-32335,9432,3425,24432,18294,814,32621,-9253,-31712,-4674,-5050,11936,-23584,-569,-5289,30737,12914,23305,28796,-2978,10972,27513,501,1722,-7999,8991,16693,24057,14460,29928,17266,-30795,29665,18855,-18087,12984,978,30706,-26723,1281,-29293,27307,-7414,-680,19061,13433,19625,30195,13596,879,-19693,32217,-5009,-26203,23973,-20013,-21667,-18647,-19899,-2221,4709,3015,27686,21133,-16330,24939,26266,23641,7091,9839,10847,24403,4079,-21157,-1900,-14238,19858,-17838,-24187,-13623,26866,1481,31982,-9230,-24339,4390,-18626,30868,7828,-14324,1594,13478,16942,-15137,-19904,-18865,-31526,-18642,-26492,-4600,873,19823,-4441,-22045,-27629,-27998,11591,3744,-2739,-32082,19717,17292,-2820,27256,-23795,-2484,14548,-16871,-12705,31919,15855,-15015,26026,30468,10086,28434,9737,19212,-5398,-24974,-2636,-31832,17862,-29314,-16924,-12757,-825,15369,-13634,-4790,8728,31525,2287,-11338,12417,10965,15235,-13247,15966,-17075,-27963,-27090,-29874,-31749,-27654,-8668,24361,17514,5991,-31415,6421,-15343,-19958,15798,10085,-10536,1507,-25908,32579,-1602,-30681,15805,12932,-10851,-14331,16856,-25160,22725,12866,1637,-29523,-9364,-17712,-12064,25048,17800,-30643,-3859,-17614,-13926,-26294,-10857,29554,-29476,-3874,-24833,-27854,31097,16564,31767,8130,16948,31910,22457,-29347,18269,-1755,-18641,-11571,-4132,18901,24404,29549,-22691,-2005,-14055,-29380,-16102,-27418,24863,5405,22402,14359,-21275,-15862,-11168,-3770,-15185,-24964,-21842,15161,1506,-27153,28300,-18098,20665,-13143,16504,-30803,20301,1040,-30684,2487,-12883,-9678,-8239,28365,13795,-25884,-19649,5778,16761,-24948,1532,29355,-22087,-13559,4291,5977,-8746,8919,4856,-5109,15422,2635,-21438,4561,16137,-7081,-8804,5323,-21065,-1524,-17658,-24029,9667,-1442,7919,6908,29163,-10366,15764,25488,-6647,-22939,17154,-9555,-23610,-18325,24081,27199,-32421,1101,2408,31699,-24294,-9565,-16656,20943,20532,-4706,23894,-1261,-11702,-22815,-12800,-25347,21266,-14229,-32095,-30923,-29855,2480,20837,-31937,-6313,21000,25697,-17708,-9424,17484,14635,16834,-7480,-31829,598,-20005,-8435,-19451,-27601,6752,-4507,11569,-10356,-24566,-1545,17327,-19980,30334,-14030,-20246,-605,-14230,-30273,-20736,-32155,-32599,1384,-4948,-12117,14105,22009,-18494,-12091,-14668,9038,28471,17201,-26722,-29493,-1057,-19472,7850,29955,-12185,-11674,32073,4864,-13759,-7434,-6689,8533,13409,-32648,24320,-2851,9767,-26003,21340,-30060,32010,7905,-7938,-2237,-31068,-17921,-1319,-30716,-5388,4658,18275,29034,5855,-21254,20692,-21288,-770,-22203,-10508,6492,11257,-3456,-16515,19656,-22084,-21761,29242,-23056,5594,30446,-7886,29026,-11161,20323,9113,29254,-27077,14336,-7430,-31201,-17022,26203,-19793,-15327,-12915,4533,-16755,-27195,9543,-28720,-12052,23245,9995,-18552,-24507,-21862,27575,-16525,7600,-18579,-15023,9187,8003,11487,-13996,19979,-24936,-30050,-18734,-6707,-27161,-12936,-29888,3889,32529,-10948,7254,25385,23891,11379,-12585,-25002,23793,-5269,31623,-25647,4075,-5411,-23148,-30104,11936,12098,-5202,4630,-4881,-28169,31450,-28135,-29241,-11665,5248,-18108,15247,-242,9476,11683,17567,6730,-21427,29903,26401,30309,-24400,-24438,28147,-18203,29849,-30320,3727,11908,27934,-5163,29921,-32169,-22438,24062,14524,-23275,18079,19478,-11878,28646,7236,-16164,-31402,-23585,390,30111,3585,6893,6869,20663,13986,25614,5595,24098,-23646,-20888,-22034,26102,-18353,4989,1467,30313,-643,-18537,-4103,-10244,-14787,-27394,32141,1606,-20895,19563,-17406,-10728,9819,2237,21882,-20708,8974,9476,19247,-27650,9856,29806,27149,10872,-19107,20013,-16520,12027,28417,-30066,13687,2885,6565,29594,26738,-23494,-22470,-13932,-25522,-20440,-18915,419,10201,-5579,-21327,-7980,4527,-17360,18139,15714,-4583,9030,22105,27283,28872,-497,20059,11763,8224,11113,-15877,8772,1725,-13956,8945,-4063,19330,1881,26839,25,-8608,-14088,22302,-10964,13136,23529,-18821,-30208,11922,3810,-22742,-10262,20606,16007,17386,-13087,-432,-27648,19035,-12735,-29638,30351,19862,15976,9914,-20531,25893,20775,-15174,-24983,12797,-31210,18927,31315,-30985,-23895,-32356,8734,22004,-2966,-28698,-388,699,8482,-24254,10722,-30483,-9942,-15464,-4323,12750,-16861,20242,1608,-4532,3373,16238,2267,-25581,29781,16040,15069,-6692,16549,-2454,-2292,-32294,-6792,28142,15964,1361,17800,18943,-30403,5162,-11816,-31478,25433,9179,30485,15182,8291,16773,-2171,-14207,17307,-25705,14915,16519,-1759,1713,-23125,27286,-19180,14908,31396,-23764,18724,729,-13948,25636,6026,-27164,-32027,8216,24225,29234,10296,2365,-9729,-6408,17810,-22484,-11364,-32480,-18423,9945,-2388,652,-14729,-2297,-13017,-24200,6541,-15439,-12271,23818,-17338,31676,-6233,22122,31775,-3393,-17939,-11491,-22952,1808,-27379,23171,-19609,-15087,14409,28764,-8344,-27036,13981,-11519,-22224,24682,-32241,-20176,2228,-29650,24937,16666,29999,-14957,-24276,1847,9879,32485,-18735,17159,-24516,8346,17350,-3547,-22194,4625,-7230,27277,8194,19489,-5909,-11388,-4247,26314,10776,22459,-17405,26089,-22163,-29488,25245,-9492,28607,-8027,-11742,2140,26137,-10719,26736,-20191,-32620,8983,10176,-8371,24693,1543,32449,31983,19172,8351,25446,-23085,-2700,22880,-13541,-19215,-29629,12956,-14297,-27951,-1087,-12316,-3190,3690,3647,-21954,12918,-27693,-24279,640,-4833,7479,5396,2110,-22526,-6505,8086,30954,-27634,2859,-13838,-20834,-17181,-10958,-15708,-25456,23424,-32674,22402,21323,-6165,28235,11071,22622,27705,-14343,7716,-6133,7276,-3284,25908,10176,-25925,504,-20210,19943,17724,-5480,5291,17051,23218,27616,-12820,28575,21224,-5506,-9007,-12855,-5201,31294,-28284,-17399,-1209,-24611,-20643,-14732,32122,19447,-13888,-6466,2195,-9781,-29729,28840,26367,23182,-27005,-8078,28585,-16748,-10844,1703,-1285,8374,18855,6868,-32324,-496,-28407,-14271,-10581,18298,10934,-8958,16014,6961,20758,-5125,-23373,-22942,-18258,17752,-5675,-20918,-18746,16937,19264,-18611,19332,12757,-24,10061,-5502,-5820,-25678,-26219,21558,2622,2292,-14953,-13732,-11659,-11283,27966,-18378,-7274,9479,20429,7611,-6125,14220,-27457,12502,-12549,-10606,12692,-17756,20580,-25623,26596,20980,3639,10644,-28218,-28777,-8772,-21375,4696,19412,28580,-23174,-21984,316,-11765,30233,-30861,-22248,29023,-17164,31539,28716,8412,6508,-23581,26168,26337,26124,-14709,-5695,-4433,-24473,-1045,20482,27999,18479,-790,7042,27543,6857,-22548,328,-20752,4228,5746,-11889,-12454,28218,30985,22022,-11455,31550,-30966,-12966,-25486,-2572,-25847,-3616,10507,10991,-2078,-31261,866,26746,-28656,-30936,-10808,25627,26842,-5369,14213,23841,31942,-20568,4354,-11604,-12757,3629,4859,-2077,20241,27861,-28066,-30348,30340,-7169,9546,-12843,-22316,27791,-26542,16671,-22557,-19162,13362,30796,-11419,-15386,-22708,-2316,-28612,22357,2922,21647,29902,12865,-23342,11,11235,31426,26765,1018,-26579,-22188,-11498,15732,-30231,-26335,22062,-8634,21536,-3575,2628,-19467,31203,7323,-7358,27318,2479,-17165,24385,16492,-13498,20746,-27658,-24056,-24347,28666,7610,4937,9892,-11262,1152,27672,-18936,15084,-17510,25140,-5868,19960,-26112,-7903,27251,4063,23395,-7314,-10277,5452,21683,5656,18708,6011,-8136,-5098,17406,-21301,14934,-25757,-7068,-27406,3150,-4238,17407,6546,-2697,-4136,20311,19197,-3610,25637,-13986,9259,27800,15255,18166,-15363,11628,27777,-6167,8327,-10174,-3717,-25191,-19325,-1625,-25560,14400,13531,-3799,23553,-17138,-31128,-1307,21548,11944,2870,-18443,4659,-15780,-1610,-21813,-1635,17940,-12515,-2433,26526,-1644,-26039,10631,9838,29574,6097,26625,-13034,-10118,-27973,23882,-29309,18810,-15759,4162,-8293,-31671,21949,679,-8472,13945,19523,-5237,28968,31684,-2984,18710,-28664,19185,-24550,-5464,14282,4658,-15358,-30185,18052,-1625,22488,-9311,11479,27147,-2270,10513,-13360,8560,12394,-5848,19560,-23661,13001,-9170,-2605,10532,32040,-3974,3833,3601,-29506,-31969,19017,-14157,21008,18678,3865,-2602,-23513,-31049,-9518,765,-21822,5445,18720,5817,17202,15262,-226,-29102,18887,-31361,-21610,-27050,13043,-26645,-17551,-26222,15471,-5260,31913,13323,7605,-16767,29819,-22008,27209,-16405,-10488,-21193,28697,-5013,-15870,12006,22550,-2144,-3907,24274,29689,-14097,-25619,31989,18470,17254,13838,-32005,-17489,-9065,32192,23784,-22339,-16759,12974,-5311,18448,-20768,5189,-16141,-32032,-5357,32156,15378,-759,-9924,-21298,-16425,-17346,2222,-10670,-6736,-13394,23441,21274,-30259,1430,14437,17934,-3912,-30633,-9440,-16611,-23785,-10049,-24967,-12637,-25206,19409
};
