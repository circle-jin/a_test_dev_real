#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/add/add10_golden_int16_test_data.h"

const unsigned int g_add10_golden_int16_test_data_size = 5248;
alignas(16) const int16_t g_add10_golden_int16_test_data[] = {-23449,13918,4779,-21555,19342,-773,-8267,5105,-20476,795,32767,-19070,7207,3060,-13843,14526,21308,-10162,-24765,-12174,-1676,12386,-24339,-11966,-19046,11656,27581,-11877,3529,-22953,-26814,-11655,-14788,21578,-19808,-3048,-3827,-2346,-12924,20423,18092,17973,-18336,5026,-16449,1053,-25770,-18576,-10324,689,17727,-11880,-30514,-835,16860,-26507,12137,13332,-5904,-26687,24700,16565,4427,-18300,-8701,-18753,30301,7059,-2102,26382,8058,24414,32767,-7794,-4543,26864,-11564,-12696,1632,14774,13654,12091,-22748,-16367,-18264,24914,-17394,14994,-11166,-16550,-19836,27578,-19438,-20461,-8148,7826,22204,-11052,-12785,3725,3361,-3463,-5823,20265,28812,13950,-22972,-4860,16274,-14276,-450,-1242,-25536,12559,-5794,2854,-8661,3960,-1596,13412,327,8424,-7439,13505,19826,1049,-6310,3728,-3502,12373,16913,5138,5496,-3329,1247,12660,-12842,-13070,-32660,-20306,15030,-366,17692,-5839,-4774,13327,26796,19062,8927,16547,4680,5018,-29264,2160,-29842,12432,489,2581,10806,-28147,2081,-388,-6514,-4568,-9860,-5177,-13773,-18387,-28783,28425,5615,25048,19760,11729,-535,-12985,-14352,8293,18946,7998,-3447,-6179,-13580,-20180,23299,27849,-32768,24415,3907,-32768,403,4434,-2358,24569,32767,-11131,-7159,-19586,27430,16483,-11509,-16045,21825,4958,-6074,-12667,10483,-7967,13833,-13371,5189,-2574,-19820,9382,3360,1698,-5400,13823,8384,-32768,29947,3184,-24361,32767,-22221,-30694,-20041,12670,-14396,-30513,7186,9749,16985,5340,-12859,-9870,-9560,-13039,-3093,-10729,32767,-9339,21582,11503,-5449,-15412,-18459,-4713,17748,-7355,30197,2388,10671,-9748,-18978,11822,-18753,-26798,-2312,-14901,4708,9635,16547,-22420,6256,-23634,13228,12029,-2010,-32516,-13416,-4223,5310,2022,11424,-20411,-14908,-28097,1096,13278,-24995,16869,-18391,16404,14679,-6053,9504,32767,-1734,16198,20405,-6820,1041,15421,14281,-13080,-18497,-20975,-12521,17420,-1015,-16147,15399,2587,18674,560,-1936,-27049,16057,5423,28796,2230,27296,-8292,-15158,21579,-11590,-29321,31848,4443,22833,20180,-25632,-6345,-14808,26703,-595,17802,-12216,23852,20106,23066,30746,24962,32767,11161,-14663,10821,-26185,5226,-25857,-24710,12257,27437,-26028,32767,-12158,4181,2811,-4492,-17282,238,-22663,6250,-18521,-6587,-26345,-13323,5569,-22303,7244,-7512,12853,24874,32418,-26951,9269,26269,10011,2502,-3833,-18751,-14286,-29187,4705,-1528,-13741,-8488,4033,1193,29493,24490,-10650,-16042,-3660,-12133,-8360,-31015,-27466,-15692,-17570,-9236,6263,-17322,3840,10769,5275,3306,-227,20472,27767,-2219,-21583,-1864,8255,-17290,31115,-27586,24917,-18201,-2315,2447,16310,-17409,-4163,18988,-411,3846,-12169,7019,19173,29244,-3446,-29810,-15377,-11263,-21598,5479,-4402,8204,-25034,-5009,-9212,-29711,-6694,32767,19265,24676,32767,-8787,9974,-23736,-24711,3664,-14749,-28956,6137,-20590,278,-15968,15407,-19476,-981,-4630,6372,20195,-28148,10027,11034,711,21157,2170,554,11481,-2877,-22874,13333,303,9610,-11360,12093,16745,1095,32767,23541,924,-18760,17764,7381,21941,3566,-18757,-6222,4418,-1667,-21773,9438,21629,-20723,21439,-12208,32767,-29027,-8602,5206,-32768,-14177,-32768,-5655,-880,-18308,23757,18126,3466,-10419,6216,-9473,-385,32767,8098,-6751,-8429,-21023,-15311,6452,10523,2430,1963,-7852,17955,-887,14741,-29601,-7345,-26108,8053,7024,5541,6531,-23125,-12767,16756,-12362,8031,21629,7386,26672,-19819,-19190,16250,-5875,-1518,16133,-16201,-1556,11099,-3847,-14061,2119,28582,14059,-19696,-977,8091,12419,-32075,-20119,31918,9452,-13017,-15316,31951,436,-13706,-5552,17591,6418,1585,-453,-22738,-4722,-22225,-12890,10924,-15753,-8352,10513,-3952,5239,-19786,-4609,-10853,9968,-24920,13954,15081,-1120,27524,8760,-9368,26295,-23214,-1435,8293,32767,-25222,-25521,10688,-15708,-4885,-23338,18117,10765,-18297,-32768,-16657,-4309,-11676,-31965,9944,19025,3306,-20781,4225,3957,13660,-18861,-1917,-7034,-10907,-10386,-31182,-25480,-20591,4965,14404,-13923,5385,19984,-2749,17055,22748,-10845,-7050,-17045,10614,-13000,15593,-8611,-14579,24011,-27369,-7964,19618,23007,3504,-20123,-14280,-16986,-14938,21619,16959,-6103,-8639,10735,5861,7510,-4489,-12903,16887,-28082,-10561,30602,9526,2684,14637,-9605,18930,7349,-2284,-219,-20775,18164,135,9270,18733,6075,-32014,-19584,-13158,-18825,-13490,8311,12519,20172,11134,6712,-6911,6722,1406,28451,32767,29156,26416,-8117,10338,19132,-12952,4344,-26017,-24316,16821,-3648,-24356,-12263,16673,971,12187,-16635,17801,-5947,12418,32767,28218,-7596,13657,-25298,-8337,18272,-9614,-7075,-8167,11229,17143,19728,31218,32767,15086,11916,29303,-12603,31662,-21271,-27151,-7681,-22666,-27406,-10192,-6036,30220,-11154,2101,-580,-23796,19684,12541,-2853,11932,-7357,21277,22775,-32768,4988,13156,-29792,-1644,-7755,-19169,1704,-1677,-25714,-9584,-15162,28688,-18352,-7371,7632,-8464,-11386,-23770,8794,4373,18417,-6797,6377,-15858,8753,-9354,-4711,15420,-29658,18544,-19292,17134,-12267,-9048,13672,11393,-27279,21652,-20621,21318,23659,4399,30944,14420,191,-6604,-26390,-22258,14712,17467,11693,6979,16810,11947,18431,-1972,-8760,30602,10050,-32178,28523,-1084,-12647,21201,3806,9505,-5685,-14363,-3804,-12073,-4737,5113,19801,2171,-2286,-15746,-13150,-21670,1839,11255,4591,9855,-7708,20713,-7100,28390,-20080,-10900,-6789,29483,5507,-25847,-22509,-644,-29097,-29280,21085,28043,-25738,-6475,-9169,-12480,17132,-2129,-316,12496,11750,12482,4375,31918,-16593,4020,25175,-30563,-3062,14496,19055,13063,20248,-32768,-18823,-8652,22631,9182,-24298,-7682,-22828,14329,-11146,15537,-7437,5305,-2782,15143,-19636,-12026,15541,10490,17039,7591,-9174,7799,19530,17673,3633,-29071,-17240,-14744,-14439,20418,-29478,-28674,-2387,22472,25170,19732,8603,-19294,7359,25920,-19542,-27689,-26062,-16362,18132,30462,-25564,-18669,-21737,-1858,22988,-30166,-5921,-13465,29345,20728,-1853,-10344,-24489,-12153,-23336,-24468,26162,9279,-5020,3874,15418,29681,-19249,-13743,25857,17339,25114,-10476,-3234,-6430,-8648,32767,-18031,-7086,-32768,20559,6071,-763,-13070,-26073,-26712,9695,-21617,-16856,-16177,-2966,9918,26759,-365,-16661,-3995,-15812,32767,10583,12154,-9804,27107,9031,22468,15287,1967,-18764,-16070,6468,14369,-15928,-20304,-9620,-15771,-3871,12818,-2786,-11114,-23462,19455,-32768,19760,8996,13016,-1765,5790,-18119,-2242,25102,24878,-26181,2678,1623,6540,9140,-16341,9,440,6523,-14085,32767,-9859,-11730,16185,-11163,10383,-1775,-22443,-19302,-24122,14335,21933,-201,-25905,-1700,30509,-9583,190,6407,25485,5067,-32768,8769,-7179,-14063,-5830,19641,-3206,7513,-12427,9294,-3215,-18426,-14874,-13877,-12488,32767,30355,-1527,3694,11655,-11995,-920,-5626,-28207,-32768,-29405,-10476,-19644,-16305,10679,10016,13897,12710,-17518,14787,-15114,-25417,1138,-15667,18407,-4734,7034,-22430,-22473,-11477,-10586,-20785,-10989,8219,-8625,22115,8171,-13795,-12393,-18066,-1119,1429,17282,21424,-5048,3188,14832,-10083,421,-14624,22520,28448,-23195,595,-12954,7321,-20972,23690,20831,20078,-5828,-16846,12710,5726,8758,15390,-15716,-5037,14145,-17467,-7526,-29429,6282,-26840,15613,-17554,-18357,12852,5279,17459,17359,-20394,12177,21471,32767,-22042,22067,-11785,314,-6233,13831,9627,19246,-30478,-20640,13660,-20869,29253,10886,-5789,-28607,23220,-2569,-13322,13143,6364,6238,-3533,3318,-6802,18581,5547,1818,-6289,685,-14897,-24429,-27411,-22133,-21415,-16693,7257,13891,-5506,-25393,17283,-10422,4761,6711,6200,2468,32767,-18387,9833,-18095,14710,24529,546,-102,6504,11553,8147,-8018,-17247,32767,-15487,-20567,4180,8973,-9112,10835,4632,-23453,16221,-15265,1507,16392,30911,21577,15489,8577,-22623,-26061,17603,-19436,-9884,-30616,-7610,19786,7425,-24223,12342,-16818,7967,-20347,-2062,6447,14717,15493,-11805,-2325,-20792,14807,-9142,13860,31003,16026,18377,27858,-743,-28871,-23602,729,-9522,17455,28269,452,8476,-14050,17990,-27122,-10871,-3710,9893,26790,8662,-28552,18834,4159,-514,-5834,-24814,21472,-25004,-7079,141,13467,-8235,4746,-3319,-1187,-27400,-17692,-11577,-7793,-11230,-20814,19980,-29647,21507,6465,28103,10970,3362,-3150,-17144,-10105,9526,-12100,-21009,-6010,-32768,-907,-10868,21475,25867,13870,5006,26995,-31123,1809,20851,6262,18233,2203,16623,-1964,25521,29645,18382,23576,-28322,-31858,5676,14947,26670,-12706,-12723,7718,21977,-26226,-7256,-31786,16059,30690,25535,31888,13434,10587,8183,27536,18904,3148,12216,19753,2649,18545,-1407,-9126,-5797,8059,-28856,13778,1510,-1756,-20888,-8908,-27985,24384,-28987,-19451,-11243,5137,18520,-25823,-4008,6623,-591,-16423,15856,-25905,7520,19400,13673,24903,-20707,10875,19344,-2141,1265,-4000,9994,10049,10838,162,9619,5279,7781,-10581,8056,17695,21208,-25876,-11024,-16980,-8270,16596,-6066,-18855,-6352,-27282,-2825,-13495,12617,-18417,12715,-8084,4798,23092,10418,-8373,-13052,2905,-27516,32767,20150,-12386,-16418,17798,-3182,-25486,20422,29848,20664,-604,-22880,-7301,-13723,11940,-4047,32179,22014,-9754,3140,-883,6854,22585,26861,-6611,23117,29498,-11204,-3596,-5079,29311,9987,9702,-26894,24374,2193,5283,-557,-4206,22856,-2803,25551,3244,-3378,2654,-23435,10283,-11530,-26129,-2382,29340,-14162,13615,28025,8722,23856,8222,9051,-15611,6240,13879,-14780,16169,9091,-9469,-14030,-21284,32767,-308,12997,-10512,-11759,21322,-2647,1524,-16119,-11644,-26578,19884,-27718,1293,23463,-13451,2484,-449,5261,-1941,-16214,-4831,32767,-7667,-9725,11374,10617,20745,-25369,5272,-16533,25316,1389,1045,30986,23689,27046,29280,10021,764,8242,10638,20801,-9252,23122,-28657,-16018,-8441,4029,13831,14057,22443,-18872,-18977,-4690,7741,18213,-5044,2073,-5229,11121,-4024,27268,13437,-1928,3743,-26518,-15478,5597,16311,10652,3687,-12155,5292,7857,5010,31677,8125,-4629,-30984,17746,-12053,11997,-16427,2041,-26775,6797,14851,26019,349,-10117,-15614,13502,19104,-23077,3161,30297,13101,26307,-17685,-18511,29945,-15908,26411,19768,-486,10722,7458,10888,9350,-26506,29588,11550,21302,23589,15105,21983,2874,5433,-14582,-19949,-1698,-19943,32160,9606,-8214,5914,-18092,13892,9263,5358,-14672,-17974,-22236,-17462,18025,9466,-4909,-5300,-21886,9958,-27972,5650,5738,-2827,-8768,3587,-32768,-22804,2998,5341,-3625,28674,-32768,23223,-17613,-1607,-12521,-15879,20642,-14023,10170,21561,1397,11480,-3678,-14850,48,-13423,7496,-17166,10840,25058,-15210,14617,23078,-29525,-13955,-22238,-5549,173,21361,-31609,12722,-31376,29013,-20579,-24162,-20575,15418,10232,-12560,20134,6719,-12592,6109,4088,-4013,-3673,7179,-10013,-17055,23352,-16528,1521,-23323,21544,17509,5149,-32768,3985,6868,-6959,7371,8557,-9627,-3190,7427,-8200,8553,-2396,2660,-19518,-11551,-32768,1520,15714,-9187,9619,20594,-12,21233,-19087,15352,-2092,20014,4787,587,-25922,14666,18311,23100,19334,214,11547,29756,-27796,-18036,-18550,6852,18109,24539,-1380,20740,3437,11210,7086,-12113,-26561,-26733,-19222,-8875,-4985,-21729,17013,7301,28753,11601,-6462,13958,17411,-21728,-3075,10617,-10177,27250,-32768,-29910,11101,-5979,-9643,-5678,15398,-19805,-8721,6963,-18573,-21182,-15174,-31767,3848,-21962,23378,-3323,-17127,-28119,15677,6328,11220,11565,-11102,30591,10723,844,-13680,-9129,-31619,12586,339,-15889,2903,5949,12825,-26498,-10123,16292,21416,591,-15348,-30533,20451,30544,16866,27899,-28398,-1022,15448,-6336,4838,-7505,5990,-6448,12383,-17779,1947,21759,10103,1472,22220,-9563,19221,18811,-9957,21420,-10912,-13781,2808,-1474,25748,-25218,14481,18705,-504,17168,-21649,6340,-5759,11713,15514,-32768,19536,-10754,22072,-11657,32248,7183,-1779,32767,14721,19156,2019,-13969,15650,-23694,14690,-4673,11574,-30307,-124,23402,14662,7186,-12538,-2603,5546,-15506,30573,10454,30970,-20733,5213,-8953,5335,3372,-27374,-12398,-9375,20511,-3970,-12300,-4896,-15316,-4213,-19063,9716,-27076,11612,-3363,9640,4366,16415,-3103,-7818,-29640,9889,2846,-28187,26763,32767,-22871,-11858,19038,-13737,32767,8616,-12090,22884,-5179,-10550,19025,-14979,-8367,16941,13817,24347,-25740,-8140,14639,7767,-7050,9771,12106,17736,-3792,-1848,-1001,-14182,5102,-12075,29527,25036,-30897,-26292,-11850,191,17142,9700,-6834,-9569,-4597,-12819,16807,15469,13588,5395,-20026,32767,-3709,-19823,17296,-9635,18019,-20252,20181,9039,9857,28507,-556,3312,20855,2158,28921,-10653,-12925,-29108,-12512,4876,-16792,-20244,-23387,-17457,-77,-18776,20404,25982,-30929,32767,6628,-19091,31293,-29147,15582,-30398,16088,-11218,-949,-9271,-30548,-28861,14688,-8667,6295,-11568,-29373,31483,-24000,-14069,19921,4948,-16790,-17445,2561,-1030,-115,20037,-32768,-21830,-12419,25913,12924,7603,-18796,19395,6415,-11816,-18258,-1714,-5032,7583,22438,-2079,-19326,-22093,28023,-18118,-24419,26871,10479,-11633,11746,-16608,-11150,26451,6495,17772,12290,-21215,-13110,8513,6629,-24250,15433,14613,8942,-13404,30167,24451,25813,-17560,-7903,-5535,28108,32650,-22039,7395,-2665,-19105,-12677,-26388,-4870,25180,17201,-16664,14250,-8205,29979,-20786,27569,8966,-2753,-32768,19154,-10857,-8550,7418,-7896,29692,6493,-15498,10698,6098,-21569,6124,28118,-11710,-14622,25822,-6620,-3289,-32066,159,8136,-14805,-1096,20234,17515,16831,-29368,22768,-21784,9945,-22820,-19479,-20852,16794,-13528,12292,11277,931,-2135,7197,1124,-11915,-27171,512,-3568,30926,20995,-25339,-16678,-27315,3507,9442,-17916,8964,15423,8765,7986,24121,18442,25635,32767,-11712,-100,16230,23731,-6768,21566,-9717,-498,-10048,167,16623,27535,7281,-1923,27323,16152,-13925,18187,-2188,15453,-16097,18439,25418,10826,-24661,20245,-3193,-15377,7530,4124,-9024,-20612,-14862,-10060,-28026,9093,1906,22452,-921,-5861,5923,-14280,16555,2865,7283,-9573,11136,20039,19553,8159,1110,-31571,-11802,12924,14799,-3557,25354,-29457,16090,-6004,255,-606,1267,7174,14385,6242,12908,4174,-12922,18077,8621,45,12465,-17113,26696,27919,-4322,13963,18132,11885,710,-14831,4353,-18999,19982,-12842,-6070,-10276,-4356,-21846,-9556,-26728,-3618,-15770,10292,-16217,-10511,-23202,-17776,-11593,2242,-12890,937,-7617,5297,-16789,3046,-11503,-224,-8688,-9379,-5734,11709,-9657,-5402,3489,-12242,-12226,25238,14621,-8526,18684,9130,-4797,26852,24262,-11531,-16823,14908,-6520,20764,-24652,12086,-9541,8839,15953,-21246,-19496,8358,16807,4060,-5550,4336,4132,9770,11345,-15405,-17568,-22147,-1644,-23984,22870,19891,-27865,-21012,25662,-85,-14644,-15074,14876,-6956,-3340,-5690,-22630,7020,3228,2920,15642,-26985,-10911,-21217,-32768,3229,7572,-14712,17420,-487,14689,11139,11261,19166,-15322,12981,14705,20783,4576,-32768,5487,11286,9623,5317,17513,-30834,-26474,17479,24876,-6674,12947,9542,10846,18323,28077,-24152,-206,-20443,-12448,-11788,-2130,-5458,20666,-5473,-26573,32767,-11132,-209,2205,-27826,-30492,17671,26693,-2200,-16070,-5339,3607,-8446,1757,6645,6532,974,17570,10370,-5064,12404,10748,-31831,-31531,-5426,-27090,18493,-337,-16809,28437,-19511,21313,20525,16365,13473,-27441,-19405,9759,29328,22810,8726,-6735,1627,3034,2429,12957,16196,-23701,16140,17098,-6197,555,2403,1840,-7470,23886,-32688,-17841,14841,17915,-782,17427,-2361,24621,1681,-14844,-8726,-20121,24906,-517,-2211,21034,26162,-12503,-29710,19799,12564,-5947,10916,-18608,1482,21300,-16586,-466,25442,12758,-6913,-9708,15597,19789,-3977,20153,-15427,14163,-29905,2569,30746,-8927,-19615,-28266,20693,16099,-6464,30884,-32768,-18474,15529,23399,-4693,25440,24460,2079,-11909,-15608,4139,-32768,15110,-22450,-1253,19220,17230,-3094,-14983,-10918,11492,-13061,10411,1135,8373,4983,21356,-30460,3329,12082,-29163,4799,-1128,22873,-356,22355,-23035,-1202,-19837,-20444,-7593,15169,-24510,-2190,9083,736,-18655,3026,-19546,8193,-7493,-14601,6968,-8945,-5865,-24643,-24513,12526,21915,16515,26517,-32109,5046,-24363,-6988,7049,32767,7798,1248,-21416,-20622,-31906,2942,8802,-6406,-5979,17100,13139,-20384,-12641,-13052,-5158,-5387,23046,23435,-8062,5837,22699,18602,9259,18726,-18787,15304,-17430,22234,8245,-26539,-15889,-22405,10201,13050,16173,11632,-27256,-12698,-8260,23348,17008,1280,-20658,-32768,18,15305,157,19448,-15771,9177,30605,-19728,-16334,-10277,-17705,-13441,3923,-14246,4073,24855,-25078,-32768,10222,18744,-20939,-12822,6185,4284,23649,2936,-5809,8171,11592,-25304,11993,11576,-2925,20533,-5613,20027,-13456,10178,17042,21395,-22780,-13945,-25708,28511,-32384,17587,16803,-11176,-8196,-22745,-20856,-30556,32723,-4065,17388,10337,-391,-32768,7841,2729,-25231,27578,8816,-18192,-12904,-16853,9554,27123,9932,-32768,-10971,-2493,-9976,21642,-21857,19682,-16922,4790,16153,-21579,-9797,-24053,-15161,7457,25844,32767,-9221,-11359,-16316,-4366,16454,-114,1762,22465,11072,9080,-8300,10942,-1374,8920,-4299,-10232,-14059,-2205,5002,-22750,-32768,-7924,10892,21262,12723,-18721,-25693,20498,-14690,-9757,23798,-6790,-9607,18719,-2383,19350,11712,-9105,19980,16279,7430,18340,7191,-11117,15370,-32604,1404,18387,11559,12002,-12724,16659,-14577,71,12847,8731,24914,-27568,14433,-10848,-13097,20440,-1566,10820,6788,-9303,-22088,5884,16719,19651,-14448,16548,-32768,15166,-11454,-20696,15520,-10237,-4935,22603,-30427,-31669,17126,11984,6586,7155,21826,-8660,15143,22232,939,13428,-19126,10203,12593,11786,6307,-17292,-383,-11067,5029,10417,-6331,-22312,4615,11006,-22253,14440,-26422,19438,-909,3230,-5808,10240,-30443,-6435,12630,-7024,21883,-17352,-6144,-1316,20611,1875,15801,-7193,6393,-13285,16796,-29009,-14889,-21609,-27854,-29674,-23243,-4957,-10803,-32768,9879,-5594,-3362,-22544,-6002,1776,1767,-19838,4692,-3909,1088,-4423,-16256,-18997,16397,-10377,-15099,4465,-254,-9737,-22603,-10319,4886,-7754,-1049,18959,-16749,17839,9017,-10335,-16588,-18017,14723,-3585,13213,12452,1113,283,15639,31048,25485,32767,-2540,12430,-6847,6589,-12441,-20290,-25578,-14733,9461,18691,25196,7773,-21956,29209,-29803,8401,26630,7702,6296,7177,30990,-14880,-17394,-2722,-6805,-17647,20424,-1763,31567,13557,16845,3523,-11987,25164,11575,-32768,-19094,-28542,8128,29803,-22227,6771,24021,-126,19726,-20034,3621,8781,-496,-18639,11045,1563,-31402,-20593,15746,18059,5745,-12784,7735,5654,-22600,-13301,-12310,-4234,-9037,-6704,-13925,25209,-26072,15576,-644,-25928,10560,-10360,5766,30469,25524,-7034,-11464,26311,-2311,-16378,-14507,-28632,-9761,3385,-26015,-3557,25475,12456,18277,5429,-14386,-16964,-28950,5430,24405,1774,11431,3805,8504,-28845,-6798,14848,13224,-21061,-14910,32767,13214,28512,6406,-29243,-11766,-15236,-28737,-29242,-23535,-6563,-27912,12005,6870,-10267,1667,256,-17435,15164,-5981,20051,11001,8960,-28913,13288,19578,19500,-2429,16901,11757,-32482,-13148,-6623,-17628,27473,-3906,-13967,2699,-1370,-32768,25515,19516,-23140,-25565,21573,-11536,15831,-1694,-15382,-8621,-2976,-17953,960,32767,4677,6644,-3284,-10128,-8982,13686,2642,-32550,-22406,30092,-4976,6450,-20101,-10725,27110,19601,15713,-15025,24819,-6825,30443,5250,641,17244,-23741,-26646,20695,1693,29652,17944,-2780,8920,13118,-3662,14991,2782,-4586,-11994,2337,14324,12685,-537,17448,1002,11811,1787,-26996,18248,21313,1007,7084,-18891,-17496,16518,-27078,-5257,5317,-1987,-7785,-5509,-29786,-10812,-217,17318,-10754,14339,-8068,29701,26841,24270,-19515,491,-7694,1134,-2830,23297,12849,-24964,-13762,22858,-6460,-26608,-17392,-16651,-30951,15563,-26860,5813,-30266,12224,1028,7116,21558,-32768,16969,13285,5428,1323,32767,-32768,262,2519,19875,26800,-8166,-7679,-15520,26206,14545,17321,-24617,8946,-24241,-5729,-13655,-18641,-32768,-10145,9854,-12724,9408,-18508,-4414,-20070,-20756,21525,10929,6977,1950,-14193,-30581,-26240,-19455,-17833,-2072,-7453,20308,-17568,20993,-5291,13690,20717,-3507,-30889,20589,-13638,13712,-14038,9297,13649,15875,-17059,29218,25040,32767,15756,24558,7274,-6007,-11767,18863,-7514,16036,29689,-8192,2527,-12332,-29502,-757,-4835,5653,13696,-466,9604,4617,-11584,32767,19998,-7232,-702,1940,18322,673,-18165,-4917,-20886,597,-3248,20121,11895,-45,-9664,-25050,-3024,-32768,22702,-18495,-27438,11161,1144,905,-11686,-27150,-5859,10162,16419,-23709,25857,-2659,-1989,-26223,-17343,22042,29271,12808,-2573,-19753,20599,-14478,12505,18654,5054,-29516,28161,-3118,11976,10326,12705,-13841,25901,3087,-10128,-13897,4542,17182,-25921,21970,8654,12448,19555,11140,11655,-19790,-10059,15028,14278,365,-32768,8969,-6547,-7036,-23956,-39,23425,-22636,-16049,-3280,30772,-7864,-23708,14238,-4296,15212,16107,27124,17574,-32768,-13112,-30114,-23509,-5307,-15960,-4096,-9431,-4151,1350,10135,-14209,17050,14152,-11349,-21410,8225,19885,32767,-17385,-748,-5664,22834,-15212,-22473,-25746,-18621,-4146,19791,5141,14772,-21301,31329,1521,10828,4713,10177,-10940,27951,-3359,26953,24910,25122,-4887,-4151,-25336,26115,-23931,-1350,-6194,-25086,-17952,20556,709,20190,14921,22503,-9610,-30840,-1143,30971,15647,-16932,22568,-22241,-13338,-15488,-29325,-4789,-15680,-7348,5978,18237,-26983,-22094,11303,13921,-17037,4535,21065,-19223,7734,-26634,21302,1211,20347,795,-11966,14507,4229,6620,-1529,-21995,-27316,14600,-32768,-4785,-31842,6639,-11512,-28175,8582,14401,17270,-24233,-7512,-2842,-16805,-9564,18724,6971,12528,-11311,12776,-28168,-16771,-15719,-24195,3352,3005,29690,-13396,-12482,13141,30581,25568,-1408,-22957,11841,-19483,6932,-20673,-30902,-19388,32767,8463,-14597,-24859,14562,9959,-3615,-28235,2246,14820,-24434,-5091,-29249,-10733,-10541,-10662,-24227,32767,3780,-19559,-23630,13797,30386,-1001,-1332,-3472,7633,-2441,16313,11063,-6951,-11724,1609,-6544,3598,-20697,-5240,12913,4048,23573,11487,16302,19263,-27071,1252,22265,-4848,9126,24443,3112,16405,7843,-7103,-8863,-11071,-23087,21414,-32768,-16211,-10038,2897,32233,14570,27191,18904,-19558,3448,18593,14292,-17069,-18501,-16451,-14234,-1207,27871,-20783,-16217,-24104,-32768,-12761,-19109,7613,1800,-3372,-20799,26211,19406,-22270,7673,-26284,-32768,-27832,-14325,4715,-32768,16087,7156,6465,18431,-313,-15733,-24454,1005,1989,23722,-13754,19270,-9557,32107,-24549,-29780,-19204,-4508,1410,-31292,-32768,-8144,-31112,-19201,-23247,-15146,12576,-26746,-1877,5296,-15201,-13615,-24026,-29177,32767,-22763,18616,30729,16341,17352,11029,-9168,32553,7345,10790,10339,19630,-19941,-12816,-9606,-26467,-24780,-6109,1244,365,-10732,-23215,-25063,11248,22402,-14583,4933,518,15194,-7931,-31311,-20415,-28309,10046,-6628,1283,-4721,-10762,20471,24296,-30676,1623,-8348,-9482,13850,29959,-24431,13747,4855,19756,-25103,-3279,7925,26348,7993,3519,-12481,-18192,-18768,-13898,-17485,4811,16335,-2050,-6347,15644,-4461,-4237,-3363,9274,24428,-3611,32767,16863,23921,5236,4310,11689,32767,-10100,-4594,18936,14581,20997,-7474,20075,-9872,12249,19183,-5799,-11971,1690,-3964,12798,-30573,-18372,-6201,12131,3793,-780,12142,-1142,-25182,32767,20283,26532,2583,-6661,-23610,4760,-2598,-4531,-10534,13822,-21515,19668,10025,20633,-8748,1739,-7364,-2912,-26534,-19307,18360,25251,-17418,-14340,4010,-27853,-30384,-14442,-8317,-27317,-15873,-17101,-15830,-1857,-16745,-11415,13441,13021,9108,9867,2298,9944,2723,560,15230,19067,-19193,-3850,12473,-23139,23916,-4731,8016,-7227,21054,-9947,-12174,28611,2604,-4839,-10455,19218,1369,18076,-11604,15201,-15064,-506,19855,802,-12899,-17761,-27505,-14811,-22985,5714,-20826,2135,2553,8774,-8058,-17007,8526,-19191,32301,17300,-16392,11800,7024,504,20652,-12382,435,-22294,-4976,-9356,8290,-9081,13143,32767,-5766,-21459,-20607,-29518,-19859,4004,-28680,-12095,17093,-10958,-9446,30340,-24848,-32768,-12433,-13122,-20527,-20554,8203,-6730,19549,27201,4154,10016,-24695,-13337,-5421,-12166,-5423,11570,-6501,15664,18107,23543,13183,-28352,-1666,877,7957,17654,16696,13406,4425,9303,-17513,23639,-4129,2056,3977,-18962,-16384,27991,4314,9534,3930,9820,-7720,-3597,15208,18503,-11191,26863,-18304,-19891,1650,14116,1714,22418,6969,-10685,-2494,10885,-13665,-19903,-3761,28645,23846,-15375,-18811,14952,6679,-8734,3699,-22321,28782,-32768,-13963,9922,-25589,-14762,-8370,-26575,-18322,2715,6908,-13046,2860,21604,-32229,-16611,2413,4397,7572,-18745,12303,-28601,6126,-14240,-26629,-24292,5280,-30875,-31214,17077,-323,6057,14189,18081,-32768,-203,9492,-20531,11838,1664,-18472,28645,-18204,-12360,-22940,-17086,8658,17138,31753,-3179,-27132,-11261,-4748,87,-5971,-6245,26155,14992,15420,-29528,-12673,-8435,-7686,9049,28916,-1214,6113,-19878,7345,13355,-14149,-14575,-28897,6524,29163,7938,-26315,-15230,-13072,-14880,-32768,-12822,17621,-5061,26648,32767,2563,-25437,2850,-17090,-19596,-17844,7306,-5280,3474,-21627,11043,-29012,-1072,12803,-11901,-6885,-17679,-14655,4671,8255,-19082,-7830,18464,31563,-15487,-13366,-13005,11071,-16762,-29432,10704,-23603,-11856,2777,18275,27305,14776,32767,25412,-1999,3818,-11585,-1115,-21706,-22627,15057,-16579,6739,-439,26658,-16852,-2276,22301,13326,5802,24945,-9008,25600,-20710,-13214,23435,-15431,-8739,7419,2103,15998,-1013,-26472,-20526,29299,-3132,-19694,-3292,16610,-27498,14030,3244,27741,14460,-21814,17864,7514,27532,-19924,-1383,-15959,-10889,7928,17989,-4208,-6635,27770,-17656,-7685,1546,14120,-7732,-4346,6149,20033,22368,-10831,12937,-501,7868,2324,-20096,17465,1303,26082,13690,-19309,-11217,-10826,32767,9473,-14924,25173,-13195,-15236,-17085,2815,32136,-7874,8567,3359,-3933,-8435,-7401,20717,9416,-14822,4915,-28424,13185,-2420,-17460,-2471,-12867,10457,13328,-13473,-23532,1578,-22454,32767,-9018,-11343,-3924,-14817,851,-32768,-20486,-27236,-8878,-16537,-16469,6262,10543,-12454,-8937,13199,16841,18567,17580,708,-19692,-5358,-17473,-25061,-24672,-636,-14912,13387,13454,8442,-5559,12105,11651,24233,-22106,26448,-5238,-2574,6174,4351,20505,32492,32767,-24502,3667,-781,-23016,-11421,25739,-24826,9645,7531,-8116,-18028,15747,-17801,-30131,-6728,15485,-32166,19868,18607,23428,-12841,-5866,-4284,-5443,-20709,-4542,-2336,8640,-18677,29472,32767,16226,-757,10247,-3368,10472,4909,-17680,18192,-7594,-12580,24679,9216,10092,-22695,-26012,-750,-8213,-15199,-12951,-14425,-20062,-3010,2847,-14076,13203,9433,3342,3129,-29863,-4945,-19579,18268,20873,596,519,-9738,-19542,-6072,26720,10226,-30587,5196,1309,-8455,-32251,-14091,8836,10032,-18207,11745,-32640,-32768,-16242,19122,11088,-25908,9112,-28091,32759,-20697,2911,29529,-20675,2709,-10444,21367,20250,-9291,-1080,-7281,26367,30405,-6710,-26829,-20408,22049,-7853,14225,17275,12341,20393,18077,28212,13561,26379,-21674,-32185,-5335,-14706,26408,6462,-5644,-947,-3331,-14789,-11727,21003,501,-15111,-27338,-11709,13015,-31783,17790,20016,7606,17421,1141,-16787,22736,-6531,-8565,-10602,13832,-17814,990,18431,-27197,25207,-5088,-19374,17503,-1918,11831,-4017,17222,8524,-12612,9440,-15006,26534,8497,-23725,-21471,-1676,32767,19949,-9643,15679,20567,-15063,16185,-8706,2997,11189,16478,18861,624,3188,13589,-2905,9945,-4750,-8675,14987,-20062,20106,11736,17462,-15305,-32768,-13500,46,-5199,-25503,13489,23862,-4700,-20602,10373,32767,12789,-16950,-18641,-1171,28488,20788,110,-19267,27300,-10695,891,-28080,-5276,-20181,19518,-17477,2361,-20161,7643,19859,-9828,29470,1636,8753,8767,10697,-2809,-15965,3463,-16131,2851,27411,-28915,6587,3926,-26457,-23970,6536,28636,4735,19239,13700,-21768,26351,-25587,4843,-4557,-32180,3086,1107,-19853,17930,-14933,6077,23187,22400,8667,22608,318,5111,-22729,9692,-25928,1621,-28688,-8950,-7304,21534,-10627,-7737,15609,-1219,-4068,-6513,16361,21227,23106,32767,-21012,-2209,29527,9883,-10413,-6093,-18224,6501,-32768,14465,-10030,18291,20761,11955,-21530,29129,17562,-15368,-8511,12900,19671,-8827,24543,11739,7491,9289,-23600,32360,19168,-29035,21285,23522,-9457,2539,25047,-19964,-22721,-19177,12895,-9572,11750,13612,-13802,1760,2549,4342,-19348,-8864,-27949,-2502,-23681,11115,16062,14252,-3646,-21722,8824,-20595,-857,850,-23402,-18019,-7357,12352,-18046,-20565,19492,-18406,-23650,-3916,-11728,-17194,10702,-21186,1938,8171,-22966,5676,-5110,1902,17535,-14952,13810,13081,9156,-2090,2832,-5083,3631,22487,10995,27726,-9380,-21256,-19784,9056,18931,-16078,13065,17988,27489,5034,3197,-4646,-4515,20451,-14451,22611,16476,-16435,-2191,4351,10744,22059,-25961,-7643,-10929,21107,-21253,-30357,-23300,26681,-613,31570,13633,-30957,22015,-4183,4624,8994,-2843,-24876,4083,5702,5819,-29013,2946,16249,-22739,-10538,20171,7258,21570,-11379,11768,26415,-17638,-25353,-24752,-1508,14436,-6206,270,-22006,11386,12837,-9667,-8089,-24295,8195,28819,-6650,-29767,20386,-4333,21834,21109,-5229,20743,-2017,23108,155,14659,-19237,42,-841,2293,-6590,-2415,13146,-32768,-1308,7079,13073,-12987,-15441,23465,15151,21077,-10361,8959,-1221,-17490,-24196,11706,-15051,24120,-16232,28905,-12993,-7442,32767,13121,18931,-20462,19562,-1007,-9357,-5353,-31750,2372,-579,-1241,-11470,15807,9098,17520,6328,6670,24340,14549,823,-13253,-2182,-28098,23259,-13212,-3525,-371,-10101,-6056,14963,-12791,238,16891,25523,9215,-28913,-32768,-12169,10532,10111,-17738,23509,-12720,-15141,6006,13981,-12424,10211,-9992,-29853,6664,-13132,-17629,14089,18011,-24827,-1783,-17436,7586,-5845,3864,24349,11379,1882,-9403,5127,-14330,17741,-18464,-20541,-4689,11714,-11909,-7568,-1539,-17656,2836,-10548,-10735,-26176,6379,17540,14065,-13044,8399,13984,-5160,28326,-3415,14739,9440,-3570,13967,-28744,-3949,19253,7236,11990,21383,-5500,23931,-16531,10862,-15742,-10618,-2401,-15913,-15704,15400,10053,-405,6606,27117,-25742,20289,-14396,14482,18643,-5414,-772,795,-28611,-18738,26182,-8277,17558,1359,32767,16290,5016,-19370,3293,-17327,1991,4709,6813,-11328,-15691,-296,-27713,2641,-7543,-15258,305,10722,22566,27509,-8225,16498,21301,-24923,6863,-17112,-8725,-2907,2603,-9777,14752,5085,10570,-23345,-4567,27023,26021,22901,-16743,-9983,6629,4048,-23118,-24390,6159,-20592,-26493,-16068,-2090,28581,-11308,-17386,-6183,12577,21907,-14893,-27732,13723,-23152,-32768,8552,14639,23576,26239,-22195,-23086,-32768,-19010,5644,6185,-8390,-20976,-11113,28921,-14167,30371,-4355,-6265,23944,13956,-30977,-8921,11773,3943,4856,10456,32767,7243,25406,-27461,-17360,-10245,17285,3222,14054,21570,15982,-32768,-2672,-14812,-13123,-15150,-7513,-11816,13874,-19717,-5555,13206,23855,-28764,23701,-5535,-3045,15790,-9034,-14424,-24277,1981,-11571,18080,30301,-12912,-21292,6113,31335,-3787,-14657,-9251,17033,-11183,-9397,30200,-9361,2718,23755,-11500,1601,-16964,-23694,30744,23474,-5139,-19429,4642,411,18904,18045,-24267,417,28073,6641,-7880,11089,-11602,-14062,-32768,7360,6233,21545,-7724,24803,-13267,5666,-28881,5736,-11459,23435,2403,-9129,6454,-21970,7017,-2703,12251,-17348,-6842,32168,385,-3708,15836,-11513,-28193,25,-12355,-6048,22910,-24483,-18262,-19111,-6008,19334,-13772,-14517,24161,-7214,3557,-6620,20537,14029,-22062,26595,-19374,4130,1545,-4224,466,23806,32767,-18994,23239,25031,7911,32077,369,6042,1538,-10484,12629,-12096,-23669,32767,-10379,10943,8526,13021,18774,25153,16164,-2233,-22810,19106,-7841,-28547,-2724,11186,-14614,-4661,-14380,15117,-8300,-24167,3776,7866,17373,-5859,22612,9368,-10623,-2846,-13641,15446,-4972,24750,19968,2967,-19674,-2026,20686,-5583,21477,11849,17014,-20339,-19257,7555,-20948,-29880,4338,12811,-13591,-12117,-17362,17055,7828,10470,-18021,-5557,-15745,5905,-9831,-6884,6177,-5242,9299,-3470,-21472,16437,16976,-5398,-5980,3212,19356,4980,-16967,-17395,5128,-15386,-7346,8949,-10013,-10015,-8568,11743,32767,-84,14976,-11718,6830,-1712,23899,-17424,-2196,3456,5405,-2465,22335,-21511,26056,-14798,-20587,-14892,-22334,-17166,1353,-2451,1242,15926,769,16168,7570,4470,8411,5258,-3004,21306,-10739,-9767,5061,13492,14793,-4237,3177,-18393,6439,-13395,3436,-32768,-2448,-6979,-6085,-1176,-10244,24453,32767,3633,-15977,5195,-20782,-11773,18720,-28370,32767,25615,11496,-17737,-6632,10733,-2538,235,9217,-1058,-10135,2889,5713,8046,-11961,-27886,-16914,-12619,9624,-5789,16155,-6448,25094,8330,26665,-18042,-15823,-4318,-27145,-18104,-5447,32767,3622,-22917,-23783,-24883,24755,-32557,-6517,-19595,29153,28361,26548,-4555,-4374,-14969,-20751,-10824,1192,-4036,-12556,19233,-2551,5652,-17704,886,23337,-26170,-27764,-19653,-10593,9330,30747,1307,-29360,32767,-19809,-6423,-32768,-525,5172,5054,8157,-19606,-6783,-15066,21425,17450,-2555,1630,-8932,9874,23537,-17155,-14810,-2441,3835,-17394,-13326,8351,-18185,20527,-17755,13376,14887,-16926,-9165,-77,4478,17360,-7656,-8120,26754,-1187,-3336,-7684,32767,266,-8032,7875,26374,20678,-17173,18678,11572,11524,-10275,-10001,-13403,17619,6916,-4568,7317,7289,-18453,-884,15318,-2784,-2892,6346,49,-17298,18121,18415,-28870,-28693,23482,-23748,5235,-905,-12271,-3808,8981,17182,-7662,-13876,-5058,21054,9063,-25087,-28128,11204,-13606,-6213,-24896,10210,26279,26443,-15922,25941,-3633,16405,26899,267,25372,-22870,16678,-10439,16009,1972,-9592,20587,4737,21589,1567,11449,-14660,-32768,-9186,90,10402,1232,3714,30081,30554,2852,6698,-31938,-3679,-29631,3932,23348,4984,10949,4761,-10142,21845,16893,9444,20847,-5432,-10131,-26531,-12138,-721,5091,25319,14736,2869
};