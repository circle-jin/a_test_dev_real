#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv1_input_int16_test_data.h"

const unsigned int g_conv1_input_int16_test_data_size = 5184;
alignas(16) const int16_t g_conv1_input_int16_test_data[] = {2595,-24093,102,25517,31996,18683,-21942,1379,20390,-12993,-15157,-27284,-24016,20333,-25755,19164,-3638,11608,-15917,6843,16201,30167,-26999,-25877,17642,4870,-25054,672,8847,-31546,5853,28688,24648,13927,-26245,2908,25915,20768,-12092,31620,31182,-26334,-3084,-8870,-15733,28835,23989,32366,6855,26065,-31935,15051,-11807,-15457,32586,-19723,-1755,-14326,-12857,-28573,-19340,-23674,5254,-17448,-5325,28360,-31896,-13229,-29279,-31341,21780,26559,17922,-6478,-7123,15969,-23353,-8633,16116,-28381,-27058,19304,14406,27675,-23261,22291,-6667,-29141,21129,14628,685,25402,-21775,-18121,1603,18460,30345,-28086,-5993,-22571,9325,-32036,-24742,-10829,-26474,-14350,16628,-30726,27314,15728,28160,-2403,9038,-1600,18281,-11602,-13125,-19483,10882,-1194,-2776,27842,2708,-6182,-30730,21237,30550,-17892,-8687,-21450,8401,-31981,-6763,9331,-13433,-29834,29462,10508,-32631,-7798,29728,8081,14426,22999,16125,-6436,5963,16496,25616,27226,-26191,18041,3730,22882,-22483,-7647,210,-26548,-14444,-29615,721,31934,40,21216,-10534,16010,12696,-27934,-27416,-5060,45,426,28147,19295,-22145,28904,-17530,28498,1390,19417,30643,-26904,-3531,5663,27183,8675,153,-26810,5025,-18687,-22616,-14780,-10096,-14319,-19427,13223,-19598,18584,13848,-19679,23659,27394,11664,-7866,-13984,7030,-28806,-27396,-18001,-3967,23841,-25027,-20044,26283,11811,23174,527,-11276,4527,-3333,-1715,2225,23601,11015,-27492,-4474,-8581,8196,28167,-12451,-22758,-13205,-31134,11169,27946,746,-13739,-28745,-21485,601,5389,5868,5119,23909,11084,-12389,29991,-17233,22424,-4665,-4848,13475,-10533,-12083,24980,-3370,25317,19733,-695,1384,-15662,-13591,-32469,1427,5513,24644,19797,8192,18539,27302,-7219,-9746,6367,-30302,-13462,11105,-1518,-13443,23989,16765,-30787,11234,6234,16956,-17689,-28886,18818,25295,12798,-16138,-28457,-17205,-21341,-11781,-27257,-18068,-29868,15470,-232,-29886,23131,-12166,18212,28987,-22134,6045,5022,2183,-23875,-23729,32252,-7696,-27306,32077,-28146,19548,-2595,-3528,30656,-22134,14195,27101,31508,-29222,14639,-28173,2254,32294,-19655,6575,28825,-17385,31112,-5830,12124,-12611,27475,16923,-25802,-300,8029,11018,-29058,-2097,12717,30249,-28059,-20889,7100,19515,3398,-22740,31690,29108,18049,-22118,-129,-9093,-20885,-26450,24883,-30276,-23731,15730,-19457,7725,-30157,10640,-3827,-17431,-6127,-2439,-24612,29919,-30515,-27791,2730,3487,-24446,-5238,-27332,21141,4154,11706,-21851,7873,-21564,-8759,-422,-1526,-7811,-27399,13040,-29533,-23841,-20971,23864,-23617,32401,-7636,12988,20498,-2976,-8451,-9299,-13354,11044,1341,-27973,21120,4224,23349,-31646,-20975,-3412,12326,-20228,-16110,8519,-17844,26485,18193,-22068,-1541,4599,1854,-8212,1407,24358,-6371,-10180,32184,3116,74,-21920,-25739,9008,13332,-22471,28517,-20597,-26164,-32118,31817,-15541,4439,-3984,7157,-5339,-15133,-11421,24546,-29106,-28518,-17310,3964,-25664,-10470,23137,22666,8032,-22067,18299,-16779,-13864,14740,14064,18445,28231,3580,12836,8326,-23229,-16123,15605,-3421,756,-19129,-2811,-18645,13115,-14454,12054,-10651,-5206,15520,-3739,-20645,11461,-20667,-31371,18821,-8538,-11466,-29203,-31379,956,-14307,11500,31605,-28600,19072,28317,26188,-14642,-5026,-15727,-16973,53,-991,12947,2153,24534,-22503,32370,27069,26296,25303,-9297,27086,-18299,-7700,-13112,-30584,8307,17646,14871,-11078,11626,-12235,-26609,7417,-15144,20360,30859,14204,4419,-2077,8363,9263,-18413,32478,20539,-20869,-21078,5542,16333,29642,-2333,-31587,18868,-7512,-7184,12651,25714,19022,-28879,-780,27686,-24515,-23218,-2102,8414,-18615,23638,6061,-19636,-22653,9499,10427,-4912,22464,23286,9347,14417,-21862,25032,-14395,8646,24002,-24440,26959,2812,-16556,-30277,6280,22030,-13774,25692,-18093,22233,16641,-8745,-11591,29838,-509,-3691,20986,-29962,-19222,4786,15698,-30312,-27671,16036,3470,32248,-14551,8914,-20262,-1295,15868,-2469,18897,16650,-22276,-14156,84,-25868,7860,11543,8554,-25697,-31901,-16769,11076,11122,6443,19203,-23319,-4173,-16918,16017,-31625,19811,7708,5029,-24425,25669,15583,12051,-19592,16041,19295,1762,7243,20727,23744,7522,22990,29981,-28122,24303,-3382,-31300,6570,26327,-25360,23915,-23628,-27027,-22994,-28128,-14265,-338,13745,-16609,28669,-23961,-8805,-17855,-19760,28639,18388,14781,-26642,16830,-31690,-29966,-11235,26757,31528,27939,-16923,-12346,25268,-9180,21109,6303,15768,11509,-20296,15050,10867,293,-27861,-11777,24850,-10135,-13401,-27240,-9993,2310,-9391,-20924,-18800,7449,27560,-6594,11905,-7431,-6298,-14701,8209,20692,22213,-28394,10943,16335,23125,-9950,24184,16024,-2230,-2751,18113,-15767,28300,8722,8805,-3663,28607,-22062,12976,9596,-2903,-31573,10789,-15523,5963,1769,20662,-20117,6687,-20158,-9218,17892,19860,-20632,22240,-31737,27798,-10730,29036,-26653,24996,-32720,7881,5795,6605,-17265,-1095,25564,9293,-14707,-5347,-15231,3507,-31437,16864,7673,17419,-6164,-24011,-19458,5979,-14844,3338,32699,15574,-15200,25709,22665,-6084,-9124,-19294,-13778,21576,22728,-963,-21016,-8103,-2043,-10715,14075,-15173,26823,-26757,-12598,-26150,29892,-6633,-6562,9664,-17502,12485,4690,-18587,32607,-27480,19646,26846,-19362,-5339,20304,-17705,-12999,-11274,28354,4702,30655,11104,-21331,-22969,1222,25993,11878,16608,20722,-31206,23303,12535,-24999,-21451,11704,-4060,-24737,28184,-14613,-3937,-31529,18175,12523,29977,-17663,-20285,-25368,-26794,12137,28521,-17822,16669,-27709,-17526,15252,25865,-1146,13267,-4846,-30650,31835,-19772,-13116,-9001,8142,-14266,21647,25103,10852,-25858,455,28903,-25292,-22819,-4219,-17080,-32485,-6875,29648,29973,16919,390,-12846,30341,-4677,24137,12820,30728,-32543,27706,-26497,-8079,24968,-28932,-5857,-23710,15493,10180,-7439,-13011,-21506,-5090,-27837,-4710,6310,6977,19525,-15585,-20205,-16450,-128,-18795,-1200,-27532,22425,-29675,4443,10203,-21194,6703,10456,5597,7745,368,-29494,-4366,-15943,-9075,18578,14663,16080,-31961,14623,-14724,-6923,-18417,-5620,-14508,-27424,24989,21896,20079,-21380,-17374,-31673,-22650,-4044,8292,-8125,-31437,8304,-12357,8025,28902,28350,4765,22999,-18354,-952,31067,-13015,-8437,28020,10891,-19560,9503,9083,24511,20985,11577,-12266,-17502,32748,-7580,4833,6771,-9893,14433,-2797,-2437,-13961,31222,30445,-2220,30509,32216,21743,-4199,-15379,-29758,-4515,-2255,16197,-9934,-3199,21,24042,6432,3231,31441,14268,-5807,7886,15005,22591,-2906,-12038,23520,1948,-24919,898,24932,-32474,26122,20568,-30724,26208,-14162,16314,25740,-17907,28374,-21050,-23250,-8866,18082,-12347,-735,4573,-9067,-4827,-7095,24329,-30606,-18382,27764,2372,8094,8372,16205,32593,26660,-2582,-14470,-32078,29687,1930,9452,-20144,-25350,13185,30432,-30107,-25823,15139,32016,-14712,-17470,-3851,23443,-10003,-6294,-1989,-12126,-30374,-14191,9036,-18719,8873,-16631,22063,-19321,-2292,11254,26656,7980,13491,12376,-13363,-2113,11556,25610,-1032,9278,19942,5129,-17077,14391,6715,-22202,-7884,-24464,10521,-18824,15876,-10198,-9655,32467,-15191,-10861,4646,17563,23188,-22668,-6619,23085,-15871,17113,-13601,5657,-6306,-15528,7461,32523,-11372,31578,25141,-3315,14210,-23898,-4981,-6059,-17403,-8567,-22498,5759,13459,-28817,-728,31536,18009,23011,-18689,5706,-12010,8476,12986,-23294,15851,-1859,25721,83,-12282,-32602,-23427,18095,-132,3305,26458,16572,-7511,-5547,-5539,-19727,7119,4954,18157,21062,-21753,3807,-5230,9736,-6663,-25592,-14742,-15855,-15187,30022,-21417,-4656,12878,-26179,4077,-11080,-17393,17493,26223,25525,-17061,15928,-13862,11389,-5769,-9004,-9885,-30197,-11307,-29297,-13231,18044,10134,21052,16104,-9189,5972,-16760,16860,-21094,-30358,-21585,-1865,-30683,15396,14672,-17922,19820,22489,-15764,-27020,18822,-26319,15388,13633,2407,-4353,19686,22296,-20263,-555,16658,-24768,-6181,-8653,-26062,-4584,-10609,16148,5348,-2319,-26817,-24448,3164,-10907,-5357,4825,-6396,-23282,29864,-5629,-1925,-2990,17882,-25084,19819,20955,-21296,16169,7456,6950,21233,18981,5715,12956,27813,25183,12685,-17294,24146,-23794,18308,-22125,-29470,-21027,-21828,30490,-5999,-26563,16372,-543,-7306,31704,15874,18127,19836,16717,470,7406,14046,-28923,-32732,-21509,-12054,-21542,28281,28071,-27842,-22068,2927,15352,-15775,-8376,-6876,30819,-16954,-7029,-6452,-14990,-29798,32647,9941,-14156,1006,25929,13991,18428,29659,28798,3185,23452,-24117,4541,28184,-25429,20349,9805,-11471,-3691,-10687,7549,-9260,-18538,19456,15128,-17785,-6888,8929,-28388,19284,22540,9709,11376,5701,4855,-24750,11217,-24802,-23110,16610,-30720,24824,28799,23855,-8802,28403,-22642,-5548,1833,-28722,-28243,14051,30460,32503,8219,5047,-17931,-13841,9813,-1651,6680,24006,-16403,15647,-8330,-28277,-25988,-24885,-15007,-8061,-16633,16271,-8458,-17159,20916,8096,28405,-19629,13098,13523,15214,-22415,-21747,-18712,31698,-27666,-1534,-26721,21345,22826,-12534,-1656,646,15565,-23014,13272,-5730,-12258,-6756,14810,14804,-18566,27498,2389,31044,-1910,-30798,22963,3782,-17562,2221,29681,-14221,10506,10304,13853,27243,28649,-6416,-10704,1485,26115,22656,24538,-23067,-1333,28004,-20134,1853,25648,5612,19975,6965,25205,8603,-17425,10921,11084,24318,-30102,-8532,-9481,-15284,26877,-23465,17283,13332,15287,31556,10083,5895,-4695,10871,11564,-6392,20515,-2831,-22408,-14068,30408,7866,-16981,-19489,25713,31182,-18425,31124,22328,19330,7000,22863,-5276,6155,-25990,10386,-22822,-12447,-14879,-15739,9476,31219,3840,6879,-2227,-16228,-17696,19108,26182,14938,-13743,23451,3487,-7466,25217,13991,-15810,-26053,1373,31239,18623,6101,17337,-8252,19378,-9330,25063,-7462,19853,-5338,-29734,28908,-32617,10343,-24983,1146,-15583,30532,11118,-25818,440,14058,24856,-15264,23349,-30162,-30324,6091,-8220,25114,-19197,-12382,-12118,27172,-25250,22567,-5260,-2171,23342,57,-28176,-8612,32347,939,29993,2791,26024,31228,-21020,-17294,-4231,21060,-22310,17802,-1018,20245,-20707,-20856,-31489,31336,28548,-28252,7,-24255,7403,-18016,-9661,-52,-1961,-29932,14790,-26784,-1459,15859,28821,-7883,1235,11110,-28858,6954,10509,18180,-324,256,1760,-29240,3901,-20300,-8842,-23966,14338,-15185,197,-3344,7013,2264,-16722,-19760,-18032,-23961,17721,-30324,22820,19814,28520,10793,4500,11984,-25065,-3125,17938,-16352,-24350,-3757,-12203,20901,9949,8841,-30069,-15229,-24358,-25966,-15871,-25950,-11905,-8370,25099,-16127,5477,-326,17366,21015,-29768,16468,8533,-4982,-7372,14448,-20925,18843,21728,-19566,-14503,-15097,-31916,31994,30846,23363,32606,-23489,24337,7767,24348,9197,-6161,26468,-7101,11537,21678,3780,11884,28051,-6889,-21235,-7085,28553,2596,32377,32690,-13506,27899,3494,7399,458,-17438,18908,24403,27607,-9915,-30022,21682,-32203,2117,-31697,-27535,-29916,-14078,30418,-27946,23681,14932,9981,-30335,-32400,26697,-25575,-8913,-29363,-27205,28260,1017,-27086,-28032,21777,-16455,-678,-31704,815,10748,-23247,-29897,17694,-29085,-12591,28325,17255,-17210,-21635,11562,-15069,-18356,-24599,9051,-22522,16263,23675,24406,6986,24563,3699,31549,-27180,8623,-15537,5753,15626,-29057,-4930,-15630,26401,10174,28100,-6809,-5685,-3783,-17417,-11733,4529,19362,-26779,-3799,439,-28924,-21320,-14845,17228,28196,32097,24513,18414,-14068,3448,30540,21984,-11755,25222,10652,17475,11866,-25354,-1546,6835,24351,13418,-2551,10137,-8393,8701,-32671,8182,-19590,-31581,30841,30840,17736,-17060,-25894,-22271,-20288,28560,-15996,-18584,32688,32377,10316,-26661,-20760,22696,-32545,-8167,11474,-30430,14484,-24488,-29714,18777,9231,25929,3158,-14721,6778,1552,26720,30103,9691,-25454,-26956,14797,-28939,-30376,23409,-7846,5848,-20038,8451,16682,-27063,-27870,4293,-6199,-24351,24135,-9527,-18862,14886,-17609,-2249,31247,9971,-18887,30834,5674,17613,11638,9295,23442,5658,19473,-13047,21595,12853,10882,-23384,16338,31049,13979,13575,-13941,28220,10660,-27115,1421,32274,-16282,-2136,12859,27113,-18162,18254,8293,-9967,17278,28436,-3757,2019,28211,-18769,-32632,2698,19582,-30447,806,-22931,18572,27453,-28518,-4898,-28888,-10524,-15234,31685,-124,4356,-10200,8915,493,31321,11132,17979,31574,7562,19784,-28801,-5431,-23076,-13676,28182,-6274,24864,-25856,31183,30150,7623,-6481,-1817,-17541,-15507,-23962,-25421,-23605,-25123,5797,30120,4838,16452,1061,11435,9687,29380,-24410,-18256,-10751,25584,31578,-25975,-786,-1276,13969,22661,-26761,-2056,20116,21773,-17288,-16891,-4235,27511,28616,17400,1583,30579,-9341,-17604,-15801,23384,2058,33,12738,-363,-17964,16078,-17054,-21403,21188,17305,16546,21241,-29223,18469,-9842,-30547,-29026,-25164,-16091,-15245,24070,-3268,9721,-13499,-1299,-8933,26099,27641,32531,-19793,-21237,29037,14170,30621,-11175,11809,-3470,-11761,-23139,10301,-28886,-10367,-5700,28144,-20296,-31306,-22373,-21306,-6049,25305,-22462,-29242,-21988,-3076,8952,-6066,31088,2434,13590,-561,17226,-7833,-4146,-28861,-31295,21527,14586,-9393,-11035,8052,-14250,2585,30236,30775,12792,-28781,-21346,-14706,26529,3529,13590,-881,-18832,5039,28385,7780,22524,8015,4220,-5422,-31415,6473,2000,-16456,-20526,14599,-11797,-29405,-18239,18080,2229,25044,15296,-19429,-19970,-14340,31818,-13451,-26327,24183,17400,-29395,31413,-5310,-31988,25745,7184,23474,28964,-22259,-12486,-482,-28172,10959,-24802,-5605,364,27258,-5147,17608,23729,-22128,-11957,5297,-3923,-13220,24491,23123,-22786,13845,1967,-14862,-6770,20019,-1649,-8989,516,-32511,-32370,20319,11853,5814,-31624,29081,1243,26985,-5732,-32645,12048,-6784,27350,28988,-12914,27882,243,28439,2965,-10461,14029,22717,24918,-26460,5641,14816,12328,2669,12227,-28716,-8631,18187,13576,-28743,10953,27152,10573,-23710,14607,-8499,-482,24963,-8038,-25647,-17283,-26580,-20081,31620,-17208,-6427,-30100,-26314,28832,13261,25845,-3631,-26762,14580,-2837,-26030,-28400,13231,-22957,22285,-15857,10882,-14695,-26781,15870,-13510,31385,19311,-12094,30182,-19689,-30621,-31682,-11405,-20561,2112,-28622,8661,-10019,-19653,-23415,-32181,-11915,24740,-20575,-922,4414,17038,-18896,-13623,-13132,29950,-9386,-2892,-16101,31470,28723,26945,8764,27298,-4985,484,1096,-3644,8068,-10018,14069,15099,5838,-3687,26983,-18623,26038,32418,28606,-17851,27945,-23694,-4274,-23185,-22259,22415,-23814,29579,15812,5877,-22443,31591,4894,14751,1071,-23764,25661,2430,-21041,28907,30068,-9160,-21683,23138,-22616,-30628,-2451,-14651,25837,-23234,-6789,-23180,22567,-6237,28301,-31017,17673,12795,27444,-7960,4521,-27574,-21964,-22976,2825,-15471,-2887,-31381,2502,707,-25844,15823,26420,-21639,-30273,27074,-13973,-6112,23395,19404,-20858,9346,-8455,-3245,-9414,9068,-16878,14609,-19279,-19132,-1608,-22323,27180,-10059,-7614,18276,-16143,-31805,7685,-5083,-9862,-17317,2017,-3625,27815,31899,20124,-8073,-14427,7587,12788,-7539,8832,7914,25070,-14242,28348,-306,-8089,-6133,-4851,17730,12453,-19405,27073,-5140,411,1603,-23861,20840,-19507,16918,-10509,-28233,-15929,23009,-7290,-11524,4888,-17138,25512,-6236,-6045,-23225,12752,25515,-23980,-19780,7422,-95,2994,-29598,7545,18673,14055,-9514,-31117,12954,5406,-30100,-9282,-7248,-26291,-23546,-304,17486,16295,-21726,-28654,28683,20268,13376,23336,14376,-23530,-21142,-5021,-13070,30732,-14736,-7954,-26064,-8343,-15449,4741,-5287,1400,28804,-10098,-19840,-27432,20941,-7172,7714,22320,7657,20964,21834,15812,-3537,-1077,15095,32438,-5579,-28281,-8162,7364,-14535,7971,-3099,-5419,27696,1073,7158,825,-14039,26855,28552,14161,-32348,16090,7625,23993,-4564,-8893,-15038,13451,-29532,8278,25469,-4324,2363,2830,-28092,-499,-8595,18657,1232,-29286,10563,-19162,27698,-28755,516,27778,2626,11304,6388,18123,-11797,-31475,25387,29381,23583,3884,30488,-17653,-25971,-15751,14716,-24493,-13751,-3360,-18531,-21059,16487,-7977,-11137,5956,-16846,-29028,-6095,-32368,-1383,3370,-22474,24419,5061,22252,4243,-335,-7776,27701,-31410,-15359,-399,-31499,-16276,16835,-15907,10714,-12201,9060,7405,22550,21355,4734,-21514,21809,-30862,-21284,-14239,30272,-18586,-22626,30979,14086,-5809,31103,-32255,-7422,13652,6552,-3137,6930,-570,3451,20368,17169,30448,32619,12889,11146,13929,-10998,30347,-32019,-2111,-1801,-16531,18253,27809,13971,24973,21459,-27950,-25095,-2923,2155,-9935,-27475,-27092,-1321,-32340,-16498,-26476,-9943,-687,11656,8170,16591,-12812,21323,21982,6704,24699,26830,-5172,31660,-23520,-3777,-9479,21270,10074,-15610,-26641,-21780,-17442,25569,-28891,15707,-2094,-32577,-22466,-24750,-5330,-15186,32132,6798,-32071,-30315,-2158,21536,-13987,2678,5293,-21030,22171,17884,27942,-17679,20865,27694,20990,-16637,-8710,-30110,13975,-21399,29365,-21273,-30177,-21611,-22309,22562,16120,6532,16685,31045,28700,-29928,-7691,10745,-27239,-1135,2374,30560,28753,-25960,-3993,2569,-16286,-15152,1468,7385,-26708,4337,23136,26298,-11103,-31939,144,19273,-22614,-3981,25089,20317,-31918,26214,11531,16635,-26230,8505,-6410,-32318,15948,-4624,-10861,-14934,-1974,-9316,5895,-26875,-19032,-27606,16517,-6648,23092,18101,-6749,25428,-30029,27961,-32557,-14851,19265,16371,-637,18764,-15516,-24873,13924,13231,1891,29919,14423,29010,14925,3560,-1318,13915,1758,18519,7283,-9970,-5619,18181,13104,-29059,-27640,24442,-2636,16398,-2345,-27207,-23849,-25857,-21807,27018,5845,-12213,-15230,23216,823,-29843,-17494,-15536,-8967,-5602,15365,-11854,-890,25272,18547,1119,-11587,-3184,-5894,-15740,-10550,-21338,-25342,28812,-2974,-18,-22239,11325,-10143,-32459,-3167,-1390,29870,19764,-12248,32298,25546,-29143,10203,-21693,-28965,18127,-14148,-25038,-1474,-20829,23794,-9850,-18071,-6956,-18187,13779,-15047,-22509,25337,490,32392,-18925,7396,27745,-20032,27659,-14825,27098,-14358,18311,-32230,-29700,31553,26239,899,-6290,-16697,-23877,15083,-32012,-12875,-9696,25317,7747,16914,21869,-28411,-10853,16801,24987,2779,-11958,-14666,-1098,-11716,21264,-23160,-12691,9091,13429,31287,20860,-24055,6759,-15370,17259,24108,6542,26739,-15030,-3640,-18708,6480,-10154,3697,-21868,18066,21554,8470,13909,13560,-6643,-9842,24106,-14681,21735,24654,-10587,-17374,-428,14035,1517,-19892,12708,8367,24383,31350,-26205,28460,24736,-15305,24401,-13803,-1478,-7835,14047,29555,-15659,2459,14136,-19997,-24820,-19301,-5248,-7529,-13727,-17162,-1921,-3464,-388,-21480,29735,6617,24394,14606,7378,28947,5583,29759,-18143,28897,-22837,-1818,12184,9490,1548,6577,-11952,5915,30932,-11007,25909,2107,1530,-8946,-30569,-1259,27405,-27561,-30535,-15871,21206,-21374,30138,17756,5667,8946,27804,-1617,-24566,-1118,27746,-4332,-23843,-17452,-21067,18898,18550,30368,-25381,28410,-10652,14250,-12534,-18265,-22320,17353,-20946,15622,29107,-12299,-15364,24458,31741,-6796,-28478,15361,22756,27036,-13654,-13947,25170,-15115,-24524,8099,11440,-8377,-10993,-17901,11852,-403,-22049,-31200,-8366,-32065,6885,2923,28046,11000,-13904,-19460,15575,-2567,-17264,15606,7138,-28890,19560,3275,27361,-9319,-32593,-2520,-3824,-4713,-3039,1944,8041,-17351,8003,7468,-9309,-27747,-14157,-26823,5317,-27871,21953,-21012,31956,9726,24718,-11266,3438,32563,-26682,22890,-18409,-6287,31014,15376,-10182,13600,-17459,-26288,21346,3183,-11507,1526,-13395,-26429,-7994,-2372,13570,21258,1820,423,3771,7549,-10291,-31091,13791,-670,-29989,-31184,17352,-12930,-16703,-7516,-28127,11598,-9179,-22460,9379,15825,-4036,-23696,-32228,23463,-32701,17353,-21217,-20760,6702,15918,-27799,-9736,-3475,-1294,-22929,-8847,-1300,-4708,-14863,-22956,20921,299,-290,-6317,11800,-25075,-29356,-6282,31504,24321,9349,150,26836,-27225,-10137,8205,24568,-24148,13180,5885,-533,-11151,24009,19456,-23297,13232,-7655,31726,9159,20846,-23450,-16017,22897,20769,-4177,-19951,14252,-34,25105,-31140,18031,-16038,-21780,1428,4711,-25910,-27940,11316,25785,-29660,-7602,23224,-22056,13406,-30704,2129,-31148,-1982,4218,-25319,-12685,-17516,15030,-646,-17484,25268,-4292,27223,-28587,-10788,-13148,-19396,26151,-116,-14830,-30472,12992,10309,-22743,-15867,13381,-19186,27650,-21235,21445,8789,14493,22794,15800,12179,17039,-12007,-18231,-9149,-26181,7920,-6360,-11081,-31799,22976,-18356,2547,8535,-3603,-22231,-22828,10097,6740,12606,5839,5113,21377,-27331,24046,-14223,25379,12722,-25292,-16590,-14159,2963,-2208,17526,30942,3164,-12666,-4938,6019,-25293,28179,-2335,-22029,-10933,22240,-16661,31949,-5856,-26336,5415,13437,9694,7080,-21946,19071,-29855,18152,-23615,32014,-29512,-23855,-29424,-23728,15461,-10588,1288,10555,18226,13113,-32112,-5345,2107,17488,-14584,-949,-24011,1367,28399,-24755,11674,26198,30960,-30520,19078,-4814,-15759,19004,-14869,26207,6720,12692,-6684,-10156,29211,-157,-22989,-10865,-12035,-3673,-19364,12432,-3104,-20293,4748,-30037,-11781,16318,8136,-6711,-4078,-17559,-11492,-21906,-21823,-24246,5473,22811,-20702,13128,-30643,14997,-22906,9728,29483,29715,-17328,20932,1157,-1872,-31752,-25854,5692,21550,-31308,-30380,-31957,18456,-7639,31279,-27083,-20262,3562,30515,-24131,18627,13709,10910,-946,-26611,2866,547,-24658,-4745,12697,-15701,-20805,-1224,6231,-6072,-30573,-20017,-1460,11577,1514,3586,-22570,-20206,-25485,-32559,17062,-14823,-21066,-32552,-2821,24185,5649,1819,-20182,27491,5015,-22062,4245,-20775,12066,-1573,19197,-30635,-18427,-11558,-19759,-13477,-26583,-6203,916,23348,-14173,-3123,-10305,-4600,4553,-30244,2990,-5955,20151,-31412,-9641,-32692,-20763,26115,10099,22187,-10969,7491,-3134,-18734,-3031,-5549,-8770,-30572,-32632,-29077,12963,-22776,17074,18026,-21011,19602,8821,-15796,-9097,-12168,-1142,-9862,-31836,-24748,19317,9447,-20110,-2409,-25809,2397,19355,-21805,26006,-8295,-838,-7284,30288,23164,-6186,-23905,-426,1115,28831,24064,5148,-32343,16887,4879,23739,-13749,24990,-3858,20265,-4439,-7036,18701,20574,25849,-5033,6883,-14039,-11773,12499,-5815,11684,17858,20149,23149,23529,-580,28728,-26867,10558,-13650,9947,30516,-7909,-26764,26015,7721,11550,-21387,28944,-19856,18121,-2194,8802,-28214,11045,5176,-3713,20239,-22785,745,-28997,-4627,-25621,16059,-16352,4876,31600,3384,26201,-14895,-8535,12581,-5150,-15189,-29996,14349,1712,21950,-23481,-15799,15791,-13554,6609,-6555,12718,-21933,343,-31736,12883,-27895,-14771,-16843,29660,15647,8869,-18828,26335,-25488,27539,30725,-12611,-12893,14234,9381,15587,15032,-3828,9069,-30432,-13834,-18165,29631,-28534,-14438,-4896,-26137,21903,31048,10060,14107,20863,31606,-14731,-1102,-22081,17421,3199,3499,5955,-24956,-16081,8964,-14753,24793,-16655,22812,14032,752,10160,-26577,22769,25847,-13894,-32206,-14055,-5927,17426,-27015,-30130,-6231,26682,-6632,-3870,2822,22897,18481,-31405,-6201,-9333,5785,-14633,1373,-19712,-11499,-3911,26802,8652,357,-7007,-29371,25926,18563,-14995,7029,-8917,-21838,2401,25239,2174,1069,27791,-19204,-24943,-6069,29025,9394,1088,1139,-21263,16978,20533,-10318,-17108,-21699,-23602,4348,-13485,20312,16472,-25388,-5371,-24311,12228,-7034,14313,-11012,8333,-19440,31544,27361,11324,-32672,-8745,32187,-20077,6928,-32489,14619,24598,-21137,14888,4174,-31148,-29807,-7819,18696,-30825,-8628,-5950,9394,-9574,2337,-15625,-10654,-10377,31649,16804,-32279,27315,17998,32533,14460,-6333,20820,1750,11498,-28131,-2123,7455,4666,15306,-29862,-1752,18856,22645,-1612,-14317,-29843,14998,10505,13645,-10311,-12004,-28570,-24390,5484,-23957,-29675,-4229,21169,-3742,-32223,11291,7829,10854,-17710,4957,-3708,-4348,4222,-30531,-27650,-21393,-23705,-3829,-14283,13120,27954,-12723,-24796,17619,9782,8065,32603,-18960,10846,13461,-601,-5059,28673,1487,26856,25742,14519,-29019,32746,-372,22633,-18005,-32281,3281,-15894,-5181,1255,24067,12064,19956,8990,19751,-25677,-3342,-4976,-25069,7083,27807,-23997,7950,8459,29190,2281,-29396,30437,14502,11136,23282,-19903,14491,-15705,24505,-15979,27192,21933,-6117,-11281,-29218,11908,7788,30546,-14087,-1047,7314,16997,-21910,-1233,12843,-30518,5891,-26878,9044,27748,16142,30876,-25530,18763,23764,-4805,15122,11745,-12066,-7426,25886,-13938,18598,-10338,-31023,-11457,25601,-31577,11172,-18274,-78,6416,2247,-20477,22028,-20570,-15457,19056,-29675,-5950,20057,3506,31100,10109,29919,14810,10666,-6859,-28404,-17869,-17352,-5891,-8902,15431,6509,22805,-12884,-12408,26454,-11460,-2297,-32426,1459,-21229,-1673,19893,3414,-4676,-23066,9478,-30566,3408,-3340,-22676,18637,-19298,-6992,23511,-13660,-2144,-16743,-31858,19983,-4167,2792,-20446,25333,28049,-9484,4419,13812,208,7381,-11797,21381,-7610,-10574,29604,14986,27251,22008,-28102,-27563,-27565,14515,-30649,-12700,12565,-23050,-17470,16433,16584,13952,8057,-28916,-9873,-25475,-27142,-27600,-7959,14986,11282,2708,-28229,-1702,2839,26254,-15232,-22935,29601,-9515,21877,-7591,24746,357,-4642,-14535,23291,-14570,27819,1714,5121,-26631,-15946,21486,24479,12290,-31149,4459,24617,19004,4350,-6939,26547,11163,-7069,24104,-10461,8685,-24309,-25396,4782,-11609,20408,9839,-4462,20897,-12524,16819,28778,-3488,31532,-1356,-24611,-12675,-24150,-26417,-27090,-22436,5670,24929,30055,-13472,6147,31671,-9901,-5843,28364,-13276,3678,15798,-11867,-25660,16621,5349,10105,29999,1121,-31414,-10424,-24130,-23441,17176,4595,-18304,24039,-15405,30618,-12853,15789,-20123,-15562,3178,-25898,14651,-1270,18100,-24198,30603,6111,22335,2514,-23883,5133,-19058,-5814,-28743,-12146,-1619,-24641,15311,-25741,-16375,6318,7251,21436,-6949,28172,6765,-5355,-18231,-2081,21663,-6819,-32328,7134,-4295,84,-1051,-22715,21805,-5863,-3350,-17590,-27439,-15124,-25452,-6289,26930,-15194,15707,8973,22722,1880,-7897,-20761,-1878,-9853,9905,19243,-25048,18981,11337,-3364,811,-32695,32380,-24956,30812,27167,18842,12379,-27383,3309,654,-9029,23382,-23183,30769,6796,-3510,18023,16251,-30010,16160,-22590,29981,-17973,-14337,301,31278,-15099,-8224,25711,9239,9637,-28895,17482,13426,15454,32727,-23032,-3453,-8244,-30684,-10216,15496,7478,16316,26195,959,-7767,-11635,15334,-22054,-30045,-7946,-27797,-10548,1692,-25528,-11903,21125,-24854,-22022,-13491,5229,3323,-1723,17847,11433,-769,-3441,24177,-4155,-18367,12097,13981,6011,3747,-879,11454,1522,4297,7963,15564,19230,18218,-5794,29361,23838,-1889,16297,-43,-21926,22912,26218,31549,5966,-13079,-17817,-1464,24322,6344,15103,20914,25330,-16955,-6468,-998,-13956,-20684,-1866,-13123,18172,15227,27000,11275,5311,-30681,-25211,23225,1217,-27180,12716,-9791,-29656,32468,-8771,-7368,24075,17324,32423,17615,-2394,27005,-4841,-24671,-32579,612,25083,-25527,-2997,-9127,-2262,-17176,-2504,-4916,23204,-2573,17240,25086,87,-12048,12790,-30694,-3048,6223,7445,5493,5717,28679,-13764,-1465,929,-984,11021,-19820,26747,-31143,27303,-4331,-30076,10471,1116,10811,-19268,1728,15663,-4961,3701,-18007,-28381,24167,1415,-14591,-13391,7627,4817,-29555,1385,16757,3895,20401,-6230,-3765,-7218,-1292,15185,17496,-24610,-5716,-19309,-8033,-8299,-20715,-21682,10033,-10750,3896,-6934,-22813,27240,21283,-15948,29666,-16448,18728,32309,-24340,9221,-17437,-29417,7412,-10618,13469,-18036,-1587,2225,-11903,11077,31979,-2942,-1229,-23995,-15174,-25547,-18881,21607,-2599,-16637,28422,-31860,20903,2184,-16722,-10102,22477,-21100,1513,-11619,1078,-13911,31479,-2771,6498,30212,32371,146,-14356,-24888,29592,16795,14421,-22405,-2860,13996,3536,-11311,6538,-12617,-25546,1356,11078,-17327,15022,18771,-32076,-27474,-15484,-13307,22322,19433,13010,23907,14581,25911,-32577,20121,-28423,-14824,-5076,10719,7043,28484,25646,28913,5038,21152,-11541,22070,-2700,120,19885,21035,13769,-25757,21164,-5199,-867,17998,31777,8449,-14098,32411,3576,-7117,-1500,-11073,-19372,-9345,-28455,24128,-11127,-22461,-15177,-29486,-25239,-11669,-28903,11864,-16844,24183,16680,-1618,-25215,16857,-9524,-32432,14536,-28197,-15702,-15954,15584,20916,15607,24815,-10605,12965,-14032,-12843,-23363,-22209,-28590,-8611,24585,20807,-3580,-2207,-25938,4057,-18665,-8496,27712,27504,27306,3011,-7183,-23148,-16001,-6309,-12959,13906,-14675,32209,-30052,7721,-3591,-28234,11692,-21096,7685,18187,13020,24881,-22304,-24001,15175,-14504,-26966,24400,2753,30990,-5414,9988,-15125,12145,-15487,6469,-25287,30119,5131,14868,-21580,-19651,-12685,6176,11816,-3066,-2667,-19235,9222,-30088,-16513,-19856,-8919,11882,-16643,11153,7485,28857,17896,-31888,25435,20573,-19892,-23323,-2297,10818,24515,12001,18244,-637,-29516,-10331,-31864,-15869,24152,-20337,-4463,-11162,-25191,13494,32063,7981,15692,6354,19121,30527,-10884,28565,25299,-8546,11247,2457,-18730,8541,-2712,-19821,-24368,3533,-162,-13798,-15962,-29369,6045,29254,-11511,-17380,-22005,-14700,19989,-3934,-1275,30705,-14324,-11901,1925,-32009,23990,-29860,21786,9911,-17005,-30126,697,7766,-8264,-6490,-28651,-5682,-18621,24834,-8814,-22622,-15138,-24285,9511,-9926,27520,32716,-5933,-20541,27271,-6574,19779,2703,-16503,3382,22630,-27287,32614,257,-543,2038,-31588,-5254,-5272,4308,13488,-8147,16347,5128,-18737,3891,1448,9181,21067,17632,9548,-26515,3930,31995,-28829,-22324,-9848,-15356,-10273,17660,-27943,-6855,5749,2284,21629,9873,14454,30269,7330,-1895,-18396,-3403,-20991,-24137,-26328,29274,-18059,-12935,27016,15993,-3222,18827,16614,-28410,-7533,-16982,8163,-9754,27914,26053,-8712,-2460,-26761,-10714,20977,23276,-22136,19641,6577,5040,31946,-28583,-24977,21610,-6554,-19012,-15458,29066,-30478,-1954,-13198,15629,-21640,5725,18952,17775,-31497,17714,-3641,24198,-7349,-11231,9642,17273,1349,-26111,-26644,-5467,21132,18840,-5523,2959,-15642,-28075,29432,15490,8889,-15292,5658,24719,11035,-6183,-31948,-12914,13521,-24221,21733,32374,-18502,-31794,-22581,18358,-6903,-13982,-15576,-15155,-8365,17844,21206,-18541,-3781,-14744,17115,5626,20073,-3285,12921,-16663,25158,20425,-7675,27291,11646,5447,13172,21559,-28150,7882,-3722,13203,-14000,7172,-24527,27593,24802,12408,-15452,-24718,-3519,-6941,-5839,-31062,-6002,-16860,28590,-1823,-7601,-19890,17845,32624,-26045,-6976,13227,22091,-12748,-20482,-22642,14739,9461,-3014,26089,-19013,-17727,-1364,-25171,12071,25807,-130,-3446,-17327,22617,23675,23206,-18497,24059,-24933,23968,11768,-31668,-3037,2287,-4632,21940,-21096,-3254,17698,24592,-18251,-28819,-20914,4882,9655,12236,1926,-25227,-25277,-16409,10195,6839,-23261,1061,-12606,10318,26231,-5043,22876,-19255,19182,-29661,14150,-2375,-3862,5114,19737,7234,12424,-24197,-4676,8813,-23809,-22570,-4767,-8041,-13646,31113,-5969,-26127,16823,32588,4650,32056,-29690,-22443,25725,-8621,-2073,-13582,-20389,-30180,-12193,18337,4525,11521,23156,-30623,-16328,11179,-22544,12311,22124,28267,12321,19806,-23920,-32105,-25507,12155,-19498,-18258,3364,17698,-31036,5045,-10533,9704,25538,13612,21937,-23472,-24245,-30615,1540,-6861,20509,-20099,23591,17564,-21063,-3800,-21631,-6053,3869,-266,-18620,-11867,-9109,28978,-9875,-22523,-19970,3156,-31165,-460,-27087,-1056,-6979,-22238,9326,-9481,5907,10590,16648,7890,17758,28985,7172,-9355,7901,10703,-3979,6529,3789,9221,15094,-4175,15389,-16054,-6325,18844,26317,12168,-23050,-21033,-3040,22913,-9902,-26844,-19582,-20918,-3850,-30589,1834,-15592,24071,2092,-32728,24979,22402,15782,2026,-4535,-14647,-2420,-11886,6865,-24709,-12828,-19396,-10159,-10127,4957,-1712,7649,25453,31688,7105,13130,6391,31520,-18805,10298,23482,1881,16808,3794,-10582,8993,9779,25560,-18185,857,22740,-12020,-32716,30222,-438,30141,-526,-806,-24239,-5480,-6388,11299,501,11381,17379,-12049,2786,7133,17272,-18227,-2780,17002,1843,-6833,-32025,8071,-6586,-21890,22316,-22502,-24602,-29779,-10362,23162,-24102,2944,30893,-8276,-12634,9147,14657,-5264,14473,-15127,-16825,26839,1058,19645,-13778,10042,26068,31207,32469,-8540,16748,-11507,-11086,-22961,-22501,5866,1670,5198,9260,-13492,5492,13483,-20924,11601,21951,-32418,7086,-14624,14727,26253,30083,18023,1841,29720,-23378,-7265,26727,-29294,2321,29709,13733,6340,-17954,28034,5262,24746,-17293,32273,27971,9174,3290,-27361,-11802,32392,7338,-21733,-16026,-3088,19509,-32569,-6057,-29298,-14281,31431,-32311,14773,3831,-5025,21988,15386,21477,-24554,-19197,7661,-30738,8594,-28817,-23683,-25472,15907,12814,14812,28460,32470,-4479,16235,2345,9350,-5860,14786,-25545,23013,-10000,15758,-22728,-18873,13962,18401,22868,-32753,-1686,-11889,-20126,4684,-2583,17045,-22520,31199,-4484,16681,-28747,-24221,-25814,16347,12224,-30168,31385,-21862,7945,18220,21361,-21133,-31959,-9080,-1254,2695,-16087,-32378,23493,-15993,-8117,-8585,-10801,-32455,26029,-23460,21111,-31268,-3952,23254,15039,16675,-25950,-4308,-16582,4373,17323,-1503,8181,-19325,31074,-23323,-12505,-10970,3158,8314,-31467,30893,-19280,5019,14283,14619,7307,7795,28584,15249,28225,5503,1055,-22965,32580,-19348,8425,-5087,-30329,-5547,-25981,-1615,25175,1741,11795,-1624,686,-26716,6001,26396,-16865,18387,-7546,-26024,-30680,-24206,20825,17840,12737,-30267,-712,23529,-28122,7506,-27770,-1946,12524,23518,4163,-2564,13149,-29683,506,-31398,-6062,-28275,23520,25846,-31453,-9052,-31467,-24769,-7764,28140,-22395,-21403,-8004,-27072,-21031,-7423,-1290,6704,26752,5959,13279,-14500,-25293,-31767,-2161,-5320,-4680,24042,-20759,25191,-18301,-16081,-3193,3577,10586,13933
};