#include <cstdint>

#include "tensorflow/lite/micro/integration_tests/seanet/conv/conv3_golden_int16_test_data.h"

const unsigned int g_conv3_golden_int16_test_data_size = 2560;
alignas(16) const int16_t g_conv3_golden_int16_test_data[] = {-11180,22293,-13887,-9170,-32440,22824,32767,32767,-19511,-32768,-7639,6073,22763,7767,-30980,-32768,32767,32767,27983,24621,-26243,9550,-31293,-32768,18645,-32768,32767,32767,-1729,-18449,-32768,-32768,32767,16594,-32768,-11727,30743,23,-2021,-4865,32767,27698,32767,-32768,14162,2514,32767,32767,6153,32767,32767,32767,23153,-32768,13118,13176,-32768,-13151,32767,-30079,32767,-6897,31620,32767,32767,-5519,32767,2621,9473,32767,-782,20221,5151,32767,32767,-32768,18593,-1696,28742,32767,-2903,-32768,-26786,20671,-2161,-20219,32767,27306,28839,15717,32767,-32768,-4691,-19718,-13519,-29602,18611,32767,-32768,11961,-19292,18823,-32768,8985,-32768,32767,3024,32767,14572,17392,30933,2412,-32768,32767,-32768,-32768,-21420,-16780,-32768,25926,-32768,-32768,32767,-19004,16707,-32768,32767,-3592,32767,32767,-19023,32767,30481,25582,10676,-29418,32767,-7621,-3271,13458,-15777,1540,1203,-27116,32767,-1305,32767,32767,1961,32767,-18123,-16531,32767,-32768,32767,16889,18830,32767,-4572,32767,-32768,5441,-21162,-32768,-132,-32768,-10955,-7798,32767,-32768,-32768,-32768,-32768,-21697,-3309,18827,-32768,-32768,-10390,-9068,-5104,32646,28058,32767,32767,16276,-32768,-32768,1390,-5530,-32768,-32768,32767,32767,32767,-32768,-16675,28264,-32768,13492,32767,-32768,-32768,22037,-24532,32767,32767,-32768,8504,-32768,15606,14545,32767,5167,-11798,32227,32767,32767,32767,-32768,-13119,32767,9239,11628,-29905,-32768,-30394,16067,-3975,13238,32767,29880,18075,-32768,32767,30999,10697,-28838,-32768,-32768,32767,32767,12619,20620,-693,32767,-31010,8984,19493,32767,-32768,25077,23494,-2164,-26437,5648,32767,32767,-2755,32767,15237,9014,-32768,32767,-32768,30392,32767,-29559,4050,32767,19506,32767,-32768,-3665,-32768,-7849,-16003,32767,-8508,10111,-32768,-32768,-32768,27480,15079,-27514,-16669,-1225,-5366,-32768,-9760,1205,-32768,-32768,-27781,-32768,-32768,-32768,-20342,-32768,-32768,-32768,12563,-32768,-32768,32767,-32768,7624,-17898,20769,-7491,-32768,-32768,-32768,32767,32767,-32768,-32768,-14201,32767,-25572,32767,32767,12888,-32768,-32768,9268,-26455,-32768,-547,30605,-20926,-32386,-3482,-32768,-25939,-32768,-2167,19124,-18790,3081,32767,25723,7181,-32768,-25036,-32768,-3300,-11461,31145,-21953,-15517,12160,4187,-8128,-22843,6769,-4632,-32768,-32768,-32768,-32768,-32768,-32768,-2301,8010,-6897,-4730,-32768,27045,23461,2117,-18590,-22754,-32768,9894,-32768,-32768,-32768,32767,32767,1375,-18794,-32709,32767,-32768,21440,4316,22431,-32768,-31278,-32768,32767,32767,32767,3761,-15888,32767,-32768,32767,-32768,-5246,-32768,-3514,-22631,5556,-7935,13178,32767,24778,-23657,29733,-13547,-8469,-1160,32767,32767,-14831,-32768,-9048,25924,15011,12042,10918,-14987,-32768,32767,32767,-26996,-32768,-30374,7761,4173,32767,12944,7819,-32255,32767,-27481,15931,-32768,-32768,-32768,30836,-12865,-32768,-19978,32767,-32768,19367,32767,-30524,-9801,-32768,-14393,-32768,-32768,-19372,7138,-32768,-21804,26403,-28202,-32768,-32768,-32768,-32768,1980,7044,25656,-12879,-2086,32767,32767,18033,22692,26365,32767,-32768,-32768,19127,-32768,-32768,-31329,-5391,2770,-32768,32767,-32768,32767,-32768,-32768,-6799,9206,-32768,7146,12483,32228,32767,14859,29775,32767,21643,32767,-32768,12084,24085,-32768,32767,17800,32767,-18489,-10459,32767,-32768,-4911,1578,15567,-32768,-16728,7225,-32768,-32768,-9905,-3797,-14098,32767,295,32767,-8850,32767,32767,-32768,13462,-16754,7394,-486,2020,32767,-24960,-8506,4960,7866,-32768,-32768,32767,32767,11597,-13283,-463,-32768,8971,-32768,-27209,23981,-11620,7386,-4092,13505,-32768,7897,32767,-32768,-1610,-2829,32767,-32768,-21247,-32768,-32768,-32768,-32768,-23903,25060,-22285,16880,32767,24368,32767,17407,6973,12624,-16051,31344,-32768,32767,-20957,5486,-11631,20082,-27978,-32768,32767,32767,-848,2446,-12050,-17416,32767,-24988,-32768,-32768,-32768,-32768,9038,-8714,-26632,31710,32767,32767,32767,3292,32767,32767,-27234,1524,32767,32767,32767,4171,19992,18683,-32768,32767,-32768,-32768,32767,-2310,887,19910,6918,32767,32767,-12449,-32768,8677,32767,-1429,-32768,-32768,32767,-32768,14229,-12016,25881,-9409,-32768,-5487,32767,-32768,-32768,-32768,1946,9754,12080,32767,-32768,32767,32767,22684,32767,7271,2647,32767,32767,-17512,32767,-8861,-10541,9622,32767,-32768,-32768,-32768,19955,32767,6997,32767,5874,24210,3804,32767,32767,11102,32767,31942,32767,5142,-32768,-24077,32767,32767,32767,-6151,-32768,32767,32767,16199,32767,32767,-4618,-16593,32767,-32768,32767,29945,-20329,25049,3630,-6283,-23022,-11713,-32135,-32768,32767,-25196,10869,-14581,32767,32767,32767,5726,32767,20824,21436,30013,14948,9742,32767,-10099,32767,32767,5246,28248,18316,32767,6393,-32768,14729,25947,26488,-14484,-22748,-4673,32767,-32768,-4614,-22352,5344,28555,-4311,32767,-32768,32767,32767,-1345,-10236,32767,32767,5602,-32768,32767,32767,32767,25549,-21852,14099,32767,32767,-18528,32767,14642,23585,632,27853,21262,17134,32767,-5259,-13247,6592,18065,3437,32767,32767,32767,32767,-14277,17220,-2007,19874,-32768,-11208,-25137,32767,32767,-8058,1550,32767,27739,20547,-32768,19446,16085,-20470,3720,-27670,32767,-5248,-9916,-32768,32767,-7378,3688,-20997,32767,32767,32767,8462,-32768,-9183,25767,881,8933,-32768,4919,17040,-32768,7380,-2437,-277,-32768,30605,32767,-32768,8533,-1452,-22991,7092,-2638,12531,-11782,32767,32767,25502,1590,26944,32767,-18148,2890,32767,25607,17723,14936,5970,4134,32767,32767,-32768,-32768,-3161,32767,-12576,-32768,32767,-32768,-22996,27469,22349,32767,-17131,-23979,32767,27209,14963,29367,32767,20528,-6878,-32768,32767,32767,32767,-7452,7588,6415,-1960,19785,32767,-32768,-32768,-32768,15799,1773,-1404,4514,32767,32767,32767,-26860,15283,32767,-19240,1365,-32768,-12948,32767,32767,20648,12171,8048,14869,-32768,-32768,32767,-28755,11618,-32768,8278,-13745,-32768,-32768,5883,32265,-19828,8976,32767,-32768,-32768,-22584,-32768,-26829,-23337,32767,-32768,15471,-32768,-11163,-32768,32767,-28393,-14740,10604,-32768,-32768,-32768,27056,9666,-3402,-32768,-24890,-10858,-32768,-32768,-32768,-32768,-32768,-21047,-32768,-32768,-27328,32767,-32768,5692,-1640,-18434,-22093,15447,-32768,-32768,32767,9164,10706,5,-32768,32767,-32768,4160,17828,7010,-32768,-32768,32767,-19321,-32768,-32768,32767,18656,5649,-16651,23841,-31270,32767,-32768,-6144,15247,-32768,-32768,-16438,-16682,-32768,-16909,-10433,32767,4261,22214,-32768,-32768,-32768,-32768,-32768,3798,-32768,-32768,-12839,32767,31590,32767,32767,21728,-9432,-6193,22519,-32768,32767,9869,-26191,-23199,21658,32767,1686,-24764,31882,8766,-32768,9030,4476,-17866,484,-32768,19315,-4300,32767,-32768,-10877,31641,-14540,32767,-32768,-2299,21531,32767,-32768,10897,-16027,-32768,4388,31868,20393,-32768,17720,8269,32767,-6637,26869,-10357,-24349,3228,1456,-645,32767,32767,19865,-19056,32767,-9187,-12021,12832,3855,32767,-27774,-32768,-5149,-32768,-16238,-1100,26367,-18386,-27153,-32768,32767,32767,4691,3313,32767,-8367,22246,-32768,32767,32767,22271,4990,32767,-18732,-17500,-11250,9808,31075,8491,-32768,27540,-27845,32767,-32768,32767,32767,-1101,-30697,32767,32767,32767,32767,-32768,19016,-18750,32767,-24867,-32768,10817,32767,32767,32767,10292,32767,12182,32767,6173,-32768,6821,7848,-27817,-3547,29214,32767,26542,32767,19662,16932,-21387,459,-23166,-32768,32767,2884,-32768,-28760,6598,-29658,-32768,23359,-32768,-32768,25106,-24600,-10363,-27360,32767,17413,-32768,-3843,-32768,18023,6306,-18327,-7942,-32768,-32768,16926,-6930,-15625,-10945,2865,-32768,-32768,-32768,-32768,-32768,9808,-32768,25378,-1584,32767,32767,3948,-16910,9832,-16350,-20422,-30984,29350,32767,-32768,32767,15743,21433,14525,-9729,-26276,-32768,32767,-4517,-11344,2426,-17422,-32768,32767,32767,-32768,-32768,6692,17545,23429,32767,32767,32767,-32768,32767,-26429,-9846,18285,10608,-2016,32767,-3834,-32768,-4220,-23877,32767,10186,11270,32767,-32768,478,32767,32767,-642,24599,32767,10713,32767,32767,32420,-3656,32767,20634,25621,-3473,32767,17365,32767,3540,30792,-18268,32767,-19005,32767,-21136,-30434,12203,-32768,9944,32767,-32768,32767,32767,32767,5903,-2792,32767,32767,32767,32767,32767,6461,8811,23033,-17407,-32768,32767,14548,32767,32767,1856,16798,-32631,8343,-32768,32767,-14376,11325,27198,32767,32767,-16019,32767,32767,-10814,2501,21218,14948,24517,32767,32767,20899,15638,-6298,24804,-2274,-23189,9189,32767,-32768,-32768,12736,14946,32767,32767,32767,32767,-32768,-13881,-11332,15280,28870,-6344,-16308,-32768,32104,-32768,32767,9825,32767,-32768,32767,-32768,-8613,32767,-23325,-7773,-25208,434,-547,32767,-3741,-32768,-12979,32767,-408,-14497,-32768,32767,11885,32767,-26245,32767,32767,-32768,18577,32767,-9857,32767,32767,1022,-22927,25974,-4154,-32768,-32768,-32768,5896,-8831,11703,16558,-32768,32767,-5335,32767,-32768,-16426,32767,-14174,-3663,-32768,32767,-2528,28690,32767,-3924,-32768,942,32767,21526,32767,-32768,28119,27261,-32190,32767,17928,32767,32767,4581,1373,32767,27807,6772,8852,32767,32767,32767,31328,32767,32767,30208,-13685,-19038,-32768,11068,-12621,-3950,14093,6488,32767,32767,7922,32767,7086,-29876,32767,32767,-32768,-28344,-18032,10344,13460,-18201,4911,-14827,24153,-4790,-9036,-32768,-32768,-9988,2340,-2033,-6475,17836,22087,779,20452,-32768,-32768,-5402,16642,-32768,28262,2941,-18270,-1642,-26239,-29022,-32768,25673,27674,32767,-3050,30763,-32768,-32768,-12023,-32768,32767,-8489,32767,32767,32767,32767,32767,13203,32767,15174,-22473,-32768,22386,-32768,32767,-12451,-32768,-32768,29570,28409,-26775,32767,32767,32767,-32768,-20372,32767,22037,8036,-23122,32767,32767,-32768,32390,-13706,12389,-32768,32767,32767,-32768,32767,15328,6828,-8192,-32768,21915,-32768,-32768,-30666,-32768,14077,17477,-32768,32767,-32768,8851,-32768,13399,-8225,32767,2598,-11159,-32768,-215,27783,32767,-8848,32767,-9034,-32768,-32768,-32768,-32768,3293,-22459,-32768,-32768,-32768,-32768,23640,-25192,-19464,-23719,-29265,32767,-32768,9377,18352,-32768,-4982,-15972,-32768,26973,32767,-32768,-32768,-32768,-32768,-27592,-32541,32767,-32768,32767,32767,24475,-16600,-3155,14737,-10370,-14651,-32768,-32768,-32768,-13866,21862,-16247,25900,-32768,-32768,32767,18104,32767,-14946,-4546,-32768,11854,32767,-32768,32767,-14718,32767,7242,-30794,32767,-32768,27815,-14757,26058,-32768,16389,-19730,-32768,32767,32767,27826,-32768,14437,9506,-29502,-22681,-14328,10601,32767,28841,-32768,-6720,-32768,2756,-32768,-32768,32767,-32768,8086,13716,3111,-13481,32767,-32768,-32768,-30710,-10677,8213,-5020,-32768,-32768,12193,32767,32767,8932,-29118,-32768,22751,30079,15980,32767,-2114,-17378,28827,26489,8828,-32768,32767,-32768,32767,11775,11252,-21571,32767,-32768,32767,-32768,-12633,-17818,32767,-6619,-4958,-32768,32767,-32768,32767,-32768,-32768,16734,-27609,32767,7316,32767,-5149,15797,-11624,-11181,-32768,32767,-32768,15919,-29897,-2140,-32768,-32768,-2436,32767,32767,-32768,-32768,10092,32767,-25970,-17187,-32768,-32768,-32768,-32768,-4222,9575,-32768,-26377,32078,20903,32767,18119,-19358,-14549,19636,25720,1015,-32768,32767,-12538,-32768,32767,16794,32767,-32768,29282,27489,-8207,15047,2247,-12478,-23293,32767,-32768,-1403,1578,32767,32767,32767,7567,-32768,32767,32767,-10927,-22736,-32768,7764,7136,-32768,-32768,-32768,16314,-9223,-4146,-32768,16983,32767,-21131,-32768,692,31296,-32768,21311,-23723,32767,32767,32767,-32768,13301,-8550,32767,17527,2581,32767,-14849,23406,-8107,32767,-11180,32767,-32768,-32768,4187,-32768,-23516,-22080,32767,32767,25115,32767,32767,32767,-3230,9579,-8181,-32768,23480,-10240,32767,11195,18652,10616,-32768,-32768,7711,-32768,12673,-24117,19939,20233,-22832,-32768,32767,-11841,-21634,32767,5869,6353,2254,32767,-32768,-28592,32767,4968,-2048,-32768,-7260,-9046,32767,21566,32767,-25276,-14061,-14126,-32135,32767,-32768,10764,32767,17504,32484,-32768,3893,-22162,32767,12514,32767,-32768,32767,-4131,32767,32767,32767,32767,9147,32767,-11046,32767,32767,-12874,32767,32767,10215,-528,819,24509,32767,3508,567,32767,32767,-249,6238,32767,-24806,6183,32767,28710,32767,32767,-14577,32767,32767,32767,-32768,20553,-32768,32767,22168,32767,32767,-29015,-11753,32767,-32768,32767,32767,12669,32767,32767,32767,-22246,28849,32767,28857,-32768,-32768,24555,22507,15908,32767,-4985,-902,-10837,32767,32767,32767,-10174,-27045,12669,-2060,5754,-32768,5941,32767,-16071,21097,32767,2294,-11278,32767,32767,-32768,8256,-27285,-13519,-32768,-32768,15825,-32768,-32768,-32768,-32768,32767,-30672,-32768,-32768,10758,288,27808,-32768,-26274,23760,-4006,-32768,-32768,-32768,-20959,31504,18799,-17469,-22135,25633,-612,-32768,-21707,-32768,32767,-32768,-32768,32767,-13109,-32768,-22891,-32768,-32768,-32768,-1460,1366,-32768,-32768,-32768,24429,18331,12979,-25562,-23168,-32768,-21649,-32768,32767,32767,24631,-17501,-9982,-32768,-32768,-32768,3668,16992,3401,12852,-3945,14058,-32768,91,32767,32767,-2672,-6476,32767,-32768,31908,1187,23668,14149,-26330,-8802,-24229,-16117,-15516,32767,-32768,-32768,-23546,-1571,-8060,-32768,-8627,-4727,32767,-2723,-310,15783,32767,32767,-21280,32767,-16904,-32768,-5687,32767,32767,-32768,-32768,32767,17039,-2310,1130,-17427,14156,840,-32768,-32768,32767,-32768,385,-17051,32767,32767,16794,32767,32767,3207,-16751,18736,-260,-32768,19855,-32768,32767,10457,32767,13014,32767,32767,-32768,32767,19270,19537,-16311,32767,-8517,-6747,-32768,32767,32767,-26298,24594,21931,-10077,-14593,-32768,32767,32767,988,-20298,32767,-6139,-2089,-32768,32767,32767,-24010,30387,32767,32767,32767,32767,32767,15648,32767,30483,-23334,7793,-16703,5447,32767,-18971,-19921,28836,32767,-1319,32767,32767,18007,-32768,29950,30576,13957,32767,-27603,32767,32767,-32768,-32768,-2961,-1362,23277,-32768,32767,436,32767,32767,6738,27319,32767,-12287,32767,-23005,32767,32767,-24215,29430,-32768,3590,-32768,-14420,14350,32767,-6060,23099,-13628,-20444,-18884,-32768,32767,-32768,32767,25923,923,-32768,-14283,-32668,-21869,-13354,-32768,-4388,2417,-16043,-32768,-32768,-32768,32767,16992,-32768,11862,-32768,32767,-32768,-32768,-19831,-7098,-9130,9496,-32768,-32768,-6394,32767,-18574,-15984,-29595,-8130,-32768,-32768,-32768,29694,8071,-11715,-32768,27563,-32768,-5793,-32768,-32768,-29583,-32574,-11664,-32768,-32768,13723,4241,-32768,-16442,-6490,-32768,24873,6540,32767,-32768,32767,-32768,-18345,917,4043,-1432,-5115,32767,17684,-3291,-9555,16706,-31395,25523,-32768,-32768,-32768,-32768,6102,-8363,-32768,-20774,-32768,-32742,-32768,-32768,3335,7760,10038,32537,-9353,-32768,-30174,24402,7019,4891,32767,32767,6982,-32768,32767,-15883,25263,-27701,-10132,-32768,32767,32767,-16013,-22675,-15476,13296,-32768,-32768,-3259,32767,7490,9210,-32768,8914,-6317,13418,32767,-32768,32767,-21128,32767,-4226,3088,1932,18674,-7673,32767,25963,9565,-12227,-20225,-29334,11527,-25069,-32768,-32768,16561,18193,-24631,8439,15616,-32768,-21406,22990,-27182,-23913,8660,-24976,32767,445,6191,-19495,-27266,-18517,-32768,32767,-32768,-32768,-32768,-13819,239,-31378,24007,-9959,-32768,-32768,32767,-22349,-32768,-30582,-32768,-32768,-32768,32767,-24412,-8323,4367,6686,-12326,23834,-32768,-32768,-1200,-32768,-3333,-25030,32767,-32768,-32768,-8271,25406,-1060,-32768,20358,-26239,-11225,-7597,32767,-32768,19629,19283,-1258,13716,-32768,-25923,32767,32767,-9033,10996,-9300,1521,182,-3762,7614,12608,32767,-6677,-6374,-6771,-32768,32767,-32768,32767,-22537,-19397,1260,-24359,-32768,32767,-32768,32767,5739,-24134,-4248,25489,32767,-32192,-32768,-32768,-32768,32767,-32768,25183,-8540,32767,21659,32767,-32768,-32768,32767,-32768,-15676,32767,-30110,-32768,-25282,-15089,-32768,30082,13598,-32768,-32768,-31845,-7628,7122,-18874,12072,-32768,-32768,17932,2823,-7047,1116,32767,-18829,13946,-16766,-23421,-32768,32767,-7270,-25958,-32768,-32768,13709,-3804,32767,-8735,-16056,-32768,8892,-2510,-17136,27923,-32768,-32768,-22234,-32768,14486,32767,-25625,16011,25529,8449,32767,-19640,-18879,-6295,13601,-32768,-32768,32767,25333,-3431,26523,-32768,-32768,-32768,-32768,8644,13298,32767,32767,-26466,-32768,32767,32767,25044,20021,-16061,32767,-2819,32767,32767,32767,24712,-15811,32767,-32768,32767,32767,-32768,-11545,7228,10057,20425,15735,32767,32767,-32768,-12046,10607,-11132,14388,26278,-3807,32767,7560,-32768,-14098,32767,31191,-26180,-25532
};
