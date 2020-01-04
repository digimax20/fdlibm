/* These values are accurate to 52+12 bits when represented as
   a double.  */
static const double exp2_accuratetable[512] = {
0.707106781187802013759 /* 0x0.b504f333fb3f80007 */,
0.708064712808760599040 /* 0x0.b543baa0f71b38000 */,
0.709023942160304065938 /* 0x0.b58297d3a8d518002 */,
0.709984470998547667624 /* 0x0.b5c18ad39b4ba0001 */,
0.710946301084324217006 /* 0x0.b60093a85e8d30001 */,
0.711909434180505784637 /* 0x0.b63fb25984e628005 */,
0.712873872052760648733 /* 0x0.b67ee6eea3b5f8003 */,
0.713839616467838999908 /* 0x0.b6be316f518c98001 */,
0.714806669195984345523 /* 0x0.b6fd91e328d148007 */,
0.715775032009894562898 /* 0x0.b73d0851c69e20002 */,
0.716744706683768884058 /* 0x0.b77c94c2c9b3d0003 */,
0.717715694995770148178 /* 0x0.b7bc373dd52eb0003 */,
0.718687998724665488852 /* 0x0.b7fbefca8cd530004 */,
0.719661619652575468291 /* 0x0.b83bbe70981da8001 */,
0.720636559564428180758 /* 0x0.b87ba337a194b0006 */,
0.721612820246623098989 /* 0x0.b8bb9e27556508004 */,
0.722590403488338473025 /* 0x0.b8fbaf4762c798006 */,
0.723569311081411870036 /* 0x0.b93bd69f7be1d0000 */,
0.724549544820974333906 /* 0x0.b97c1437567828007 */,
0.725531106502312561633 /* 0x0.b9bc6816a87ae8002 */,
0.726513997924421062181 /* 0x0.b9fcd2452bee00000 */,
0.727498220889519875430 /* 0x0.ba3d52ca9e6148002 */,
0.728483777200401694265 /* 0x0.ba7de9aebe05c8003 */,
0.729470668664712662563 /* 0x0.babe96f94e62a8002 */,
0.730458897090379144517 /* 0x0.baff5ab2134df0004 */,
0.731448464287988597833 /* 0x0.bb4034e0d38ab0000 */,
0.732439372072965166897 /* 0x0.bb81258d5b2d60001 */,
0.733431622260458326859 /* 0x0.bbc22cbf75fd28001 */,
0.734425216668725511232 /* 0x0.bc034a7ef32c00001 */,
0.735420157118880535324 /* 0x0.bc447ed3a50fe0005 */,
0.736416445434497690674 /* 0x0.bc85c9c560b350001 */,
0.737414083433310718618 /* 0x0.bcc72b5bf4b4e0000 */,
0.738413072966152328496 /* 0x0.bd08a39f5417a8007 */,
0.739413415848264365956 /* 0x0.bd4a32974abcd0002 */,
0.740415113911250699637 /* 0x0.bd8bd84bb68300002 */,
0.741418168994518067562 /* 0x0.bdcd94c47ddd30003 */,
0.742422582936659858376 /* 0x0.be0f6809865968006 */,
0.743428357577745613238 /* 0x0.be515222b72530003 */,
0.744435494762383687126 /* 0x0.be935317fc6ba0002 */,
0.745443996335090397492 /* 0x0.bed56af1423de8001 */,
0.746453864145572798553 /* 0x0.bf1799b67a6248007 */,
0.747465100043933849969 /* 0x0.bf59df6f970e70002 */,
0.748477705883256683178 /* 0x0.bf9c3c248dbee8001 */,
0.749491683518965001732 /* 0x0.bfdeafdd568308000 */,
0.750507034813367890373 /* 0x0.c0213aa1f0fc38004 */,
0.751523761622240105153 /* 0x0.c063dc7a559ca0003 */,
0.752541865811731880422 /* 0x0.c0a6956e883ed8000 */,
0.753561349247157341600 /* 0x0.c0e965868bd220006 */,
0.754582213796583967110 /* 0x0.c12c4cca664cb8002 */,
0.755604461332336940791 /* 0x0.c16f4b42225350006 */,
0.756628093726406381068 /* 0x0.c1b260f5ca2c48002 */,
0.757653112855631305506 /* 0x0.c1f58ded6d72d8001 */,
0.758679520599333412360 /* 0x0.c238d2311e7d08001 */,
0.759707318837184453227 /* 0x0.c27c2dc8f00368005 */,
0.760736509456435783249 /* 0x0.c2bfa0bcfd1400000 */,
0.761767094336480043995 /* 0x0.c3032b155818d0000 */,
0.762799075372231349951 /* 0x0.c346ccda248cc0001 */,
0.763832454453522768941 /* 0x0.c38a8613805488005 */,
0.764867233473625618441 /* 0x0.c3ce56c98d1ca8005 */,
0.765903414329434539816 /* 0x0.c4123f04708d80002 */,
0.766940998920452976510 /* 0x0.c4563ecc532dc0001 */,
0.767979989148100838946 /* 0x0.c49a56295f9f88006 */,
0.769020386915772125040 /* 0x0.c4de8523c2b0a0001 */,
0.770062194131770905170 /* 0x0.c522cbc3ae94e0003 */,
0.771105412703856241146 /* 0x0.c5672a1154e6b8004 */,
0.772150044545352520777 /* 0x0.c5aba014ed5f18003 */,
0.773196091570364285606 /* 0x0.c5f02dd6b09288003 */,
0.774243555696622731700 /* 0x0.c634d35edb1260003 */,
0.775292438842697939641 /* 0x0.c67990b5aa5c18004 */,
0.776342742931542928455 /* 0x0.c6be65e360bed8000 */,
0.777394469888802008854 /* 0x0.c70352f0437f50004 */,
0.778447621641124243320 /* 0x0.c74857e498fd00006 */,
0.779502200118583399303 /* 0x0.c78d74c8ab5b60000 */,
0.780558207255445668515 /* 0x0.c7d2a9a4c959f8000 */,
0.781615644985491186966 /* 0x0.c817f681412f80002 */,
0.782674515247667956808 /* 0x0.c85d5b6666c150006 */,
0.783734819983036512536 /* 0x0.c8a2d85c904760003 */,
0.784796561133562109454 /* 0x0.c8e86d6c14f850002 */,
0.785859740645942328471 /* 0x0.c92e1a9d513ec8002 */,
0.786924360469767103536 /* 0x0.c973dff8a4b390007 */,
0.787990422552312885808 /* 0x0.c9b9bd866c6440007 */,
0.789057928854407064640 /* 0x0.c9ffb34f1444b0001 */,
0.790126881326406182996 /* 0x0.ca45c15afcc570001 */,
0.791197281930050233534 /* 0x0.ca8be7b292db38000 */,
0.792269132620954885659 /* 0x0.cad2265e3cbee8000 */,
0.793342435380726906957 /* 0x0.cb187d667d3d38006 */,
0.794417192158282659010 /* 0x0.cb5eecd3b33158006 */,
0.795493404931386649540 /* 0x0.cba574ae5d2e80001 */,
0.796571075671306805268 /* 0x0.cbec14fef2a348004 */,
0.797650206352955137846 /* 0x0.cc32cdcdef0000000 */,
0.798730798954342069432 /* 0x0.cc799f23d11d18000 */,
0.799812855456121796232 /* 0x0.ccc089091abb28004 */,
0.800896377841454287795 /* 0x0.cd078b86505c18003 */,
0.801981368096190028208 /* 0x0.cd4ea6a3f97720007 */,
0.803067828208752554378 /* 0x0.cd95da6aa057b8007 */,
0.804155760170129796375 /* 0x0.cddd26e2d21b28001 */,
0.805245165974338261710 /* 0x0.ce248c151f3330001 */,
0.806336047619038653883 /* 0x0.ce6c0a0a1c1350001 */,
0.807428407102107836855 /* 0x0.ceb3a0ca5d6be0006 */,
0.808522246427078927792 /* 0x0.cefb505e7e2550007 */,
0.809617567597010201484 /* 0x0.cf4318cf18a268002 */,
0.810714372621179513182 /* 0x0.cf8afa24ce1c98004 */,
0.811812663508675536069 /* 0x0.cfd2f4683f9810005 */,
0.812912442272482604912 /* 0x0.d01b07a2126188003 */,
0.814013710929394895825 /* 0x0.d06333daeff618001 */,
0.815116471495287542325 /* 0x0.d0ab791b80d028006 */,
0.816220725993571205593 /* 0x0.d0f3d76c75b330000 */,
0.817326476447408967199 /* 0x0.d13c4ed67f1cf8000 */,
0.818433724883006474832 /* 0x0.d184df6250e3b0001 */,
0.819542473330909460055 /* 0x0.d1cd8918a3a328004 */,
0.820652723822034690935 /* 0x0.d2164c02305fa0002 */,
0.821764478391968422618 /* 0x0.d25f2827b53fb0005 */,
0.822877739077315761840 /* 0x0.d2a81d91f188b8000 */,
0.823992507918612782109 /* 0x0.d2f12c49a8d290005 */,
0.825108786960634610365 /* 0x0.d33a5457a35e40003 */,
0.826226578247117093869 /* 0x0.d38395c4a84848007 */,
0.827345883828319528258 /* 0x0.d3ccf09985d958004 */,
0.828466705754248966560 /* 0x0.d41664df0a1320005 */,
0.829589046080638992111 /* 0x0.d45ff29e094330000 */,
0.830712906863802391671 /* 0x0.d4a999df585a20005 */,
0.831838290163696481037 /* 0x0.d4f35aabd04a60006 */,
0.832965198041969556729 /* 0x0.d53d350c4be258002 */,
0.834093632565442222342 /* 0x0.d5872909aba050007 */,
0.835223595802037643865 /* 0x0.d5d136acd138e8006 */,
0.836355089820669306292 /* 0x0.d61b5dfe9f7780004 */,
0.837488116698010487424 /* 0x0.d6659f0801afa8005 */,
0.838622678508982644113 /* 0x0.d6aff9d1e147d8004 */,
0.839758777333464490056 /* 0x0.d6fa6e652d19e0000 */,
0.840896415254110962690 /* 0x0.d744fccad70d00003 */,
0.842035594355151628676 /* 0x0.d78fa50bd2c3b0000 */,
0.843176316724478125433 /* 0x0.d7da673117e730007 */,
0.844318584453106590905 /* 0x0.d8254343a19038003 */,
0.845462399634695271912 /* 0x0.d870394c6dbf30003 */,
0.846607764365415071965 /* 0x0.d8bb49547d37c0004 */,
0.847754680744707056494 /* 0x0.d9067364d45608003 */,
0.848903150873708822763 /* 0x0.d951b7867953b0006 */,
0.850053176859071113491 /* 0x0.d99d15c2787a30006 */,
0.851204760807439786431 /* 0x0.d9e88e21de11a0003 */,
0.852357904828824897169 /* 0x0.da3420adba1508003 */,
0.853512611037803181642 /* 0x0.da7fcd6f2184d8005 */,
0.854668881550406100980 /* 0x0.dacb946f2afaf8000 */,
0.855826718478671755185 /* 0x0.db1775b6e8ad48000 */,
0.856986123964844970247 /* 0x0.db63714f8e0818006 */,
0.858147100114499461478 /* 0x0.dbaf87422625b8000 */,
0.859309649060962410524 /* 0x0.dbfbb797daa460002 */,
0.860473772936213743282 /* 0x0.dc480259d3a710001 */,
0.861639473872910177676 /* 0x0.dc9467913a0f48006 */,
0.862806754008130227807 /* 0x0.dce0e7473b9b28003 */,
0.863975615481124226159 /* 0x0.dd2d8185086c20006 */,
0.865146060433749419813 /* 0x0.dd7a3653d38168005 */,
0.866318091005120138881 /* 0x0.ddc705bcccd628000 */,
0.867491709362415264210 /* 0x0.de13efc9434100004 */,
0.868666917636779056818 /* 0x0.de60f4825df9b8005 */,
0.869843717989716047624 /* 0x0.deae13f16599c0003 */,
0.871022112578215268471 /* 0x0.defb4e1f9dc388002 */,
0.872202103559697183859 /* 0x0.df48a3164a92f0001 */,
0.873383693097737778847 /* 0x0.df9612deb6e878007 */,
0.874566883362160263365 /* 0x0.dfe39d82348310001 */,
0.875751676517234511901 /* 0x0.e031430a0f0688000 */,
0.876938074732511840819 /* 0x0.e07f037f97e548001 */,
0.878126080186539592654 /* 0x0.e0ccdeec2a75e0006 */,
0.879315695055312818168 /* 0x0.e11ad5591f4078001 */,
0.880506921518618312932 /* 0x0.e168e6cfd2f880004 */,
0.881699761760385225541 /* 0x0.e1b71359a6df60003 */,
0.882894217964411143207 /* 0x0.e2055afffc1178000 */,
0.884090292325693805080 /* 0x0.e253bdcc3ffbb8001 */,
0.885287987031581180559 /* 0x0.e2a23bc7d7a1d8002 */,
0.886487304278189114386 /* 0x0.e2f0d4fc31ab80004 */,
0.887688246263368285778 /* 0x0.e33f8972bea8a8005 */,
0.888890815189881999840 /* 0x0.e38e5934f49010007 */,
0.890095013257492739835 /* 0x0.e3dd444c460bd0007 */,
0.891300842677948068626 /* 0x0.e42c4ac232f380000 */,
0.892508305659222567226 /* 0x0.e47b6ca036f8b8005 */,
0.893717404414979710310 /* 0x0.e4caa9efd40e58002 */,
0.894928141160697743242 /* 0x0.e51a02ba8e2610007 */,
0.896140518115016826430 /* 0x0.e5697709ecab90000 */,
0.897354537501434679237 /* 0x0.e5b906e77c61d0006 */,
0.898570201543732793877 /* 0x0.e608b25cca5ba8005 */,
0.899787512470129891014 /* 0x0.e6587973688ce8002 */,
0.901006472512270728537 /* 0x0.e6a85c34ecadb8000 */,
0.902227083902570559127 /* 0x0.e6f85aaaed4f20006 */,
0.903449348881299796343 /* 0x0.e74874df09a530003 */,
0.904673269686823378091 /* 0x0.e798aadadecba0007 */,
0.905898848559668845585 /* 0x0.e7e8fca80c3ee0001 */,
0.907126087750156795426 /* 0x0.e8396a503c3fe0005 */,
0.908354989505901100354 /* 0x0.e889f3dd1615b0002 */,
0.909585556079328783087 /* 0x0.e8da9958465228007 */,
0.910817789726044213523 /* 0x0.e92b5acb7d0578001 */,
0.912051692703457872481 /* 0x0.e97c38406c3c30003 */,
0.913287267274154990210 /* 0x0.e9cd31c0cbb370001 */,
0.914524515702244578108 /* 0x0.ea1e475654d540000 */,
0.915763440256158633982 /* 0x0.ea6f790ac5cc78001 */,
0.917004043205012497909 /* 0x0.eac0c6e7dd8448007 */,
0.918246326823137892807 /* 0x0.eb1230f760a428007 */,
0.919490293387826285200 /* 0x0.eb63b7431714a8007 */,
0.920735945178816406225 /* 0x0.ebb559d4cb6f30007 */,
0.921983284479243714322 /* 0x0.ec0718b64c0940002 */,
0.923232313574974705626 /* 0x0.ec58f3f16a3910002 */,
0.924483034755387955725 /* 0x0.ecaaeb8ffb3168005 */,
0.925735450311948926408 /* 0x0.ecfcff9bd67078000 */,
0.926989562542820610982 /* 0x0.ed4f301edad1a0007 */,
0.928245373740515189457 /* 0x0.eda17d22e0f9b0001 */,
0.929502886213858126045 /* 0x0.edf3e6b1d37d40001 */,
0.930762102264245716494 /* 0x0.ee466cd594c5c8005 */,
0.932023024199046146183 /* 0x0.ee990f980dcdb0005 */,
0.933285654329454095216 /* 0x0.eeebcf032bc470007 */,
0.934549994971191289044 /* 0x0.ef3eab20e0d3c0001 */,
0.935816048439005676599 /* 0x0.ef91a3fb1e1340004 */,
0.937083817055075818404 /* 0x0.efe4b99bdcc618006 */,
0.938353303143720007819 /* 0x0.f037ec0d1889b8000 */,
0.939624509028518128972 /* 0x0.f08b3b58cc2bb8006 */,
0.940897437041863904384 /* 0x0.f0dea788fc2a90000 */,
0.942172089516254085427 /* 0x0.f13230a7ad21b8003 */,
0.943448468787511540534 /* 0x0.f185d6bee754e0006 */,
0.944726577195256100890 /* 0x0.f1d999d8b73478005 */,
0.946006417082291717338 /* 0x0.f22d79ff2cb130000 */,
0.947287990793413858827 /* 0x0.f281773c59ec48007 */,
0.948571300678290207925 /* 0x0.f2d5919a566268001 */,
0.949856349088629370320 /* 0x0.f329c9233bceb0001 */,
0.951143138379053731954 /* 0x0.f37e1de1272068002 */,
0.952431670908847949364 /* 0x0.f3d28fde3a6728006 */,
0.953721949039916472305 /* 0x0.f4271f249a93f0001 */,
0.955013975135367898520 /* 0x0.f47bcbbe6deab0001 */,
0.956307751564417496418 /* 0x0.f4d095b5e16638004 */,
0.957603280698967163097 /* 0x0.f5257d1524f590006 */,
0.958900564911197350604 /* 0x0.f57a81e668d628000 */,
0.960199606581278120057 /* 0x0.f5cfa433e60e50007 */,
0.961500408088936442422 /* 0x0.f624e407d527a0007 */,
0.962802971817578789903 /* 0x0.f67a416c72b760006 */,
0.964107300155846558292 /* 0x0.f6cfbc6c011458004 */,
0.965413395493874504368 /* 0x0.f7255510c439a8002 */,
0.966721260225105960572 /* 0x0.f77b0b6503c5b8006 */,
0.968030896745834645873 /* 0x0.f7d0df730a7940005 */,
0.969342307458006424716 /* 0x0.f826d145294be8003 */,
0.970655494764855020231 /* 0x0.f87ce0e5b29fd8000 */,
0.971970461071268720958 /* 0x0.f8d30e5efaa8f0004 */,
0.973287208789983648852 /* 0x0.f92959bb5e3c08001 */,
0.974605740331924708124 /* 0x0.f97fc305383028004 */,
0.975926058115625383329 /* 0x0.f9d64a46ebb9f8004 */,
0.977248164559556209435 /* 0x0.fa2cef8adbfc68004 */,
0.978572062087848637573 /* 0x0.fa83b2db7253d0007 */,
0.979897753126343307191 /* 0x0.fada944319fda0005 */,
0.981225240104636631254 /* 0x0.fb3193cc425870002 */,
0.982554525455618277276 /* 0x0.fb88b1815e61d0003 */,
0.983885611617111077747 /* 0x0.fbdfed6ce683e0007 */,
0.985218501026348891812 /* 0x0.fc3747995282f8006 */,
0.986553196127724962867 /* 0x0.fc8ec0112202a0005 */,
0.987889699367056062238 /* 0x0.fce656ded63710002 */,
0.989228013193998778636 /* 0x0.fd3e0c0cf48d50005 */,
0.990568140061241164686 /* 0x0.fd95dfa605c7b0003 */,
0.991910082424819927754 /* 0x0.fdedd1b4965710004 */,
0.993253842749249660216 /* 0x0.fe45e2433bfea0000 */,
0.994599423484053835071 /* 0x0.fe9e115c7c05f0005 */,
0.995946827107488830167 /* 0x0.fef65f0afb4c28006 */,
0.997296056085008264529 /* 0x0.ff4ecb59509cc8001 */,
0.998647112892057764479 /* 0x0.ffa756521dbfd0007 */,
1.000000000000000000000 /* 0x1.00000000000000000 */,
1.001354719891689004659 /* 0x1.0058c86da14aa0005 */,
1.002711275050312211844 /* 0x1.00b1afa5abead0003 */,
1.004069667960743483835 /* 0x1.010ab5b2cc0660009 */,
1.005429901112333324093 /* 0x1.0163da9fb2af30008 */,
1.006791976999887428009 /* 0x1.01bd1e7716f6a0008 */,
1.008155898118476168101 /* 0x1.02168143b03890006 */,
1.009521666967782227439 /* 0x1.027003103ae320002 */,
1.010889286051850133326 /* 0x1.02c9a3e7783030002 */,
1.012258757875921233497 /* 0x1.032363d42aaa8000e */,
1.013630084952214405194 /* 0x1.037d42e11c88d0000 */,
1.015003269791313389451 /* 0x1.03d741191635a0001 */,
1.016378314911229763267 /* 0x1.04315e86e84630008 */,
1.017755222831652872635 /* 0x1.048b9b35652800002 */,
1.019133996077934645224 /* 0x1.04e5f72f65827000b */,
1.020514637175266248212 /* 0x1.0540727fc1cfa0006 */,
1.021897148653734488385 /* 0x1.059b0d3157ebb0002 */,
1.023281533050062419584 /* 0x1.05f5c74f0cfeb0002 */,
1.024667792897328677539 /* 0x1.0650a0e3c22ee0003 */,
1.026055930738840826806 /* 0x1.06ab99fa63e1b0008 */,
1.027445949118511947550 /* 0x1.0706b29ddf2700009 */,
1.028837850584049418178 /* 0x1.0761ead9253ab0009 */,
1.030231637685799839262 /* 0x1.07bd42b72a3f80008 */,
1.031627312979383592802 /* 0x1.0818ba42e824a000c */,
1.033024879021186448496 /* 0x1.0874518759b0b0008 */,
1.034424338374263729911 /* 0x1.08d0088f80ffa0006 */,
1.035825693601787333992 /* 0x1.092bdf66604e30005 */,
1.037228947273990842283 /* 0x1.0987d617019cd000a */,
1.038634101961269928846 /* 0x1.09e3ecac6f199000f */,
1.040041160239590700707 /* 0x1.0a402331b91270002 */,
1.041450124688240164200 /* 0x1.0a9c79b1f37c3000b */,
1.042860997889083929381 /* 0x1.0af8f038352160000 */,
1.044273782427270314011 /* 0x1.0b5586cf986890006 */,
1.045688480893644856116 /* 0x1.0bb23d833dfbf0006 */,
1.047105095879385272564 /* 0x1.0c0f145e46e330007 */,
1.048523629981608529302 /* 0x1.0c6c0b6bdaadc000f */,
1.049944085800634585634 /* 0x1.0cc922b72470a000f */,
1.051366465939483019223 /* 0x1.0d265a4b5238b0007 */,
1.052790773004648849929 /* 0x1.0d83b23395e510002 */,
1.054217009607077093512 /* 0x1.0de12a7b263970006 */,
1.055645178360430591625 /* 0x1.0e3ec32d3cf680000 */,
1.057075281882416506511 /* 0x1.0e9c7c55184f5000e */,
1.058507322794714378170 /* 0x1.0efa55fdfad51000a */,
1.059941303721639416236 /* 0x1.0f58503329fed0003 */,
1.061377227289284297385 /* 0x1.0fb66affed37f0000 */,
1.062815096132297298980 /* 0x1.1014a66f95540000c */,
1.064254912884593951029 /* 0x1.1073028d725850007 */,
1.065696680185205469411 /* 0x1.10d17f64d9ea2000b */,
1.067140400676658718053 /* 0x1.11301d012586a0007 */,
1.068586077004890055886 /* 0x1.118edb6db26ab0003 */,
1.070033711820396415998 /* 0x1.11edbab5e2d6e000b */,
1.071483307775789262099 /* 0x1.124cbae51b5ef0001 */,
1.072934867526001312439 /* 0x1.12abdc06c3240000c */,
1.074388393734249103080 /* 0x1.130b1e264a62e0005 */,
1.075843889063253344684 /* 0x1.136a814f20ccd0003 */,
1.077301356179926061823 /* 0x1.13ca058cbaaed000b */,
1.078760797756675327056 /* 0x1.1429aaea9260e000e */,
1.080222216468626150775 /* 0x1.148971742537c0009 */,
1.081685614993597610617 /* 0x1.14e95934f37e8000b */,
1.083150996013011013776 /* 0x1.1549623881762000d */,
1.084618362213087383633 /* 0x1.15a98c8a58a6a000b */,
1.086087716284427351384 /* 0x1.1609d8360768c0008 */,
1.087559060917626885283 /* 0x1.166a45471c13f0008 */,
1.089032398810997337465 /* 0x1.16cad3c92d7b50009 */,
1.090507732647478578212 /* 0x1.172b83c7c18b5000f */,
1.091985065182095926460 /* 0x1.178c554ead72a000c */,
1.093464399073070136880 /* 0x1.17ed48695befe000c */,
1.094945737045367906172 /* 0x1.184e5d23812500007 */,
1.096429081816546080591 /* 0x1.18af9388c90e40005 */,
1.097914436104650892651 /* 0x1.1910eba4e031a0001 */,
1.099401802629782043408 /* 0x1.19726583755720003 */,
1.100891184121537858001 /* 0x1.19d4013041b860007 */,
1.102382583308144647940 /* 0x1.1a35beb6fd0cd0007 */,
1.103876002922312915544 /* 0x1.1a979e2363fa10000 */,
1.105371445702084232160 /* 0x1.1af99f8139025000e */,
1.106868914387219016199 /* 0x1.1b5bc2dc408b9000e */,
1.108368411723785085252 /* 0x1.1bbe084045eb30002 */,
1.109869940458469095340 /* 0x1.1c206fb91524c000e */,
1.111373503344554869449 /* 0x1.1c82f952817cc0001 */,
1.112879103137133007859 /* 0x1.1ce5a51860344000f */,
1.114386742595953938610 /* 0x1.1d4873168babf000e */,
1.115896424484008608911 /* 0x1.1dab6358e1d4a000f */,
1.117408151567338414664 /* 0x1.1e0e75eb43f9c000c */,
1.118921926613465345265 /* 0x1.1e71aad995078000f */,
1.120437752409564780022 /* 0x1.1ed5022fcd8600003 */,
1.121955631720569668277 /* 0x1.1f387bf9cd88b0000 */,
1.123475567332998359439 /* 0x1.1f9c18438cdec000a */,
1.124997562033035469759 /* 0x1.1fffd71902f970002 */,
1.126521618608448571713 /* 0x1.2063b88629079000e */,
1.128047739853580200284 /* 0x1.20c7bc96ff72a0002 */,
1.129575928566289189112 /* 0x1.212be3578a81e0006 */,
1.131106187546149888259 /* 0x1.21902cd3d05f70007 */,
1.132638519598779369743 /* 0x1.21f49917ddda5000c */,
1.134172927531616359481 /* 0x1.2259282fc1c24000e */,
1.135709414157753949251 /* 0x1.22bdda27911e90007 */,
1.137247982292643566662 /* 0x1.2322af0b638e60007 */,
1.138788634756517259562 /* 0x1.2387a6e755f270000 */,
1.140331374372893558110 /* 0x1.23ecc1c788c890006 */,
1.141876203969685699176 /* 0x1.2451ffb821639000c */,
1.143423126377846266197 /* 0x1.24b760c5486dc0009 */,
1.144972144431494420774 /* 0x1.251ce4fb2a0cc0005 */,
1.146523260971646252006 /* 0x1.25828c65f9fb8000d */,
1.148076478839068270690 /* 0x1.25e85711ebaeb0000 */,
1.149631800883562204903 /* 0x1.264e450b3c8a30008 */,
1.151189229953253789786 /* 0x1.26b4565e281a20003 */,
1.152748768902654319399 /* 0x1.271a8b16f0f000002 */,
1.154310420590433317050 /* 0x1.2780e341de2fc0001 */,
1.155874187878668246681 /* 0x1.27e75eeb3abc90007 */,
1.157440073633736243899 /* 0x1.284dfe1f5633e000a */,
1.159008080725518974322 /* 0x1.28b4c0ea840d90001 */,
1.160578212048386514965 /* 0x1.291ba75932ae60000 */,
1.162150470417516290340 /* 0x1.2982b177796850008 */,
1.163724858777502646494 /* 0x1.29e9df51fdd900001 */,
1.165301379991388053320 /* 0x1.2a5130f50bf34000e */,
1.166880036952526289469 /* 0x1.2ab8a66d10fdc0008 */,
1.168460832550151540268 /* 0x1.2b203fc675b7a000a */,
1.170043769683112966389 /* 0x1.2b87fd0dad7260008 */,
1.171628851252754177681 /* 0x1.2befde4f2e3da000d */,
1.173216080163546060084 /* 0x1.2c57e397719940002 */,
1.174805459325657830448 /* 0x1.2cc00cf2f7491000c */,
1.176396991650083379037 /* 0x1.2d285a6e3ff90000b */,
1.177990680055698513602 /* 0x1.2d90cc15d4ff90005 */,
1.179586527463262646306 /* 0x1.2df961f641c57000c */,
1.181184536796979545103 /* 0x1.2e621c1c157cd000d */,
1.182784710984701836994 /* 0x1.2ecafa93e35af0004 */,
1.184387052960675701386 /* 0x1.2f33fd6a459cb0000 */,
1.185991565661414393112 /* 0x1.2f9d24abd8fd1000e */,
1.187598252026902612178 /* 0x1.300670653e083000a */,
1.189207115003001469262 /* 0x1.306fe0a31bc040008 */,
1.190818157535919796833 /* 0x1.30d9757219895000e */,
1.192431382587621380206 /* 0x1.31432edef01a1000f */,
1.194046793097208292195 /* 0x1.31ad0cf63f0630008 */,
1.195664392040319823392 /* 0x1.32170fc4ce0db000c */,
1.197284182375793593084 /* 0x1.32813757527750005 */,
1.198906167074650808198 /* 0x1.32eb83ba8eef3000f */,
1.200530349107333139048 /* 0x1.3355f4fb457e5000d */,
1.202156731453099647353 /* 0x1.33c08b2641df9000c */,
1.203785317090505513368 /* 0x1.342b46484f07b0005 */,
1.205416109005122526928 /* 0x1.3496266e3fa270005 */,
1.207049110184904572310 /* 0x1.35012ba4e8fa10000 */,
1.208684323627194912036 /* 0x1.356c55f92aabb0004 */,
1.210321752322854882437 /* 0x1.35d7a577dd33f0004 */,
1.211961399276747286580 /* 0x1.36431a2de8748000d */,
1.213603267492579629347 /* 0x1.36aeb4283309e000c */,
1.215247359985374142610 /* 0x1.371a7373b00160000 */,
1.216893679753690671322 /* 0x1.3786581d404e90000 */,
1.218542229828181611183 /* 0x1.37f26231e82e4000c */,
1.220193013225231215567 /* 0x1.385e91be9c2d20002 */,
1.221846032973555429280 /* 0x1.38cae6d05e66f0000 */,
1.223501292099485437962 /* 0x1.393761742e5830001 */,
1.225158793636904830441 /* 0x1.39a401b713cb3000e */,
1.226818540625497444577 /* 0x1.3a10c7a61ceae0007 */,
1.228480536107136034131 /* 0x1.3a7db34e5a4a50003 */,
1.230144783126481566885 /* 0x1.3aeac4bcdf8d60001 */,
1.231811284734168454619 /* 0x1.3b57fbfec6e950008 */,
1.233480043984379381835 /* 0x1.3bc559212e7a2000f */,
1.235151063936380300149 /* 0x1.3c32dc3139f2a0004 */,
1.236824347652524913647 /* 0x1.3ca0853c106ac000e */,
1.238499898199571624970 /* 0x1.3d0e544eddd240003 */,
1.240177718649636107175 /* 0x1.3d7c4976d3fcd0000 */,
1.241857812073360767273 /* 0x1.3dea64c1231f70004 */,
1.243540181554270152039 /* 0x1.3e58a63b099920005 */,
1.245224830175077013244 /* 0x1.3ec70df1c4e46000e */,
1.246911761022835740725 /* 0x1.3f359bf29741c000e */,
1.248600977188942806639 /* 0x1.3fa4504ac7b800009 */,
1.250292481770148400634 /* 0x1.40132b07a330d000a */,
1.251986277866492969263 /* 0x1.40822c367a340000b */,
1.253682368581898742876 /* 0x1.40f153e4a18e0000d */,
1.255380757024939564249 /* 0x1.4160a21f73289000d */,
1.257081446308726757662 /* 0x1.41d016f44deaa000c */,
1.258784439550028944083 /* 0x1.423fb27094c090008 */,
1.260489739869405489991 /* 0x1.42af74a1aec1c0006 */,
1.262197350394008266193 /* 0x1.431f5d950a453000c */,
1.263907274252603851764 /* 0x1.438f6d58176860004 */,
1.265619514578811388761 /* 0x1.43ffa3f84b9eb000d */,
1.267334074511444086425 /* 0x1.44700183221180008 */,
1.269050957191869555296 /* 0x1.44e0860618b930006 */,
1.270770165768063009230 /* 0x1.4551318eb4d20000e */,
1.272491703389059036805 /* 0x1.45c2042a7cc26000b */,
1.274215573211836316547 /* 0x1.4632fde6ffacd000d */,
1.275941778396075143580 /* 0x1.46a41ed1cfac40001 */,
1.277670322103555911043 /* 0x1.471566f8812ac0000 */,
1.279401207505722393185 /* 0x1.4786d668b33260005 */,
1.281134437771823675369 /* 0x1.47f86d3002637000a */,
1.282870016078732078362 /* 0x1.486a2b5c13c00000e */,
1.284607945607987078432 /* 0x1.48dc10fa916bd0004 */,
1.286348229545787758022 /* 0x1.494e1e192aaa30007 */,
1.288090871080605159846 /* 0x1.49c052c5913df000c */,
1.289835873406902644341 /* 0x1.4a32af0d7d8090002 */,
1.291583239722392528754 /* 0x1.4aa532feab5e10002 */,
1.293332973229098792374 /* 0x1.4b17dea6db8010008 */,
1.295085077135345708087 /* 0x1.4b8ab213d57d9000d */,
1.296839554650994097442 /* 0x1.4bfdad53629e10003 */,
1.298596408992440220988 /* 0x1.4c70d0735358a000d */,
1.300355643380135983739 /* 0x1.4ce41b817c99e0001 */,
1.302117261036232376282 /* 0x1.4d578e8bb52cb0003 */,
1.303881265192249561154 /* 0x1.4dcb299fde2920008 */,
1.305647659079073541490 /* 0x1.4e3eeccbd7f4c0003 */,
1.307416445934474813521 /* 0x1.4eb2d81d8a86f000b */,
1.309187629001237640529 /* 0x1.4f26eba2e35a5000e */,
1.310961211525240921493 /* 0x1.4f9b2769d35090009 */,
1.312737196755087820678 /* 0x1.500f8b804e4a30000 */,
1.314515587949291131086 /* 0x1.508417f4530d00009 */,
1.316296388365203462468 /* 0x1.50f8ccd3df1840003 */,
1.318079601265708777911 /* 0x1.516daa2cf60020002 */,
1.319865229921343141607 /* 0x1.51e2b00da3c2b0007 */,
1.321653277603506371251 /* 0x1.5257de83f5512000d */,
1.323443747588034513690 /* 0x1.52cd359dfc7d5000e */,
1.325236643161341820781 /* 0x1.5342b569d6baa000f */,
1.327031967602244177939 /* 0x1.53b85df59921b0000 */,
1.328829724206201046165 /* 0x1.542e2f4f6b17e0006 */,
1.330629916266568235675 /* 0x1.54a4298571b27000e */,
1.332432547083447937938 /* 0x1.551a4ca5d97190009 */,
1.334237619959296017340 /* 0x1.559098bed16bf0008 */,
1.336045138203900251029 /* 0x1.56070dde90c800000 */,
1.337855105129210686631 /* 0x1.567dac13510cd0009 */,
1.339667524053662184301 /* 0x1.56f4736b52e2c000c */,
1.341482398296830025383 /* 0x1.576b63f4d8333000f */,
1.343299731186792467254 /* 0x1.57e27dbe2c40e0003 */,
1.345119526053918823702 /* 0x1.5859c0d59cd37000f */,
1.346941786233264881662 /* 0x1.58d12d497cd9a0005 */,
1.348766515064854010261 /* 0x1.5948c32824b87000c */,
1.350593715891792223641 /* 0x1.59c0827ff03890007 */,
1.352423392064920459908 /* 0x1.5a386b5f43a3e0006 */,
1.354255546937278120764 /* 0x1.5ab07dd485af1000c */,
1.356090183865519494030 /* 0x1.5b28b9ee21085000f */,
1.357927306213322804534 /* 0x1.5ba11fba8816e000b */,
1.359766917346459269620 /* 0x1.5c19af482f8f2000f */,
1.361609020638567812980 /* 0x1.5c9268a594cc00004 */,
1.363453619463660171403 /* 0x1.5d0b4be135916000c */,
1.365300717204201985683 /* 0x1.5d84590998eeb0005 */,
1.367150317245710233754 /* 0x1.5dfd902d494e40001 */,
1.369002422974674892971 /* 0x1.5e76f15ad22c40008 */,
1.370857037789471544224 /* 0x1.5ef07ca0cc166000b */,
1.372714165088220639199 /* 0x1.5f6a320dcf5280006 */,
1.374573808273481745378 /* 0x1.5fe411b0790800009 */,
1.376435970755022220096 /* 0x1.605e1b976e4b1000e */,
1.378300655944092456600 /* 0x1.60d84fd155d15000e */,
1.380167867259843417228 /* 0x1.6152ae6cdf0030003 */,
1.382037608124419003675 /* 0x1.61cd3778bc879000d */,
1.383909881963391264069 /* 0x1.6247eb03a4dc40009 */,
1.385784692209972801544 /* 0x1.62c2c91c56d9b0002 */,
1.387662042298923203992 /* 0x1.633dd1d1930ec0001 */,
1.389541935670444372533 /* 0x1.63b90532200630004 */,
1.391424375772021271329 /* 0x1.6434634ccc4cc0007 */,
1.393309366052102982208 /* 0x1.64afec30677e90008 */,
1.395196909966106124701 /* 0x1.652b9febc8e0f000d */,
1.397087010973788290271 /* 0x1.65a77e8dcc7f10004 */,
1.398979672539331309267 /* 0x1.66238825534170000 */,
1.400874898129892187656 /* 0x1.669fbcc1415600008 */,
1.402772691220124823310 /* 0x1.671c1c708328e000a */,
1.404673055288671035301 /* 0x1.6798a7420988b000d */,
1.406575993818903302975 /* 0x1.68155d44ca77a000f */,
1.408481510297352468121 /* 0x1.68923e87bf70e000a */,
1.410389608216942924956 /* 0x1.690f4b19e8f74000c */,
1.412300291075172076232 /* 0x1.698c830a4c94c0008 */
};
#define S (1.0/4503599627370496.0)  /* 2^-52 */
static const float exp2_deltatable[512] = {
  IC(11527)*S,  IC(-963)*S,   IC(884)*S,  IC(-781)*S, IC(-2363)*S, IC(-3441)*S,   IC(123)*S,   IC(526)*S,
     IC(-6)*S,  IC(1254)*S, IC(-1138)*S,  IC(1519)*S,  IC(1576)*S,   IC(-65)*S,  IC(1040)*S,   IC(793)*S,
  IC(-1662)*S, IC(-5063)*S,  IC(-387)*S,   IC(968)*S,  IC(-941)*S,   IC(984)*S, IC(-2856)*S,  IC(-545)*S,
    IC(495)*S, IC(-5246)*S, IC(-2109)*S,  IC(1281)*S,  IC(2075)*S,   IC(909)*S, IC(-1642)*S,IC(-78233)*S,
 IC(-31653)*S,  IC(-265)*S,   IC(130)*S,   IC(430)*S,  IC(2482)*S,  IC(-742)*S,  IC(1616)*S, IC(-2213)*S,
   IC(-519)*S,    IC(20)*S, IC(-3134)*S,IC(-13981)*S,  IC(1343)*S, IC(-1740)*S,   IC(247)*S,  IC(1679)*S,
  IC(-1097)*S,  IC(3131)*S,   IC(871)*S, IC(-1480)*S,  IC(1936)*S, IC(-1827)*S, IC(17325)*S,   IC(528)*S,
   IC(-322)*S,  IC(1404)*S,  IC(-152)*S, IC(-1845)*S,  IC(-212)*S,  IC(2639)*S,  IC(-476)*S,  IC(2960)*S,
   IC(-962)*S, IC(-1012)*S, IC(-1231)*S,  IC(3030)*S,  IC(1659)*S,  IC(-486)*S,  IC(2154)*S,  IC(1728)*S,
  IC(-2793)*S,   IC(699)*S, IC(-1560)*S, IC(-2125)*S,  IC(2156)*S,   IC(142)*S, IC(-1888)*S,  IC(4426)*S,
 IC(-13443)*S,  IC(1970)*S,   IC(-50)*S,  IC(1771)*S,IC(-43399)*S,  IC(4979)*S, IC(-2448)*S,  IC(-370)*S,
   IC(1414)*S,  IC(1075)*S,   IC(232)*S,   IC(206)*S,   IC(873)*S,  IC(2141)*S,  IC(2970)*S,  IC(1279)*S,
  IC(-2331)*S,   IC(336)*S, IC(-2595)*S,   IC(753)*S, IC(-3384)*S,  IC(-616)*S,    IC(89)*S,  IC(-818)*S,
   IC(5755)*S,  IC(-241)*S,  IC(-528)*S,  IC(-661)*S, IC(-3777)*S,  IC(-354)*S,   IC(250)*S,  IC(3881)*S,
   IC(2632)*S, IC(-2131)*S,  IC(2565)*S,  IC(-316)*S,  IC(1746)*S, IC(-2541)*S, IC(-1324)*S,   IC(-50)*S,
   IC(2564)*S,  IC(-782)*S,  IC(1176)*S,  IC(6452)*S, IC(-1002)*S,  IC(1288)*S,   IC(336)*S,  IC(-185)*S,
   IC(3063)*S,  IC(3784)*S,  IC(2169)*S,   IC(686)*S,   IC(328)*S,  IC(-400)*S,   IC(312)*S, IC(-4517)*S,
  IC(-1457)*S,  IC(1046)*S, IC(-1530)*S,  IC(-685)*S,  IC(1328)*S,IC(-49815)*S,  IC(-895)*S,  IC(1063)*S,
  IC(-2091)*S,  IC(-672)*S, IC(-1710)*S,  IC(-665)*S,  IC(1545)*S,  IC(1819)*S,IC(-45265)*S,  IC(3548)*S,
   IC(-554)*S,  IC(-568)*S,  IC(4752)*S, IC(-1907)*S,IC(-13738)*S,   IC(675)*S,  IC(9611)*S, IC(-1115)*S,
   IC(-815)*S,   IC(408)*S, IC(-1281)*S,  IC(-937)*S,IC(-16376)*S, IC(-4772)*S, IC(-1440)*S,   IC(992)*S,
    IC(788)*S, IC(10364)*S, IC(-1602)*S,  IC(-661)*S, IC(-1783)*S,  IC(-265)*S,   IC(-20)*S, IC(-3781)*S,
   IC(-861)*S,  IC(-345)*S,  IC(-994)*S,  IC(1364)*S, IC(-5339)*S,  IC(1620)*S,  IC(9390)*S, IC(-1066)*S,
   IC(-305)*S,  IC(-170)*S,   IC(175)*S,  IC(2461)*S,  IC(-490)*S,  IC(-769)*S, IC(-1450)*S,  IC(3315)*S,
   IC(2418)*S,   IC(-45)*S,  IC(-852)*S, IC(-1295)*S,  IC(-488)*S,   IC(-96)*S,  IC(1142)*S, IC(-2639)*S,
   IC(7905)*S, IC(-9306)*S, IC(-3859)*S,   IC(760)*S,  IC(1057)*S, IC(-1570)*S,  IC(3977)*S,   IC(209)*S,
   IC(-514)*S,  IC(7151)*S,  IC(1646)*S,   IC(627)*S,   IC(599)*S,  IC(-774)*S, IC(-1468)*S,   IC(633)*S,
   IC(-473)*S,   IC(851)*S,  IC(2406)*S,   IC(143)*S,    IC(74)*S,  IC(4260)*S,  IC(1177)*S,  IC(-913)*S,
   IC(2670)*S, IC(-3298)*S, IC(-1662)*S,  IC(-120)*S, IC(-3264)*S, IC(-2148)*S,   IC(410)*S,  IC(2078)*S,
  IC(-2098)*S,  IC(-926)*S,  IC(3580)*S, IC(-1289)*S,  IC(2450)*S, IC(-1158)*S,   IC(907)*S,  IC(-590)*S,
    IC(986)*S,  IC(1801)*S,  IC(1145)*S, IC(-1677)*S,  IC(3455)*S,   IC(956)*S,   IC(710)*S,   IC(144)*S,
    IC(153)*S,  IC(-255)*S, IC(-1898)*S, IC(28102)*S,  IC(2748)*S,  IC(1194)*S, IC(-3009)*S,  IC(7076)*S,
      IC(0)*S, IC(-2720)*S,   IC(711)*S,  IC(1225)*S, IC(-3034)*S,  IC(-473)*S,   IC(378)*S, IC(-1046)*S,
    IC(962)*S, IC(-2006)*S,  IC(4647)*S,  IC(3206)*S,  IC(1769)*S, IC(-2665)*S,  IC(1254)*S,  IC(2025)*S,
  IC(-2430)*S,  IC(6193)*S,  IC(1224)*S,  IC(-856)*S, IC(-1592)*S,  IC(-325)*S, IC(-1521)*S,  IC(1827)*S,
   IC(-264)*S,  IC(2403)*S, IC(-1065)*S,   IC(967)*S,  IC(-681)*S, IC(-2106)*S,  IC(-474)*S,  IC(1333)*S,
   IC(-893)*S,  IC(2296)*S,   IC(592)*S, IC(-1220)*S,  IC(-326)*S,   IC(990)*S,   IC(139)*S,   IC(206)*S,
   IC(-779)*S, IC(-1683)*S,  IC(1238)*S,  IC(6098)*S,   IC(136)*S,  IC(1197)*S,   IC(790)*S,  IC(-107)*S,
  IC(-1004)*S, IC(-2449)*S,   IC(939)*S,  IC(5568)*S,   IC(156)*S,  IC(1812)*S,  IC(2792)*S, IC(-1094)*S,
  IC(-2677)*S,  IC(-251)*S,  IC(2297)*S,   IC(943)*S, IC(-1329)*S,  IC(2883)*S,  IC(-853)*S, IC(-2626)*S,
 IC(-105929)*S, IC(-6552)*S,  IC(1095)*S, IC(-1508)*S,  IC(1003)*S,  IC(5039)*S, IC(-2600)*S,  IC(-749)*S,
   IC(1790)*S,   IC(890)*S,  IC(2016)*S, IC(-1073)*S,   IC(624)*S, IC(-2084)*S, IC(-1536)*S, IC(-1330)*S,
    IC(358)*S,  IC(2444)*S,  IC(-179)*S,IC(-25759)*S,  IC(-243)*S,  IC(-552)*S,  IC(-124)*S,  IC(3766)*S,
   IC(1192)*S, IC(-1614)*S,     IC(6)*S, IC(-1227)*S,   IC(345)*S,  IC(-981)*S,  IC(-295)*S, IC(-1006)*S,
   IC(-995)*S, IC(-1195)*S,   IC(706)*S,  IC(2512)*S, IC(-1758)*S,  IC(-734)*S, IC(-6286)*S,  IC(-922)*S,
   IC(1530)*S,  IC(1542)*S,  IC(1223)*S,    IC(61)*S,   IC(-83)*S,   IC(522)*S,IC(116937)*S,  IC(-914)*S,
   IC(-418)*S, IC(-7339)*S,   IC(249)*S,  IC(-520)*S,  IC(-762)*S,   IC(426)*S,  IC(-505)*S,  IC(2664)*S,
  IC(-1093)*S, IC(-1035)*S,  IC(2130)*S,  IC(4878)*S,  IC(1982)*S,  IC(1551)*S,  IC(2304)*S,   IC(193)*S,
   IC(1532)*S, IC(-7268)*S, IC(24357)*S,   IC(531)*S,  IC(2676)*S, IC(-1170)*S,  IC(1465)*S, IC(-1917)*S,
   IC(2143)*S,  IC(1466)*S,    IC(-7)*S, IC(-7300)*S,  IC(3297)*S, IC(-1197)*S,  IC(-289)*S, IC(-1548)*S,
  IC(26226)*S,  IC(4401)*S,  IC(4123)*S, IC(-1588)*S,  IC(4243)*S,  IC(4069)*S, IC(-1276)*S, IC(-2010)*S,
   IC(1407)*S,  IC(1478)*S,   IC(488)*S, IC(-2366)*S, IC(-2909)*S, IC(-2534)*S, IC(-1285)*S,  IC(7095)*S,
   IC(-645)*S, IC(-2089)*S,  IC(-944)*S,   IC(-40)*S, IC(-1363)*S,  IC(-833)*S,   IC(917)*S,  IC(1609)*S,
   IC(1286)*S,  IC(1677)*S,  IC(1613)*S, IC(-2295)*S, IC(-1248)*S,    IC(40)*S,    IC(26)*S,  IC(2038)*S,
    IC(698)*S,  IC(2675)*S, IC(-1755)*S, IC(-3522)*S, IC(-1614)*S, IC(-6111)*S,   IC(270)*S,  IC(1822)*S,
   IC(-234)*S, IC(-2844)*S, IC(-1201)*S,  IC(-830)*S,  IC(1193)*S,  IC(2354)*S,    IC(47)*S,  IC(1522)*S,
    IC(-78)*S,  IC(-640)*S,  IC(2425)*S, IC(-1596)*S,  IC(1563)*S,  IC(1169)*S, IC(-1006)*S,   IC(-83)*S,
   IC(2362)*S, IC(-3521)*S,  IC(-314)*S,  IC(1814)*S, IC(-1751)*S,   IC(305)*S,  IC(1715)*S, IC(-3741)*S,
   IC(7847)*S,  IC(1291)*S,  IC(1206)*S,    IC(36)*S,  IC(1397)*S, IC(-1419)*S, IC(-1194)*S, IC(-2014)*S,
   IC(1742)*S,  IC(-578)*S,  IC(-207)*S,   IC(875)*S,  IC(1539)*S,  IC(2826)*S, IC(-1165)*S,  IC(-909)*S,
   IC(1849)*S,   IC(927)*S,  IC(2018)*S,  IC(-981)*S,  IC(1637)*S,  IC(-463)*S,   IC(905)*S,  IC(6618)*S,
    IC(400)*S,   IC(630)*S,  IC(2614)*S,   IC(900)*S,  IC(2323)*S, IC(-1094)*S, IC(-1858)*S,  IC(-212)*S,
  IC(-2069)*S,   IC(747)*S,  IC(1845)*S, IC(-1450)*S,   IC(444)*S,  IC(-213)*S,  IC(-438)*S,  IC(1158)*S,
   IC(4738)*S,  IC(2497)*S,  IC(-370)*S, IC(-2016)*S,  IC(-518)*S, IC(-1160)*S, IC(-1510)*S,   IC(123)*S
};
/* Maximum magnitude in above table: 116937 */
#undef S