#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/leaky_relu/leaky_relu1_golden_int16_test_data.h"

const unsigned int g_leaky_relu1_golden_int16_test_data_size = 2560;
alignas(16) const int16_t g_leaky_relu1_golden_int16_test_data[] = {-2695,-6639,-7303,1654,-9710,-3506,12376,17514,-9618,25972,22286,-5095,-2013,17514,25004,2509,-3062,-9589,-9707,16839,-2027,30695,26230,18842,-3871,-1324,1179,-3554,24890,-8467,-6988,-6435,1280,22114,25974,27736,-7270,8648,8735,21577,6861,6078,28455,-5738,21281,21703,5132,-7416,-5862,20829,-5930,13484,-445,13113,-2456,27391,-9355,17598,30420,4588,-6058,-6737,-2306,6475,-1408,10518,9498,-9501,25327,1114,-7007,23280,4152,7614,30361,-5073,-2608,20595,6442,24993,17050,-7577,26544,18413,-8195,-3385,-3510,-3927,-4349,18877,-891,18410,4411,-5881,-5344,-727,-79,-5696,-4806,17991,-9329,-7642,1054,-6913,5331,6880,23568,-5374,-4518,30108,13464,-6335,21445,10267,-628,11352,-3041,-7666,6168,25216,-9187,15980,-5857,3351,31298,18662,14980,30894,1037,3134,14317,1122,23182,-1188,-3364,6668,2638,13308,11310,31725,25986,-1537,-1061,-1039,-519,-4568,20370,-5779,26501,30563,15634,-8912,11159,3593,-9169,13354,-8673,-2800,-1705,-1602,-1252,1932,-3611,12096,-5655,24176,510,10203,6390,-79,32370,-2282,6319,12075,2412,-2528,23498,27146,-4342,31770,-2609,-2186,9392,-1026,32051,21973,25550,2597,11901,-2253,-1063,32758,-5413,25679,32573,28595,-765,13974,23891,-7932,-7204,-3700,-6098,11393,-2393,26110,15145,-8071,-9756,13759,17411,-4085,-7421,-3051,6856,-8252,6968,10677,-2712,-5878,5163,4733,-9290,-2026,-2362,-4637,-9466,29550,-6971,11889,-4117,14633,14453,-7577,23762,29765,30189,-6936,-4064,12624,10038,19783,-4161,-8863,12231,15613,-6091,14605,-563,-4978,-442,-4834,-4270,-5365,-2832,-315,30690,-9296,-7194,-1464,26062,25074,-1981,-7648,-8201,26851,23254,29140,14187,19947,-3604,20551,12025,28574,17553,6279,14819,12741,-7866,30466,-547,-5803,-2917,24101,9810,21319,29945,-9209,17191,-8801,14419,-5512,-2920,23035,9737,15034,10433,172,11952,-610,10648,-4955,31587,-9232,-634,24159,28382,-3140,-1849,-2875,11659,-8229,15615,-2124,5851,16443,-5570,-6716,10470,-1696,2480,-8210,-31,-4420,-3476,11520,-7657,2282,-6242,-5389,26196,3402,-5049,16377,-5634,25263,-395,-491,-4312,20987,10392,-5683,-4349,12744,23167,-5735,-1912,5490,-7366,3931,-4763,-5066,24506,-481,2901,-2290,-5257,-4935,26943,-1130,9578,32028,1052,32254,-34,32521,-7996,18772,-1321,499,13574,24482,11553,-930,-6854,1329,-4407,-7945,-9609,-5630,29526,-4559,27010,-1210,-349,14920,3476,-8666,-4397,-4288,-9421,8546,-2828,-2426,-9331,-5699,-5441,-2705,-6778,29584,16876,-3709,29380,-5757,-1770,23132,20896,-4366,30860,-986,30283,-7286,-5354,-8004,-3174,20149,14294,7376,-275,-1432,25962,24879,22625,27901,-3363,-9625,9937,23641,-8556,25671,8779,14387,8426,-7516,14907,10850,14108,32389,-8542,-5213,2405,-3897,28320,-2157,-6067,-3977,-2086,-3891,2054,-7942,27460,-2222,15059,31138,5194,-6806,13755,27837,-5929,-9754,-1047,24071,-9592,-4598,-3480,26773,6204,-922,-4347,-8060,2913,-4018,4778,20490,-343,16392,24281,-7692,17640,-1577,26601,21540,-3690,25297,22074,-7516,-7239,-6482,-9167,-4117,9227,5185,9179,22158,-9524,28248,-8068,-7711,-7853,-8067,28059,-6442,16630,7065,-4488,-5864,32273,-6654,-5101,-689,-2917,19168,20209,-7106,1948,-9586,28603,-3021,-6512,31091,-9328,25040,-8589,-9042,-2452,-8772,-5061,9539,29150,-9077,32138,-8051,12402,3700,7783,-2126,28571,-9541,9159,-3166,-7407,1156,-7478,-8636,24372,-788,31493,857,6912,-7276,7205,18131,-3317,-6473,28823,5377,-3475,29838,-4881,-2271,28687,11716,4048,25897,-2202,-7785,-3729,9071,29029,15,-5445,-4671,-6324,9586,28403,6518,-9316,-5514,-1240,31453,10637,-8998,-2962,18968,25290,-4957,-6443,-5275,10253,16601,-9465,23492,-7419,1628,-5732,29836,31666,24658,-6114,31713,8336,9516,-833,-3257,-4561,-2146,-9593,32381,-141,32176,-8233,-8700,30935,-4644,22206,-3886,17503,-5268,-3782,-4933,-1955,-7909,-1405,6802,30260,10054,-8379,-9500,-8536,15351,-7671,13432,9066,-5336,-9775,-4906,27715,3882,-7311,-4435,-6309,16865,-1632,-683,12405,-769,21120,-7908,-6515,-9507,25999,15380,32081,8863,-5338,29784,17837,-40,27678,-8210,-3723,-7274,-7759,8519,-796,27742,-7960,-6902,26653,-8513,-1477,23111,-9238,-4922,-5586,-6773,-3980,3911,26904,24014,4696,12302,-4722,-1245,-1268,-1608,-1135,-64,-337,-6756,3801,-9057,4603,32579,-3604,16207,3691,-9356,-1811,14775,12807,15437,1009,27431,21331,19889,-254,22142,810,-5771,-5334,-2964,22880,-4041,-103,-1709,27638,-4936,-7647,16693,19667,19372,-840,-8753,16540,2327,11205,28510,9118,-1271,7746,26970,26724,-2373,-784,18787,-7184,29409,11053,-3844,-472,25865,-2606,-4994,-4702,-7040,8178,22934,7301,1671,-440,11208,-8248,-5376,9126,-4363,18107,-8047,3003,8442,286,-6663,6713,6804,-8193,-3814,32139,31464,-8273,11644,20874,-1528,31316,-6043,-2298,140,-1911,31197,12163,-9583,25040,21574,24784,24852,-5912,-8890,-2352,31763,-814,-2096,22522,25356,-4995,11575,-1295,-4225,-4028,7559,8977,26495,27378,-9516,-3471,-8260,-2970,-4089,-451,3457,25982,10828,16157,356,-299,-7501,22236,-7224,-769,21833,-8653,2222,-1229,19400,-6334,11371,-6769,-8250,19551,-5962,14978,-7517,12314,-6687,-7271,-6781,-7303,-8194,-5095,-5486,-5803,27382,-2711,1532,-2396,-3752,25804,26648,-8571,-7433,7410,-85,10059,-4803,-7058,20332,2105,9242,-7812,-2344,-312,-4568,23603,29859,9793,25513,1223,-5820,1332,-1007,-3571,13373,-168,4170,1025,-8019,-2149,-6814,31569,15656,-9679,23092,23026,-8321,-828,-9398,-240,-1591,-9501,-1272,-393,-7331,27029,3359,-5343,13607,10728,-1753,-1372,1935,26499,-1981,21542,-1446,16599,-6676,-6466,-5982,-4408,18244,-4101,-4649,11271,-6328,-1522,4398,-523,4703,16668,793,3570,-4241,20016,27499,-3879,-3376,-7366,2877,28889,19172,-1163,5887,11426,-7576,-167,8069,18539,18726,20748,-2811,-934,-638,28390,-8383,-8952,-9589,31193,21054,12501,-9157,-5789,-1940,8711,-8305,7516,-431,9367,-6531,-9062,-4633,-6180,-7552,16050,-2913,6589,15705,1591,-3409,26252,-1521,-7916,30036,-9460,-7093,12391,24330,-5588,-2212,26217,17928,27248,-887,5705,-7429,8956,-3305,1656,2542,5358,31597,-5434,12711,-7662,7731,3609,10510,-9153,14771,21924,12200,10168,29525,27270,1661,-280,-8890,-7236,5972,-5408,3348,-6112,-8916,-4317,-7864,4261,-5527,-9202,-6243,-1254,31392,-2329,6900,-4967,23853,3660,-6074,-5229,-934,-9237,-7986,-5552,-5008,788,-7814,18544,-6189,-5748,706,-796,-1739,-2670,14264,-901,27507,2254,-878,-3724,12975,-8201,25427,27415,-7111,-3559,8752,-1610,-6718,17083,19621,8693,-218,23554,9623,-1303,1601,26437,-4984,8067,-863,-1359,-3635,12729,-328,-3584,-6943,5015,8508,16252,14583,-4585,-6745,6743,-7934,28055,16735,-9206,-8203,-1930,28991,-8608,-9377,17935,-3292,-8249,4287,-4188,29603,10187,26321,-6572,-7133,8551,30815,22867,-4529,16732,-4943,-4943,-5965,27255,415,-9590,-9466,-3598,-6410,27100,-3887,23699,-3557,16959,10652,-8698,6163,-4867,-4025,-178,30887,-9062,-2942,18160,-9600,28917,-7748,12553,-148,237,28772,19921,22413,-5047,-6645,25912,-7406,-4233,23239,-6366,-1342,-3524,-5218,29734,-8470,23666,-7045,931,-5306,-7175,-3899,5738,-5109,11977,-6322,25934,18035,-8854,-2359,-3859,7398,16372,-237,9280,7528,-3256,-9449,-6424,20943,5348,-3832,-9347,-6236,-564,21097,11180,21704,7503,2856,2901,-7751,5822,-9448,25241,-1178,1156,31355,30527,-1307,11923,29609,15343,6847,8269,25430,18682,22887,-7003,12311,19292,-8762,-1821,-4894,2628,-4219,-4427,15688,-3806,15742,25555,32497,25127,21140,26081,6062,20665,-4037,-1045,747,27240,502,30204,5383,-2389,863,-2425,18977,-2014,672,4150,-7257,-1477,-7631,-1911,16830,627,-5009,4314,-6058,-2152,26088,31488,-5044,4476,15624,-5189,29275,1792,-9777,-7,317,-139,25857,-1428,-1612,-3064,-5656,-7772,2989,-3402,-7165,-1350,-4493,21861,-1731,13384,-8333,8408,-3021,-4341,31990,-6341,-7659,26612,3754,-4745,-1061,5416,2943,32702,-5336,-8902,-924,30181,-301,-1569,-9113,-5512,10203,-9730,18899,893,-9279,-5014,27394,3299,-4726,-2156,374,24793,30327,-9017,-7275,17044,-6813,1796,-2182,5195,-2035,21881,25503,-5833,30605,11940,-8156,-1687,-2187,14942,-7870,18787,-8328,26847,17658,2958,-1979,9478,-3931,13627,-5539,9270,28358,28286,30113,-8086,4794,-8817,-7144,-6184,-7903,-4783,-401,-3569,-571,25857,-2790,26469,32252,-5466,-2799,30582,-4310,-7946,14381,-366,-4202,-3575,-5120,-4000,-9208,-7260,12579,-9706,-4966,-7638,27692,23446,-4133,-2964,21531,27970,25689,17996,1692,17287,-2293,4082,-4229,26063,-4081,16791,-417,6104,21822,215,-5738,31729,27436,-3654,-1292,-9203,16152,24737,-7423,13674,25494,-9208,4101,24561,27260,-1218,14158,-7201,-6828,-2151,-7420,-8273,28612,-2866,16621,30942,-8534,-4306,9431,27300,-2689,28770,-2754,-2077,-6403,-6689,14305,-8710,-8799,5130,9846,29290,5968,-5343,-2412,4065,29343,16388,-241,16790,-8142,-4928,31356,-2644,-9360,6250,29064,-7306,-6276,15860,-8059,-6472,-1900,-1681,-8512,-3908,-5538,31725,23258,-2697,-4794,-2413,18108,-533,1671,-4142,-9784,6587,29095,-772,-604,19349,-6472,-1946,18639,1530,19279,9536,2367,32258,19371,18978,-5178,-2484,11752,-8205,-7865,28638,9961,-8192,5177,3850,-8935,3264,-212,24170,-689,-7649,17213,12958,19159,-5346,-2784,-5402,24203,-9428,8318,-2523,-2552,4721,4385,-4246,-3238,3958,-4062,-878,15538,1489,13320,28372,1150,1220,-6920,-1726,-1233,-7325,1540,918,9752,-1335,-4234,-4175,-5026,-1404,31960,28094,-2619,26709,-802,-5278,-5835,-3722,-2710,6835,-5846,11707,-9205,-580,-1117,-2275,-9802,12821,430,-2268,30217,11427,10366,1889,8031,-1023,-4893,27447,-7379,-8488,-843,16016,3486,-5857,-3079,-9345,-7627,-7684,-4906,11897,-7567,29521,13158,30417,-8004,7498,8804,20991,10035,-1491,-6028,-2288,11365,-3313,11272,-5278,-4550,-3163,7669,-4222,-6356,-8641,-6824,-1695,-3892,14115,-1574,-4702,10715,-9728,-2387,-7067,-9323,9876,8687,-486,12424,-310,-3999,-9309,-4213,-3396,-5747,-1816,2691,25561,4721,1089,-7255,12563,-8286,-1857,-3704,-8875,-2707,-2021,-5400,-5522,11938,-9597,-1139,-8587,-6976,22361,7617,26446,30561,1376,11469,-295,15021,-6517,-8691,-2333,-9376,-8592,-517,-9101,-6610,-4567,-412,-8605,-6796,23977,23419,-6806,16923,-572,6411,13566,11740,-5595,15224,-174,23323,-2032,31948,6500,31232,-2851,20868,749,-5872,144,-7900,-5380,-8596,-4956,-4305,24551,-6744,-3068,-2843,27081,6405,5829,28163,21766,-8584,-8114,4716,28432,25675,32165,-5254,-6820,17655,12248,-3130,32064,29176,22186,20506,14574,7955,2233,195,27294,1941,-9178,-1255,-4893,-1731,4434,-9400,31473,-5630,25265,20085,443,-6214,-5476,-2299,1193,5415,25633,-2344,-5385,13737,566,-2621,-6182,-4653,-5484,-5087,-4482,-4622,-932,20497,-9586,-2173,-780,-4735,213,-124,-3626,-3565,-1226,-8077,-1277,20311,6619,27967,-7210,-4591,18070,2864,21595,-1144,-9444,13750,7770,-2016,15564,23150,23143,21784,-6142,-1166,-5816,3502,2609,-8679,28347,23919,18724,30506,-9151,-3603,-8112,27753,-5860,10953,1615,13819,-2572,-8952,-7802,24189,-6136,-9015,7073,7176,29499,-4032,28937,29216,-5483,-9560,-4714,-5417,11965,26457,-5544,12611,26924,32375,-5542,12146,-7471,-2331,12516,21569,29735,-5845,-4466,8202,21489,-2468,15721,-9081,20643,18325,-4384,-5380,27629,6292,4013,247,5973,-6652,-1034,27321,25594,1115,31090,-4268,-2494,-6396,-2586,-107,29208,28100,-6893,-1654,26907,-6272,28515,9933,135,19255,-3670,-2718,12003,27828,-924,-7309,26078,-2613,1144,-5485,-2157,8547,17243,-4914,8399,-6906,21308,-7018,18394,-5853,17622,2363,17082,27099,12234,10767,18545,-2806,22166,-1509,-9274,2248,-9123,19555,13118,19842,-4908,-4873,-695,4193,-4999,16431,-7964,-6130,19327,10952,-4730,11349,26575,4142,26612,4226,-8692,-3260,27229,-6958,-294,-9636,1396,-2803,-5587,26945,15514,8060,-8492,-2772,-660,19030,24637,-1888,26263,25449,21491,-8036,27115,21694,14685,27010,21514,-1241,28359,229,22481,11286,26026,-8129,21169,31013,-958,-2311,-6203,-870,-7603,12340,-3696,-7450,-2335,-7095,15168,20469,-818,20838,22549,-3665,26363,30699,10325,29029,-5185,-5941,29927,10427,-7827,26076,29529,-5315,29356,-4609,-5261,-4426,-5246,16187,11324,-4021,10107,4251,-4179,-3964,11331,-2557,-6112,-686,17135,13576,7924,21719,18829,-7098,15356,-6887,12780,13348,31799,8862,-2176,29481,3283,22252,7019,25240,-2963,-9024,1961,-739,-7200,-3353,22842,-8983,-6001,-3351,20793,16565,-4893,-2922,-7585,17940,-7991,-8,21813,-5730,-8843,-6439,8564,15060,-81,-5508,-3067,-2628,5918,-300,-1273,-9468,6378,-6616,-365,9925,7135,2175,21278,-8938,27247,-3623,-1185,-1398,-8610,-9318,-1183,271,-8069,19037,-4072,-6253,-9376,2270,-7145,-613,22068,5502,-2118,4077,23762,28707,3692,-8572,18329,-8728,19233,6218,-501,19479,3926,7805,23974,3067,-2853,-5253,5782,22062,22962,24802,31079,18754,-7826,-3844,-3459,5801,-4695,32524,6072,-4057,-7170,28607,28047,-5403,-8425,-8574,-9073,-4039,22766,31266,1117,3154,-8006,25614,-4898,-7632,30775,-9336,28684,6171,-2182,17274,25932,-4902,15433,12384,-1734,27798,-8606,22936,-8661,19823,-4925,-2488,19831,29431,29057,12768,-5390,-1233,16581,4397,10691,1546,15223,4282,-9443,-7191,9217,-2356,-6701,14680,-6746,17562,16937,-6493,-6692,-1739,-2807,-5263,-8603,-6726,-2820,6487,-2390,-6762,5575,-4281,-2353,15127,15661,7626,5129,-2379,11044,20237,-5075,29338,13006,4293,-4071,24232,8527,-6055,25066,29116,31161,12836,-3282,-6796,24621,-2681,-9750,-5031,28093,20273,19532,-4155,6425,10404,-7147,-8188,-1050,-369,2076,-9167,-1338,20686,17954,8782,27223,10354,17415,20979,26975,18498,-6433,-6815,27814,885,-5668,-3110,5193,24039,-2872,-8640,12701,17762,8549,5364,-9819,-267,-3994,11449,-7599,24904,-667,-8042,15652,27693,-8406,3080,25868,-2650,20439,7718,17658,9624,-8953,29826,11979,25421,-143,13465,22535,16519,1269,16145,24761,-6461,-8080,-2652,-3949,29305,-301,-8934,2174,-9784,-6106,7364,1569,-7777,6359,12575,-6539,-5261,29430,-8647,13145,9020,23389,6460,12720,-3788,-2981,-1331,22309,-2802,11653,-5530,17440,-9665,-3097,-3839,27093,-9063,-6565,-5120,-9171,-1716,-3815,308,-7549,9902,-1966,-4968,-8653,31141,7547,23510,20390,-5338,20946,22154,30702,-3857,-7020,-4725,494,-2467,20027,25510,8475,-7012,21493,-2275,29271,-7103,-6001,477,-7570,4101,-9471,30186,14291,-1572,-128,-5869,32362,-6455,27533,22698,12551,18100,-2757,-1847,-9073,25545,4202,24074,19319,-8644,30062,20712,-9096,19141,-4970,-3575,14090,3199,-263,1715,-7631,-5022,-8584,11402,-6898,21034,20525,-43,26258,15846,16958,-1077,23228,-1682,-25,-9403,-3365,-4501,3103,7146,-8326,-646,-5428,-4495,-4537,5103,20338,22937,-7019,-2176,27065,23946,-154,-1433,-402,-4745,-2468,-9608,-3210,7553,-3828,24232,-2733,-1846,-8700,-7814,11894,-4061,-1211,-8962,-2893,-6144,-9614,-8548,18251,3012,-1018,30019,-3053,-1219,16385,-7664,9491,-6370,22805,-3594,-2651,-5181,-3481,-1722,12370,5325,29176,14651,31449,-3747,5378,30334,23951,1913,-1519,-5422,1949,9457,24647,16255,21189,19381,-3139,11583,-4880,-8123,-9741,12944,-7352,-2069,-963,-8385,8919,-8921,-6727,-6710,18078,17969,1910,-8,6380,17602,16116,-8130,-977,-4933,8523,9442,31357,25917,31526,18946,7093,-190,-10,-2764,12822,27110,-9487,-7573,-955,27199,20380,-4970,26493,-6051,14295,19839,-715,28819,24362,7781,-5677,-7370,-3103,32380,18437,29477,16248,-4056,-7963,-1021,-26,10161,26602,-7272,-6805,7068,12189,21005,-7891,3243,-1696,17523,23266,25002,9517,-9122,15591,-1478,-5594,-6414,14884,738,3843,18599,31645,-9785,4716,5322,7236,-5984,-786,-1330,247,-8334,-4986,-5600,28118,-3568,29136,31868,-3453,17992,-2865,-5992,6402,24687,-4431,-1829,28660,29965,746,14133,32058,12468,3622,-7611,652,31758
};