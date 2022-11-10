#include <stdio.h>

// static unsigned int g_seed;

// // Used to seed the generator.           
// static inline void fast_srand(int seed) {
//     g_seed = seed;
// }

// Compute a pseudorandom integer.
// Output value in range [0, 32767]
static unsigned int g_seed = 0xbadbeef;
static inline int fast_rand(void) {
    g_seed = (214013*g_seed+2531011);
    return (g_seed>>16)&0x7FFF;
}

int inc_count;

void inc_count_0(void){inc_count += 0; return;}
void inc_count_1(void){inc_count += 1; return;}
void inc_count_2(void){inc_count += 2; return;}
void inc_count_3(void){inc_count += 3; return;}
void inc_count_4(void){inc_count += 4; return;}
void inc_count_5(void){inc_count += 5; return;}
void inc_count_6(void){inc_count += 6; return;}
void inc_count_7(void){inc_count += 7; return;}
void inc_count_8(void){inc_count += 8; return;}
void inc_count_9(void){inc_count += 9; return;}
void inc_count_10(void){inc_count += 10; return;}
void inc_count_11(void){inc_count += 11; return;}
void inc_count_12(void){inc_count += 12; return;}
void inc_count_13(void){inc_count += 13; return;}
void inc_count_14(void){inc_count += 14; return;}
void inc_count_15(void){inc_count += 15; return;}
void inc_count_16(void){inc_count += 16; return;}
void inc_count_17(void){inc_count += 17; return;}
void inc_count_18(void){inc_count += 18; return;}
void inc_count_19(void){inc_count += 19; return;}
void inc_count_20(void){inc_count += 20; return;}
void inc_count_21(void){inc_count += 21; return;}
void inc_count_22(void){inc_count += 22; return;}
void inc_count_23(void){inc_count += 23; return;}
void inc_count_24(void){inc_count += 24; return;}
void inc_count_25(void){inc_count += 25; return;}
void inc_count_26(void){inc_count += 26; return;}
void inc_count_27(void){inc_count += 27; return;}
void inc_count_28(void){inc_count += 28; return;}
void inc_count_29(void){inc_count += 29; return;}
void inc_count_30(void){inc_count += 30; return;}
void inc_count_31(void){inc_count += 31; return;}
void inc_count_32(void){inc_count += 32; return;}
void inc_count_33(void){inc_count += 33; return;}
void inc_count_34(void){inc_count += 34; return;}
void inc_count_35(void){inc_count += 35; return;}
void inc_count_36(void){inc_count += 36; return;}
void inc_count_37(void){inc_count += 37; return;}
void inc_count_38(void){inc_count += 38; return;}
void inc_count_39(void){inc_count += 39; return;}
void inc_count_40(void){inc_count += 40; return;}
void inc_count_41(void){inc_count += 41; return;}
void inc_count_42(void){inc_count += 42; return;}
void inc_count_43(void){inc_count += 43; return;}
void inc_count_44(void){inc_count += 44; return;}
void inc_count_45(void){inc_count += 45; return;}
void inc_count_46(void){inc_count += 46; return;}
void inc_count_47(void){inc_count += 47; return;}
void inc_count_48(void){inc_count += 48; return;}
void inc_count_49(void){inc_count += 49; return;}
void inc_count_50(void){inc_count += 50; return;}
void inc_count_51(void){inc_count += 51; return;}
void inc_count_52(void){inc_count += 52; return;}
void inc_count_53(void){inc_count += 53; return;}
void inc_count_54(void){inc_count += 54; return;}
void inc_count_55(void){inc_count += 55; return;}
void inc_count_56(void){inc_count += 56; return;}
void inc_count_57(void){inc_count += 57; return;}
void inc_count_58(void){inc_count += 58; return;}
void inc_count_59(void){inc_count += 59; return;}
void inc_count_60(void){inc_count += 60; return;}
void inc_count_61(void){inc_count += 61; return;}
void inc_count_62(void){inc_count += 62; return;}
void inc_count_63(void){inc_count += 63; return;}
void inc_count_64(void){inc_count += 64; return;}
void inc_count_65(void){inc_count += 65; return;}
void inc_count_66(void){inc_count += 66; return;}
void inc_count_67(void){inc_count += 67; return;}
void inc_count_68(void){inc_count += 68; return;}
void inc_count_69(void){inc_count += 69; return;}
void inc_count_70(void){inc_count += 70; return;}
void inc_count_71(void){inc_count += 71; return;}
void inc_count_72(void){inc_count += 72; return;}
void inc_count_73(void){inc_count += 73; return;}
void inc_count_74(void){inc_count += 74; return;}
void inc_count_75(void){inc_count += 75; return;}
void inc_count_76(void){inc_count += 76; return;}
void inc_count_77(void){inc_count += 77; return;}
void inc_count_78(void){inc_count += 78; return;}
void inc_count_79(void){inc_count += 79; return;}
void inc_count_80(void){inc_count += 80; return;}
void inc_count_81(void){inc_count += 81; return;}
void inc_count_82(void){inc_count += 82; return;}
void inc_count_83(void){inc_count += 83; return;}
void inc_count_84(void){inc_count += 84; return;}
void inc_count_85(void){inc_count += 85; return;}
void inc_count_86(void){inc_count += 86; return;}
void inc_count_87(void){inc_count += 87; return;}
void inc_count_88(void){inc_count += 88; return;}
void inc_count_89(void){inc_count += 89; return;}
void inc_count_90(void){inc_count += 90; return;}
void inc_count_91(void){inc_count += 91; return;}
void inc_count_92(void){inc_count += 92; return;}
void inc_count_93(void){inc_count += 93; return;}
void inc_count_94(void){inc_count += 94; return;}
void inc_count_95(void){inc_count += 95; return;}
void inc_count_96(void){inc_count += 96; return;}
void inc_count_97(void){inc_count += 97; return;}
void inc_count_98(void){inc_count += 98; return;}
void inc_count_99(void){inc_count += 99; return;}
void inc_count_100(void){inc_count += 100; return;}
void inc_count_101(void){inc_count += 101; return;}
void inc_count_102(void){inc_count += 102; return;}
void inc_count_103(void){inc_count += 103; return;}
void inc_count_104(void){inc_count += 104; return;}
void inc_count_105(void){inc_count += 105; return;}
void inc_count_106(void){inc_count += 106; return;}
void inc_count_107(void){inc_count += 107; return;}
void inc_count_108(void){inc_count += 108; return;}
void inc_count_109(void){inc_count += 109; return;}
void inc_count_110(void){inc_count += 110; return;}
void inc_count_111(void){inc_count += 111; return;}
void inc_count_112(void){inc_count += 112; return;}
void inc_count_113(void){inc_count += 113; return;}
void inc_count_114(void){inc_count += 114; return;}
void inc_count_115(void){inc_count += 115; return;}
void inc_count_116(void){inc_count += 116; return;}
void inc_count_117(void){inc_count += 117; return;}
void inc_count_118(void){inc_count += 118; return;}
void inc_count_119(void){inc_count += 119; return;}
void inc_count_120(void){inc_count += 120; return;}
void inc_count_121(void){inc_count += 121; return;}
void inc_count_122(void){inc_count += 122; return;}
void inc_count_123(void){inc_count += 123; return;}
void inc_count_124(void){inc_count += 124; return;}
void inc_count_125(void){inc_count += 125; return;}
void inc_count_126(void){inc_count += 126; return;}
void inc_count_127(void){inc_count += 127; return;}
void inc_count_128(void){inc_count += 128; return;}
void inc_count_129(void){inc_count += 129; return;}
void inc_count_130(void){inc_count += 130; return;}
void inc_count_131(void){inc_count += 131; return;}
void inc_count_132(void){inc_count += 132; return;}
void inc_count_133(void){inc_count += 133; return;}
void inc_count_134(void){inc_count += 134; return;}
void inc_count_135(void){inc_count += 135; return;}
void inc_count_136(void){inc_count += 136; return;}
void inc_count_137(void){inc_count += 137; return;}
void inc_count_138(void){inc_count += 138; return;}
void inc_count_139(void){inc_count += 139; return;}
void inc_count_140(void){inc_count += 140; return;}
void inc_count_141(void){inc_count += 141; return;}
void inc_count_142(void){inc_count += 142; return;}
void inc_count_143(void){inc_count += 143; return;}
void inc_count_144(void){inc_count += 144; return;}
void inc_count_145(void){inc_count += 145; return;}
void inc_count_146(void){inc_count += 146; return;}
void inc_count_147(void){inc_count += 147; return;}
void inc_count_148(void){inc_count += 148; return;}
void inc_count_149(void){inc_count += 149; return;}
void inc_count_150(void){inc_count += 150; return;}
void inc_count_151(void){inc_count += 151; return;}
void inc_count_152(void){inc_count += 152; return;}
void inc_count_153(void){inc_count += 153; return;}
void inc_count_154(void){inc_count += 154; return;}
void inc_count_155(void){inc_count += 155; return;}
void inc_count_156(void){inc_count += 156; return;}
void inc_count_157(void){inc_count += 157; return;}
void inc_count_158(void){inc_count += 158; return;}
void inc_count_159(void){inc_count += 159; return;}
void inc_count_160(void){inc_count += 160; return;}
void inc_count_161(void){inc_count += 161; return;}
void inc_count_162(void){inc_count += 162; return;}
void inc_count_163(void){inc_count += 163; return;}
void inc_count_164(void){inc_count += 164; return;}
void inc_count_165(void){inc_count += 165; return;}
void inc_count_166(void){inc_count += 166; return;}
void inc_count_167(void){inc_count += 167; return;}
void inc_count_168(void){inc_count += 168; return;}
void inc_count_169(void){inc_count += 169; return;}
void inc_count_170(void){inc_count += 170; return;}
void inc_count_171(void){inc_count += 171; return;}
void inc_count_172(void){inc_count += 172; return;}
void inc_count_173(void){inc_count += 173; return;}
void inc_count_174(void){inc_count += 174; return;}
void inc_count_175(void){inc_count += 175; return;}
void inc_count_176(void){inc_count += 176; return;}
void inc_count_177(void){inc_count += 177; return;}
void inc_count_178(void){inc_count += 178; return;}
void inc_count_179(void){inc_count += 179; return;}
void inc_count_180(void){inc_count += 180; return;}
void inc_count_181(void){inc_count += 181; return;}
void inc_count_182(void){inc_count += 182; return;}
void inc_count_183(void){inc_count += 183; return;}
void inc_count_184(void){inc_count += 184; return;}
void inc_count_185(void){inc_count += 185; return;}
void inc_count_186(void){inc_count += 186; return;}
void inc_count_187(void){inc_count += 187; return;}
void inc_count_188(void){inc_count += 188; return;}
void inc_count_189(void){inc_count += 189; return;}
void inc_count_190(void){inc_count += 190; return;}
void inc_count_191(void){inc_count += 191; return;}
void inc_count_192(void){inc_count += 192; return;}
void inc_count_193(void){inc_count += 193; return;}
void inc_count_194(void){inc_count += 194; return;}
void inc_count_195(void){inc_count += 195; return;}
void inc_count_196(void){inc_count += 196; return;}
void inc_count_197(void){inc_count += 197; return;}
void inc_count_198(void){inc_count += 198; return;}
void inc_count_199(void){inc_count += 199; return;}
void inc_count_200(void){inc_count += 200; return;}
void inc_count_201(void){inc_count += 201; return;}
void inc_count_202(void){inc_count += 202; return;}
void inc_count_203(void){inc_count += 203; return;}
void inc_count_204(void){inc_count += 204; return;}
void inc_count_205(void){inc_count += 205; return;}
void inc_count_206(void){inc_count += 206; return;}
void inc_count_207(void){inc_count += 207; return;}
void inc_count_208(void){inc_count += 208; return;}
void inc_count_209(void){inc_count += 209; return;}
void inc_count_210(void){inc_count += 210; return;}
void inc_count_211(void){inc_count += 211; return;}
void inc_count_212(void){inc_count += 212; return;}
void inc_count_213(void){inc_count += 213; return;}
void inc_count_214(void){inc_count += 214; return;}
void inc_count_215(void){inc_count += 215; return;}
void inc_count_216(void){inc_count += 216; return;}
void inc_count_217(void){inc_count += 217; return;}
void inc_count_218(void){inc_count += 218; return;}
void inc_count_219(void){inc_count += 219; return;}
void inc_count_220(void){inc_count += 220; return;}
void inc_count_221(void){inc_count += 221; return;}
void inc_count_222(void){inc_count += 222; return;}
void inc_count_223(void){inc_count += 223; return;}
void inc_count_224(void){inc_count += 224; return;}
void inc_count_225(void){inc_count += 225; return;}
void inc_count_226(void){inc_count += 226; return;}
void inc_count_227(void){inc_count += 227; return;}
void inc_count_228(void){inc_count += 228; return;}
void inc_count_229(void){inc_count += 229; return;}
void inc_count_230(void){inc_count += 230; return;}
void inc_count_231(void){inc_count += 231; return;}
void inc_count_232(void){inc_count += 232; return;}
void inc_count_233(void){inc_count += 233; return;}
void inc_count_234(void){inc_count += 234; return;}
void inc_count_235(void){inc_count += 235; return;}
void inc_count_236(void){inc_count += 236; return;}
void inc_count_237(void){inc_count += 237; return;}
void inc_count_238(void){inc_count += 238; return;}
void inc_count_239(void){inc_count += 239; return;}
void inc_count_240(void){inc_count += 240; return;}
void inc_count_241(void){inc_count += 241; return;}
void inc_count_242(void){inc_count += 242; return;}
void inc_count_243(void){inc_count += 243; return;}
void inc_count_244(void){inc_count += 244; return;}
void inc_count_245(void){inc_count += 245; return;}
void inc_count_246(void){inc_count += 246; return;}
void inc_count_247(void){inc_count += 247; return;}
void inc_count_248(void){inc_count += 248; return;}
void inc_count_249(void){inc_count += 249; return;}
void inc_count_250(void){inc_count += 250; return;}
void inc_count_251(void){inc_count += 251; return;}
void inc_count_252(void){inc_count += 252; return;}
void inc_count_253(void){inc_count += 253; return;}
void inc_count_254(void){inc_count += 254; return;}
void inc_count_255(void){inc_count += 255; return;}
void inc_count_256(void){inc_count += 256; return;}
void inc_count_257(void){inc_count += 257; return;}
void inc_count_258(void){inc_count += 258; return;}
void inc_count_259(void){inc_count += 259; return;}
void inc_count_260(void){inc_count += 260; return;}
void inc_count_261(void){inc_count += 261; return;}
void inc_count_262(void){inc_count += 262; return;}
void inc_count_263(void){inc_count += 263; return;}
void inc_count_264(void){inc_count += 264; return;}
void inc_count_265(void){inc_count += 265; return;}
void inc_count_266(void){inc_count += 266; return;}
void inc_count_267(void){inc_count += 267; return;}
void inc_count_268(void){inc_count += 268; return;}
void inc_count_269(void){inc_count += 269; return;}
void inc_count_270(void){inc_count += 270; return;}
void inc_count_271(void){inc_count += 271; return;}
void inc_count_272(void){inc_count += 272; return;}
void inc_count_273(void){inc_count += 273; return;}
void inc_count_274(void){inc_count += 274; return;}
void inc_count_275(void){inc_count += 275; return;}
void inc_count_276(void){inc_count += 276; return;}
void inc_count_277(void){inc_count += 277; return;}
void inc_count_278(void){inc_count += 278; return;}
void inc_count_279(void){inc_count += 279; return;}
void inc_count_280(void){inc_count += 280; return;}
void inc_count_281(void){inc_count += 281; return;}
void inc_count_282(void){inc_count += 282; return;}
void inc_count_283(void){inc_count += 283; return;}
void inc_count_284(void){inc_count += 284; return;}
void inc_count_285(void){inc_count += 285; return;}
void inc_count_286(void){inc_count += 286; return;}
void inc_count_287(void){inc_count += 287; return;}
void inc_count_288(void){inc_count += 288; return;}
void inc_count_289(void){inc_count += 289; return;}
void inc_count_290(void){inc_count += 290; return;}
void inc_count_291(void){inc_count += 291; return;}
void inc_count_292(void){inc_count += 292; return;}
void inc_count_293(void){inc_count += 293; return;}
void inc_count_294(void){inc_count += 294; return;}
void inc_count_295(void){inc_count += 295; return;}
void inc_count_296(void){inc_count += 296; return;}
void inc_count_297(void){inc_count += 297; return;}
void inc_count_298(void){inc_count += 298; return;}
void inc_count_299(void){inc_count += 299; return;}
void inc_count_300(void){inc_count += 300; return;}
void inc_count_301(void){inc_count += 301; return;}
void inc_count_302(void){inc_count += 302; return;}
void inc_count_303(void){inc_count += 303; return;}
void inc_count_304(void){inc_count += 304; return;}
void inc_count_305(void){inc_count += 305; return;}
void inc_count_306(void){inc_count += 306; return;}
void inc_count_307(void){inc_count += 307; return;}
void inc_count_308(void){inc_count += 308; return;}
void inc_count_309(void){inc_count += 309; return;}
void inc_count_310(void){inc_count += 310; return;}
void inc_count_311(void){inc_count += 311; return;}
void inc_count_312(void){inc_count += 312; return;}
void inc_count_313(void){inc_count += 313; return;}
void inc_count_314(void){inc_count += 314; return;}
void inc_count_315(void){inc_count += 315; return;}
void inc_count_316(void){inc_count += 316; return;}
void inc_count_317(void){inc_count += 317; return;}
void inc_count_318(void){inc_count += 318; return;}
void inc_count_319(void){inc_count += 319; return;}
void inc_count_320(void){inc_count += 320; return;}
void inc_count_321(void){inc_count += 321; return;}
void inc_count_322(void){inc_count += 322; return;}
void inc_count_323(void){inc_count += 323; return;}
void inc_count_324(void){inc_count += 324; return;}
void inc_count_325(void){inc_count += 325; return;}
void inc_count_326(void){inc_count += 326; return;}
void inc_count_327(void){inc_count += 327; return;}
void inc_count_328(void){inc_count += 328; return;}
void inc_count_329(void){inc_count += 329; return;}
void inc_count_330(void){inc_count += 330; return;}
void inc_count_331(void){inc_count += 331; return;}
void inc_count_332(void){inc_count += 332; return;}
void inc_count_333(void){inc_count += 333; return;}
void inc_count_334(void){inc_count += 334; return;}
void inc_count_335(void){inc_count += 335; return;}
void inc_count_336(void){inc_count += 336; return;}
void inc_count_337(void){inc_count += 337; return;}
void inc_count_338(void){inc_count += 338; return;}
void inc_count_339(void){inc_count += 339; return;}
void inc_count_340(void){inc_count += 340; return;}
void inc_count_341(void){inc_count += 341; return;}
void inc_count_342(void){inc_count += 342; return;}
void inc_count_343(void){inc_count += 343; return;}
void inc_count_344(void){inc_count += 344; return;}
void inc_count_345(void){inc_count += 345; return;}
void inc_count_346(void){inc_count += 346; return;}
void inc_count_347(void){inc_count += 347; return;}
void inc_count_348(void){inc_count += 348; return;}
void inc_count_349(void){inc_count += 349; return;}
void inc_count_350(void){inc_count += 350; return;}
void inc_count_351(void){inc_count += 351; return;}
void inc_count_352(void){inc_count += 352; return;}
void inc_count_353(void){inc_count += 353; return;}
void inc_count_354(void){inc_count += 354; return;}
void inc_count_355(void){inc_count += 355; return;}
void inc_count_356(void){inc_count += 356; return;}
void inc_count_357(void){inc_count += 357; return;}
void inc_count_358(void){inc_count += 358; return;}
void inc_count_359(void){inc_count += 359; return;}
void inc_count_360(void){inc_count += 360; return;}
void inc_count_361(void){inc_count += 361; return;}
void inc_count_362(void){inc_count += 362; return;}
void inc_count_363(void){inc_count += 363; return;}
void inc_count_364(void){inc_count += 364; return;}
void inc_count_365(void){inc_count += 365; return;}
void inc_count_366(void){inc_count += 366; return;}
void inc_count_367(void){inc_count += 367; return;}
void inc_count_368(void){inc_count += 368; return;}
void inc_count_369(void){inc_count += 369; return;}
void inc_count_370(void){inc_count += 370; return;}
void inc_count_371(void){inc_count += 371; return;}
void inc_count_372(void){inc_count += 372; return;}
void inc_count_373(void){inc_count += 373; return;}
void inc_count_374(void){inc_count += 374; return;}
void inc_count_375(void){inc_count += 375; return;}
void inc_count_376(void){inc_count += 376; return;}
void inc_count_377(void){inc_count += 377; return;}
void inc_count_378(void){inc_count += 378; return;}
void inc_count_379(void){inc_count += 379; return;}
void inc_count_380(void){inc_count += 380; return;}
void inc_count_381(void){inc_count += 381; return;}
void inc_count_382(void){inc_count += 382; return;}
void inc_count_383(void){inc_count += 383; return;}
void inc_count_384(void){inc_count += 384; return;}
void inc_count_385(void){inc_count += 385; return;}
void inc_count_386(void){inc_count += 386; return;}
void inc_count_387(void){inc_count += 387; return;}
void inc_count_388(void){inc_count += 388; return;}
void inc_count_389(void){inc_count += 389; return;}
void inc_count_390(void){inc_count += 390; return;}
void inc_count_391(void){inc_count += 391; return;}
void inc_count_392(void){inc_count += 392; return;}
void inc_count_393(void){inc_count += 393; return;}
void inc_count_394(void){inc_count += 394; return;}
void inc_count_395(void){inc_count += 395; return;}
void inc_count_396(void){inc_count += 396; return;}
void inc_count_397(void){inc_count += 397; return;}
void inc_count_398(void){inc_count += 398; return;}
void inc_count_399(void){inc_count += 399; return;}
void inc_count_400(void){inc_count += 400; return;}
void inc_count_401(void){inc_count += 401; return;}
void inc_count_402(void){inc_count += 402; return;}
void inc_count_403(void){inc_count += 403; return;}
void inc_count_404(void){inc_count += 404; return;}
void inc_count_405(void){inc_count += 405; return;}
void inc_count_406(void){inc_count += 406; return;}
void inc_count_407(void){inc_count += 407; return;}
void inc_count_408(void){inc_count += 408; return;}
void inc_count_409(void){inc_count += 409; return;}
void inc_count_410(void){inc_count += 410; return;}
void inc_count_411(void){inc_count += 411; return;}
void inc_count_412(void){inc_count += 412; return;}
void inc_count_413(void){inc_count += 413; return;}
void inc_count_414(void){inc_count += 414; return;}
void inc_count_415(void){inc_count += 415; return;}
void inc_count_416(void){inc_count += 416; return;}
void inc_count_417(void){inc_count += 417; return;}
void inc_count_418(void){inc_count += 418; return;}
void inc_count_419(void){inc_count += 419; return;}
void inc_count_420(void){inc_count += 420; return;}
void inc_count_421(void){inc_count += 421; return;}
void inc_count_422(void){inc_count += 422; return;}
void inc_count_423(void){inc_count += 423; return;}
void inc_count_424(void){inc_count += 424; return;}
void inc_count_425(void){inc_count += 425; return;}
void inc_count_426(void){inc_count += 426; return;}
void inc_count_427(void){inc_count += 427; return;}
void inc_count_428(void){inc_count += 428; return;}
void inc_count_429(void){inc_count += 429; return;}
void inc_count_430(void){inc_count += 430; return;}
void inc_count_431(void){inc_count += 431; return;}
void inc_count_432(void){inc_count += 432; return;}
void inc_count_433(void){inc_count += 433; return;}
void inc_count_434(void){inc_count += 434; return;}
void inc_count_435(void){inc_count += 435; return;}
void inc_count_436(void){inc_count += 436; return;}
void inc_count_437(void){inc_count += 437; return;}
void inc_count_438(void){inc_count += 438; return;}
void inc_count_439(void){inc_count += 439; return;}
void inc_count_440(void){inc_count += 440; return;}
void inc_count_441(void){inc_count += 441; return;}
void inc_count_442(void){inc_count += 442; return;}
void inc_count_443(void){inc_count += 443; return;}
void inc_count_444(void){inc_count += 444; return;}
void inc_count_445(void){inc_count += 445; return;}
void inc_count_446(void){inc_count += 446; return;}
void inc_count_447(void){inc_count += 447; return;}
void inc_count_448(void){inc_count += 448; return;}
void inc_count_449(void){inc_count += 449; return;}
void inc_count_450(void){inc_count += 450; return;}
void inc_count_451(void){inc_count += 451; return;}
void inc_count_452(void){inc_count += 452; return;}
void inc_count_453(void){inc_count += 453; return;}
void inc_count_454(void){inc_count += 454; return;}
void inc_count_455(void){inc_count += 455; return;}
void inc_count_456(void){inc_count += 456; return;}
void inc_count_457(void){inc_count += 457; return;}
void inc_count_458(void){inc_count += 458; return;}
void inc_count_459(void){inc_count += 459; return;}
void inc_count_460(void){inc_count += 460; return;}
void inc_count_461(void){inc_count += 461; return;}
void inc_count_462(void){inc_count += 462; return;}
void inc_count_463(void){inc_count += 463; return;}
void inc_count_464(void){inc_count += 464; return;}
void inc_count_465(void){inc_count += 465; return;}
void inc_count_466(void){inc_count += 466; return;}
void inc_count_467(void){inc_count += 467; return;}
void inc_count_468(void){inc_count += 468; return;}
void inc_count_469(void){inc_count += 469; return;}
void inc_count_470(void){inc_count += 470; return;}
void inc_count_471(void){inc_count += 471; return;}
void inc_count_472(void){inc_count += 472; return;}
void inc_count_473(void){inc_count += 473; return;}
void inc_count_474(void){inc_count += 474; return;}
void inc_count_475(void){inc_count += 475; return;}
void inc_count_476(void){inc_count += 476; return;}
void inc_count_477(void){inc_count += 477; return;}
void inc_count_478(void){inc_count += 478; return;}
void inc_count_479(void){inc_count += 479; return;}
void inc_count_480(void){inc_count += 480; return;}
void inc_count_481(void){inc_count += 481; return;}
void inc_count_482(void){inc_count += 482; return;}
void inc_count_483(void){inc_count += 483; return;}
void inc_count_484(void){inc_count += 484; return;}
void inc_count_485(void){inc_count += 485; return;}
void inc_count_486(void){inc_count += 486; return;}
void inc_count_487(void){inc_count += 487; return;}
void inc_count_488(void){inc_count += 488; return;}
void inc_count_489(void){inc_count += 489; return;}
void inc_count_490(void){inc_count += 490; return;}
void inc_count_491(void){inc_count += 491; return;}
void inc_count_492(void){inc_count += 492; return;}
void inc_count_493(void){inc_count += 493; return;}
void inc_count_494(void){inc_count += 494; return;}
void inc_count_495(void){inc_count += 495; return;}
void inc_count_496(void){inc_count += 496; return;}
void inc_count_497(void){inc_count += 497; return;}
void inc_count_498(void){inc_count += 498; return;}
void inc_count_499(void){inc_count += 499; return;}
void inc_count_500(void){inc_count += 500; return;}
void inc_count_501(void){inc_count += 501; return;}
void inc_count_502(void){inc_count += 502; return;}
void inc_count_503(void){inc_count += 503; return;}
void inc_count_504(void){inc_count += 504; return;}
void inc_count_505(void){inc_count += 505; return;}
void inc_count_506(void){inc_count += 506; return;}
void inc_count_507(void){inc_count += 507; return;}
void inc_count_508(void){inc_count += 508; return;}
void inc_count_509(void){inc_count += 509; return;}
void inc_count_510(void){inc_count += 510; return;}
void inc_count_511(void){inc_count += 511; return;}
void inc_count_512(void){inc_count += 512; return;}
void inc_count_513(void){inc_count += 513; return;}
void inc_count_514(void){inc_count += 514; return;}
void inc_count_515(void){inc_count += 515; return;}
void inc_count_516(void){inc_count += 516; return;}
void inc_count_517(void){inc_count += 517; return;}
void inc_count_518(void){inc_count += 518; return;}
void inc_count_519(void){inc_count += 519; return;}
void inc_count_520(void){inc_count += 520; return;}
void inc_count_521(void){inc_count += 521; return;}
void inc_count_522(void){inc_count += 522; return;}
void inc_count_523(void){inc_count += 523; return;}
void inc_count_524(void){inc_count += 524; return;}
void inc_count_525(void){inc_count += 525; return;}
void inc_count_526(void){inc_count += 526; return;}
void inc_count_527(void){inc_count += 527; return;}
void inc_count_528(void){inc_count += 528; return;}
void inc_count_529(void){inc_count += 529; return;}
void inc_count_530(void){inc_count += 530; return;}
void inc_count_531(void){inc_count += 531; return;}
void inc_count_532(void){inc_count += 532; return;}
void inc_count_533(void){inc_count += 533; return;}
void inc_count_534(void){inc_count += 534; return;}
void inc_count_535(void){inc_count += 535; return;}
void inc_count_536(void){inc_count += 536; return;}
void inc_count_537(void){inc_count += 537; return;}
void inc_count_538(void){inc_count += 538; return;}
void inc_count_539(void){inc_count += 539; return;}
void inc_count_540(void){inc_count += 540; return;}
void inc_count_541(void){inc_count += 541; return;}
void inc_count_542(void){inc_count += 542; return;}
void inc_count_543(void){inc_count += 543; return;}
void inc_count_544(void){inc_count += 544; return;}
void inc_count_545(void){inc_count += 545; return;}
void inc_count_546(void){inc_count += 546; return;}
void inc_count_547(void){inc_count += 547; return;}
void inc_count_548(void){inc_count += 548; return;}
void inc_count_549(void){inc_count += 549; return;}
void inc_count_550(void){inc_count += 550; return;}
void inc_count_551(void){inc_count += 551; return;}
void inc_count_552(void){inc_count += 552; return;}
void inc_count_553(void){inc_count += 553; return;}
void inc_count_554(void){inc_count += 554; return;}
void inc_count_555(void){inc_count += 555; return;}
void inc_count_556(void){inc_count += 556; return;}
void inc_count_557(void){inc_count += 557; return;}
void inc_count_558(void){inc_count += 558; return;}
void inc_count_559(void){inc_count += 559; return;}
void inc_count_560(void){inc_count += 560; return;}
void inc_count_561(void){inc_count += 561; return;}
void inc_count_562(void){inc_count += 562; return;}
void inc_count_563(void){inc_count += 563; return;}
void inc_count_564(void){inc_count += 564; return;}
void inc_count_565(void){inc_count += 565; return;}
void inc_count_566(void){inc_count += 566; return;}
void inc_count_567(void){inc_count += 567; return;}
void inc_count_568(void){inc_count += 568; return;}
void inc_count_569(void){inc_count += 569; return;}
void inc_count_570(void){inc_count += 570; return;}
void inc_count_571(void){inc_count += 571; return;}
void inc_count_572(void){inc_count += 572; return;}
void inc_count_573(void){inc_count += 573; return;}
void inc_count_574(void){inc_count += 574; return;}
void inc_count_575(void){inc_count += 575; return;}
void inc_count_576(void){inc_count += 576; return;}
void inc_count_577(void){inc_count += 577; return;}
void inc_count_578(void){inc_count += 578; return;}
void inc_count_579(void){inc_count += 579; return;}
void inc_count_580(void){inc_count += 580; return;}
void inc_count_581(void){inc_count += 581; return;}
void inc_count_582(void){inc_count += 582; return;}
void inc_count_583(void){inc_count += 583; return;}
void inc_count_584(void){inc_count += 584; return;}
void inc_count_585(void){inc_count += 585; return;}
void inc_count_586(void){inc_count += 586; return;}
void inc_count_587(void){inc_count += 587; return;}
void inc_count_588(void){inc_count += 588; return;}
void inc_count_589(void){inc_count += 589; return;}
void inc_count_590(void){inc_count += 590; return;}
void inc_count_591(void){inc_count += 591; return;}
void inc_count_592(void){inc_count += 592; return;}
void inc_count_593(void){inc_count += 593; return;}
void inc_count_594(void){inc_count += 594; return;}
void inc_count_595(void){inc_count += 595; return;}
void inc_count_596(void){inc_count += 596; return;}
void inc_count_597(void){inc_count += 597; return;}
void inc_count_598(void){inc_count += 598; return;}
void inc_count_599(void){inc_count += 599; return;}
void inc_count_600(void){inc_count += 600; return;}
void inc_count_601(void){inc_count += 601; return;}
void inc_count_602(void){inc_count += 602; return;}
void inc_count_603(void){inc_count += 603; return;}
void inc_count_604(void){inc_count += 604; return;}
void inc_count_605(void){inc_count += 605; return;}
void inc_count_606(void){inc_count += 606; return;}
void inc_count_607(void){inc_count += 607; return;}
void inc_count_608(void){inc_count += 608; return;}
void inc_count_609(void){inc_count += 609; return;}
void inc_count_610(void){inc_count += 610; return;}
void inc_count_611(void){inc_count += 611; return;}
void inc_count_612(void){inc_count += 612; return;}
void inc_count_613(void){inc_count += 613; return;}
void inc_count_614(void){inc_count += 614; return;}
void inc_count_615(void){inc_count += 615; return;}
void inc_count_616(void){inc_count += 616; return;}
void inc_count_617(void){inc_count += 617; return;}
void inc_count_618(void){inc_count += 618; return;}
void inc_count_619(void){inc_count += 619; return;}
void inc_count_620(void){inc_count += 620; return;}
void inc_count_621(void){inc_count += 621; return;}
void inc_count_622(void){inc_count += 622; return;}
void inc_count_623(void){inc_count += 623; return;}
void inc_count_624(void){inc_count += 624; return;}
void inc_count_625(void){inc_count += 625; return;}
void inc_count_626(void){inc_count += 626; return;}
void inc_count_627(void){inc_count += 627; return;}
void inc_count_628(void){inc_count += 628; return;}
void inc_count_629(void){inc_count += 629; return;}
void inc_count_630(void){inc_count += 630; return;}
void inc_count_631(void){inc_count += 631; return;}
void inc_count_632(void){inc_count += 632; return;}
void inc_count_633(void){inc_count += 633; return;}
void inc_count_634(void){inc_count += 634; return;}
void inc_count_635(void){inc_count += 635; return;}
void inc_count_636(void){inc_count += 636; return;}
void inc_count_637(void){inc_count += 637; return;}
void inc_count_638(void){inc_count += 638; return;}
void inc_count_639(void){inc_count += 639; return;}
void inc_count_640(void){inc_count += 640; return;}
void inc_count_641(void){inc_count += 641; return;}
void inc_count_642(void){inc_count += 642; return;}
void inc_count_643(void){inc_count += 643; return;}
void inc_count_644(void){inc_count += 644; return;}
void inc_count_645(void){inc_count += 645; return;}
void inc_count_646(void){inc_count += 646; return;}
void inc_count_647(void){inc_count += 647; return;}
void inc_count_648(void){inc_count += 648; return;}
void inc_count_649(void){inc_count += 649; return;}
void inc_count_650(void){inc_count += 650; return;}
void inc_count_651(void){inc_count += 651; return;}
void inc_count_652(void){inc_count += 652; return;}
void inc_count_653(void){inc_count += 653; return;}
void inc_count_654(void){inc_count += 654; return;}
void inc_count_655(void){inc_count += 655; return;}
void inc_count_656(void){inc_count += 656; return;}
void inc_count_657(void){inc_count += 657; return;}
void inc_count_658(void){inc_count += 658; return;}
void inc_count_659(void){inc_count += 659; return;}
void inc_count_660(void){inc_count += 660; return;}
void inc_count_661(void){inc_count += 661; return;}
void inc_count_662(void){inc_count += 662; return;}
void inc_count_663(void){inc_count += 663; return;}
void inc_count_664(void){inc_count += 664; return;}
void inc_count_665(void){inc_count += 665; return;}
void inc_count_666(void){inc_count += 666; return;}
void inc_count_667(void){inc_count += 667; return;}
void inc_count_668(void){inc_count += 668; return;}
void inc_count_669(void){inc_count += 669; return;}
void inc_count_670(void){inc_count += 670; return;}
void inc_count_671(void){inc_count += 671; return;}
void inc_count_672(void){inc_count += 672; return;}
void inc_count_673(void){inc_count += 673; return;}
void inc_count_674(void){inc_count += 674; return;}
void inc_count_675(void){inc_count += 675; return;}
void inc_count_676(void){inc_count += 676; return;}
void inc_count_677(void){inc_count += 677; return;}
void inc_count_678(void){inc_count += 678; return;}
void inc_count_679(void){inc_count += 679; return;}
void inc_count_680(void){inc_count += 680; return;}
void inc_count_681(void){inc_count += 681; return;}
void inc_count_682(void){inc_count += 682; return;}
void inc_count_683(void){inc_count += 683; return;}
void inc_count_684(void){inc_count += 684; return;}
void inc_count_685(void){inc_count += 685; return;}
void inc_count_686(void){inc_count += 686; return;}
void inc_count_687(void){inc_count += 687; return;}
void inc_count_688(void){inc_count += 688; return;}
void inc_count_689(void){inc_count += 689; return;}
void inc_count_690(void){inc_count += 690; return;}
void inc_count_691(void){inc_count += 691; return;}
void inc_count_692(void){inc_count += 692; return;}
void inc_count_693(void){inc_count += 693; return;}
void inc_count_694(void){inc_count += 694; return;}
void inc_count_695(void){inc_count += 695; return;}
void inc_count_696(void){inc_count += 696; return;}
void inc_count_697(void){inc_count += 697; return;}
void inc_count_698(void){inc_count += 698; return;}
void inc_count_699(void){inc_count += 699; return;}
void inc_count_700(void){inc_count += 700; return;}
void inc_count_701(void){inc_count += 701; return;}
void inc_count_702(void){inc_count += 702; return;}
void inc_count_703(void){inc_count += 703; return;}
void inc_count_704(void){inc_count += 704; return;}
void inc_count_705(void){inc_count += 705; return;}
void inc_count_706(void){inc_count += 706; return;}
void inc_count_707(void){inc_count += 707; return;}
void inc_count_708(void){inc_count += 708; return;}
void inc_count_709(void){inc_count += 709; return;}
void inc_count_710(void){inc_count += 710; return;}
void inc_count_711(void){inc_count += 711; return;}
void inc_count_712(void){inc_count += 712; return;}
void inc_count_713(void){inc_count += 713; return;}
void inc_count_714(void){inc_count += 714; return;}
void inc_count_715(void){inc_count += 715; return;}
void inc_count_716(void){inc_count += 716; return;}
void inc_count_717(void){inc_count += 717; return;}
void inc_count_718(void){inc_count += 718; return;}
void inc_count_719(void){inc_count += 719; return;}
void inc_count_720(void){inc_count += 720; return;}
void inc_count_721(void){inc_count += 721; return;}
void inc_count_722(void){inc_count += 722; return;}
void inc_count_723(void){inc_count += 723; return;}
void inc_count_724(void){inc_count += 724; return;}
void inc_count_725(void){inc_count += 725; return;}
void inc_count_726(void){inc_count += 726; return;}
void inc_count_727(void){inc_count += 727; return;}
void inc_count_728(void){inc_count += 728; return;}
void inc_count_729(void){inc_count += 729; return;}
void inc_count_730(void){inc_count += 730; return;}
void inc_count_731(void){inc_count += 731; return;}
void inc_count_732(void){inc_count += 732; return;}
void inc_count_733(void){inc_count += 733; return;}
void inc_count_734(void){inc_count += 734; return;}
void inc_count_735(void){inc_count += 735; return;}
void inc_count_736(void){inc_count += 736; return;}
void inc_count_737(void){inc_count += 737; return;}
void inc_count_738(void){inc_count += 738; return;}
void inc_count_739(void){inc_count += 739; return;}
void inc_count_740(void){inc_count += 740; return;}
void inc_count_741(void){inc_count += 741; return;}
void inc_count_742(void){inc_count += 742; return;}
void inc_count_743(void){inc_count += 743; return;}
void inc_count_744(void){inc_count += 744; return;}
void inc_count_745(void){inc_count += 745; return;}
void inc_count_746(void){inc_count += 746; return;}
void inc_count_747(void){inc_count += 747; return;}
void inc_count_748(void){inc_count += 748; return;}
void inc_count_749(void){inc_count += 749; return;}
void inc_count_750(void){inc_count += 750; return;}
void inc_count_751(void){inc_count += 751; return;}
void inc_count_752(void){inc_count += 752; return;}
void inc_count_753(void){inc_count += 753; return;}
void inc_count_754(void){inc_count += 754; return;}
void inc_count_755(void){inc_count += 755; return;}
void inc_count_756(void){inc_count += 756; return;}
void inc_count_757(void){inc_count += 757; return;}
void inc_count_758(void){inc_count += 758; return;}
void inc_count_759(void){inc_count += 759; return;}
void inc_count_760(void){inc_count += 760; return;}
void inc_count_761(void){inc_count += 761; return;}
void inc_count_762(void){inc_count += 762; return;}
void inc_count_763(void){inc_count += 763; return;}
void inc_count_764(void){inc_count += 764; return;}
void inc_count_765(void){inc_count += 765; return;}
void inc_count_766(void){inc_count += 766; return;}
void inc_count_767(void){inc_count += 767; return;}
void inc_count_768(void){inc_count += 768; return;}
void inc_count_769(void){inc_count += 769; return;}
void inc_count_770(void){inc_count += 770; return;}
void inc_count_771(void){inc_count += 771; return;}
void inc_count_772(void){inc_count += 772; return;}
void inc_count_773(void){inc_count += 773; return;}
void inc_count_774(void){inc_count += 774; return;}
void inc_count_775(void){inc_count += 775; return;}
void inc_count_776(void){inc_count += 776; return;}
void inc_count_777(void){inc_count += 777; return;}
void inc_count_778(void){inc_count += 778; return;}
void inc_count_779(void){inc_count += 779; return;}
void inc_count_780(void){inc_count += 780; return;}
void inc_count_781(void){inc_count += 781; return;}
void inc_count_782(void){inc_count += 782; return;}
void inc_count_783(void){inc_count += 783; return;}
void inc_count_784(void){inc_count += 784; return;}
void inc_count_785(void){inc_count += 785; return;}
void inc_count_786(void){inc_count += 786; return;}
void inc_count_787(void){inc_count += 787; return;}
void inc_count_788(void){inc_count += 788; return;}
void inc_count_789(void){inc_count += 789; return;}
void inc_count_790(void){inc_count += 790; return;}
void inc_count_791(void){inc_count += 791; return;}
void inc_count_792(void){inc_count += 792; return;}
void inc_count_793(void){inc_count += 793; return;}
void inc_count_794(void){inc_count += 794; return;}
void inc_count_795(void){inc_count += 795; return;}
void inc_count_796(void){inc_count += 796; return;}
void inc_count_797(void){inc_count += 797; return;}
void inc_count_798(void){inc_count += 798; return;}
void inc_count_799(void){inc_count += 799; return;}
void inc_count_800(void){inc_count += 800; return;}
void inc_count_801(void){inc_count += 801; return;}
void inc_count_802(void){inc_count += 802; return;}
void inc_count_803(void){inc_count += 803; return;}
void inc_count_804(void){inc_count += 804; return;}
void inc_count_805(void){inc_count += 805; return;}
void inc_count_806(void){inc_count += 806; return;}
void inc_count_807(void){inc_count += 807; return;}
void inc_count_808(void){inc_count += 808; return;}
void inc_count_809(void){inc_count += 809; return;}
void inc_count_810(void){inc_count += 810; return;}
void inc_count_811(void){inc_count += 811; return;}
void inc_count_812(void){inc_count += 812; return;}
void inc_count_813(void){inc_count += 813; return;}
void inc_count_814(void){inc_count += 814; return;}
void inc_count_815(void){inc_count += 815; return;}
void inc_count_816(void){inc_count += 816; return;}
void inc_count_817(void){inc_count += 817; return;}
void inc_count_818(void){inc_count += 818; return;}
void inc_count_819(void){inc_count += 819; return;}
void inc_count_820(void){inc_count += 820; return;}
void inc_count_821(void){inc_count += 821; return;}
void inc_count_822(void){inc_count += 822; return;}
void inc_count_823(void){inc_count += 823; return;}
void inc_count_824(void){inc_count += 824; return;}
void inc_count_825(void){inc_count += 825; return;}
void inc_count_826(void){inc_count += 826; return;}
void inc_count_827(void){inc_count += 827; return;}
void inc_count_828(void){inc_count += 828; return;}
void inc_count_829(void){inc_count += 829; return;}
void inc_count_830(void){inc_count += 830; return;}
void inc_count_831(void){inc_count += 831; return;}
void inc_count_832(void){inc_count += 832; return;}
void inc_count_833(void){inc_count += 833; return;}
void inc_count_834(void){inc_count += 834; return;}
void inc_count_835(void){inc_count += 835; return;}
void inc_count_836(void){inc_count += 836; return;}
void inc_count_837(void){inc_count += 837; return;}
void inc_count_838(void){inc_count += 838; return;}
void inc_count_839(void){inc_count += 839; return;}
void inc_count_840(void){inc_count += 840; return;}
void inc_count_841(void){inc_count += 841; return;}
void inc_count_842(void){inc_count += 842; return;}
void inc_count_843(void){inc_count += 843; return;}
void inc_count_844(void){inc_count += 844; return;}
void inc_count_845(void){inc_count += 845; return;}
void inc_count_846(void){inc_count += 846; return;}
void inc_count_847(void){inc_count += 847; return;}
void inc_count_848(void){inc_count += 848; return;}
void inc_count_849(void){inc_count += 849; return;}
void inc_count_850(void){inc_count += 850; return;}
void inc_count_851(void){inc_count += 851; return;}
void inc_count_852(void){inc_count += 852; return;}
void inc_count_853(void){inc_count += 853; return;}
void inc_count_854(void){inc_count += 854; return;}
void inc_count_855(void){inc_count += 855; return;}
void inc_count_856(void){inc_count += 856; return;}
void inc_count_857(void){inc_count += 857; return;}
void inc_count_858(void){inc_count += 858; return;}
void inc_count_859(void){inc_count += 859; return;}
void inc_count_860(void){inc_count += 860; return;}
void inc_count_861(void){inc_count += 861; return;}
void inc_count_862(void){inc_count += 862; return;}
void inc_count_863(void){inc_count += 863; return;}
void inc_count_864(void){inc_count += 864; return;}
void inc_count_865(void){inc_count += 865; return;}
void inc_count_866(void){inc_count += 866; return;}
void inc_count_867(void){inc_count += 867; return;}
void inc_count_868(void){inc_count += 868; return;}
void inc_count_869(void){inc_count += 869; return;}
void inc_count_870(void){inc_count += 870; return;}
void inc_count_871(void){inc_count += 871; return;}
void inc_count_872(void){inc_count += 872; return;}
void inc_count_873(void){inc_count += 873; return;}
void inc_count_874(void){inc_count += 874; return;}
void inc_count_875(void){inc_count += 875; return;}
void inc_count_876(void){inc_count += 876; return;}
void inc_count_877(void){inc_count += 877; return;}
void inc_count_878(void){inc_count += 878; return;}
void inc_count_879(void){inc_count += 879; return;}
void inc_count_880(void){inc_count += 880; return;}
void inc_count_881(void){inc_count += 881; return;}
void inc_count_882(void){inc_count += 882; return;}
void inc_count_883(void){inc_count += 883; return;}
void inc_count_884(void){inc_count += 884; return;}
void inc_count_885(void){inc_count += 885; return;}
void inc_count_886(void){inc_count += 886; return;}
void inc_count_887(void){inc_count += 887; return;}
void inc_count_888(void){inc_count += 888; return;}
void inc_count_889(void){inc_count += 889; return;}
void inc_count_890(void){inc_count += 890; return;}
void inc_count_891(void){inc_count += 891; return;}
void inc_count_892(void){inc_count += 892; return;}
void inc_count_893(void){inc_count += 893; return;}
void inc_count_894(void){inc_count += 894; return;}
void inc_count_895(void){inc_count += 895; return;}
void inc_count_896(void){inc_count += 896; return;}
void inc_count_897(void){inc_count += 897; return;}
void inc_count_898(void){inc_count += 898; return;}
void inc_count_899(void){inc_count += 899; return;}
void inc_count_900(void){inc_count += 900; return;}
void inc_count_901(void){inc_count += 901; return;}
void inc_count_902(void){inc_count += 902; return;}
void inc_count_903(void){inc_count += 903; return;}
void inc_count_904(void){inc_count += 904; return;}
void inc_count_905(void){inc_count += 905; return;}
void inc_count_906(void){inc_count += 906; return;}
void inc_count_907(void){inc_count += 907; return;}
void inc_count_908(void){inc_count += 908; return;}
void inc_count_909(void){inc_count += 909; return;}
void inc_count_910(void){inc_count += 910; return;}
void inc_count_911(void){inc_count += 911; return;}
void inc_count_912(void){inc_count += 912; return;}
void inc_count_913(void){inc_count += 913; return;}
void inc_count_914(void){inc_count += 914; return;}
void inc_count_915(void){inc_count += 915; return;}
void inc_count_916(void){inc_count += 916; return;}
void inc_count_917(void){inc_count += 917; return;}
void inc_count_918(void){inc_count += 918; return;}
void inc_count_919(void){inc_count += 919; return;}
void inc_count_920(void){inc_count += 920; return;}
void inc_count_921(void){inc_count += 921; return;}
void inc_count_922(void){inc_count += 922; return;}
void inc_count_923(void){inc_count += 923; return;}
void inc_count_924(void){inc_count += 924; return;}
void inc_count_925(void){inc_count += 925; return;}
void inc_count_926(void){inc_count += 926; return;}
void inc_count_927(void){inc_count += 927; return;}
void inc_count_928(void){inc_count += 928; return;}
void inc_count_929(void){inc_count += 929; return;}
void inc_count_930(void){inc_count += 930; return;}
void inc_count_931(void){inc_count += 931; return;}
void inc_count_932(void){inc_count += 932; return;}
void inc_count_933(void){inc_count += 933; return;}
void inc_count_934(void){inc_count += 934; return;}
void inc_count_935(void){inc_count += 935; return;}
void inc_count_936(void){inc_count += 936; return;}
void inc_count_937(void){inc_count += 937; return;}
void inc_count_938(void){inc_count += 938; return;}
void inc_count_939(void){inc_count += 939; return;}
void inc_count_940(void){inc_count += 940; return;}
void inc_count_941(void){inc_count += 941; return;}
void inc_count_942(void){inc_count += 942; return;}
void inc_count_943(void){inc_count += 943; return;}
void inc_count_944(void){inc_count += 944; return;}
void inc_count_945(void){inc_count += 945; return;}
void inc_count_946(void){inc_count += 946; return;}
void inc_count_947(void){inc_count += 947; return;}
void inc_count_948(void){inc_count += 948; return;}
void inc_count_949(void){inc_count += 949; return;}
void inc_count_950(void){inc_count += 950; return;}
void inc_count_951(void){inc_count += 951; return;}
void inc_count_952(void){inc_count += 952; return;}
void inc_count_953(void){inc_count += 953; return;}
void inc_count_954(void){inc_count += 954; return;}
void inc_count_955(void){inc_count += 955; return;}
void inc_count_956(void){inc_count += 956; return;}
void inc_count_957(void){inc_count += 957; return;}
void inc_count_958(void){inc_count += 958; return;}
void inc_count_959(void){inc_count += 959; return;}
void inc_count_960(void){inc_count += 960; return;}
void inc_count_961(void){inc_count += 961; return;}
void inc_count_962(void){inc_count += 962; return;}
void inc_count_963(void){inc_count += 963; return;}
void inc_count_964(void){inc_count += 964; return;}
void inc_count_965(void){inc_count += 965; return;}
void inc_count_966(void){inc_count += 966; return;}
void inc_count_967(void){inc_count += 967; return;}
void inc_count_968(void){inc_count += 968; return;}
void inc_count_969(void){inc_count += 969; return;}
void inc_count_970(void){inc_count += 970; return;}
void inc_count_971(void){inc_count += 971; return;}
void inc_count_972(void){inc_count += 972; return;}
void inc_count_973(void){inc_count += 973; return;}
void inc_count_974(void){inc_count += 974; return;}
void inc_count_975(void){inc_count += 975; return;}
void inc_count_976(void){inc_count += 976; return;}
void inc_count_977(void){inc_count += 977; return;}
void inc_count_978(void){inc_count += 978; return;}
void inc_count_979(void){inc_count += 979; return;}
void inc_count_980(void){inc_count += 980; return;}
void inc_count_981(void){inc_count += 981; return;}
void inc_count_982(void){inc_count += 982; return;}
void inc_count_983(void){inc_count += 983; return;}
void inc_count_984(void){inc_count += 984; return;}
void inc_count_985(void){inc_count += 985; return;}
void inc_count_986(void){inc_count += 986; return;}
void inc_count_987(void){inc_count += 987; return;}
void inc_count_988(void){inc_count += 988; return;}
void inc_count_989(void){inc_count += 989; return;}
void inc_count_990(void){inc_count += 990; return;}
void inc_count_991(void){inc_count += 991; return;}
void inc_count_992(void){inc_count += 992; return;}
void inc_count_993(void){inc_count += 993; return;}
void inc_count_994(void){inc_count += 994; return;}
void inc_count_995(void){inc_count += 995; return;}
void inc_count_996(void){inc_count += 996; return;}
void inc_count_997(void){inc_count += 997; return;}
void inc_count_998(void){inc_count += 998; return;}
void inc_count_999(void){inc_count += 999; return;}
void inc_count_1000(void){inc_count += 1000; return;}
void inc_count_1001(void){inc_count += 1001; return;}
void inc_count_1002(void){inc_count += 1002; return;}
void inc_count_1003(void){inc_count += 1003; return;}
void inc_count_1004(void){inc_count += 1004; return;}
void inc_count_1005(void){inc_count += 1005; return;}
void inc_count_1006(void){inc_count += 1006; return;}
void inc_count_1007(void){inc_count += 1007; return;}
void inc_count_1008(void){inc_count += 1008; return;}
void inc_count_1009(void){inc_count += 1009; return;}
void inc_count_1010(void){inc_count += 1010; return;}
void inc_count_1011(void){inc_count += 1011; return;}
void inc_count_1012(void){inc_count += 1012; return;}
void inc_count_1013(void){inc_count += 1013; return;}
void inc_count_1014(void){inc_count += 1014; return;}
void inc_count_1015(void){inc_count += 1015; return;}
void inc_count_1016(void){inc_count += 1016; return;}
void inc_count_1017(void){inc_count += 1017; return;}
void inc_count_1018(void){inc_count += 1018; return;}
void inc_count_1019(void){inc_count += 1019; return;}
void inc_count_1020(void){inc_count += 1020; return;}
void inc_count_1021(void){inc_count += 1021; return;}
void inc_count_1022(void){inc_count += 1022; return;}
void inc_count_1023(void){inc_count += 1023; return;}

void (*func_ptr[1024])() = {
inc_count_761, 
inc_count_419, 
inc_count_964, 
inc_count_682, 
inc_count_860, 
inc_count_729, 
inc_count_762, 
inc_count_352, 
inc_count_542, 
inc_count_68, 
inc_count_444, 
inc_count_711, 
inc_count_647, 
inc_count_667, 
inc_count_400, 
inc_count_111, 
inc_count_629, 
inc_count_421, 
inc_count_544, 
inc_count_347, 
inc_count_470, 
inc_count_879, 
inc_count_799, 
inc_count_108, 
inc_count_276, 
inc_count_273, 
inc_count_330, 
inc_count_644, 
inc_count_468, 
inc_count_746, 
inc_count_623, 
inc_count_503, 
inc_count_171, 
inc_count_199, 
inc_count_203, 
inc_count_459, 
inc_count_448, 
inc_count_610, 
inc_count_31, 
inc_count_462, 
inc_count_173, 
inc_count_611, 
inc_count_935, 
inc_count_961, 
inc_count_617, 
inc_count_348, 
inc_count_783, 
inc_count_523, 
inc_count_403, 
inc_count_422, 
inc_count_222, 
inc_count_153, 
inc_count_361, 
inc_count_518, 
inc_count_12, 
inc_count_863, 
inc_count_891, 
inc_count_296, 
inc_count_187, 
inc_count_229, 
inc_count_808, 
inc_count_515, 
inc_count_481, 
inc_count_900, 
inc_count_239, 
inc_count_985, 
inc_count_74, 
inc_count_505, 
inc_count_120, 
inc_count_520, 
inc_count_248, 
inc_count_48, 
inc_count_987, 
inc_count_44, 
inc_count_469, 
inc_count_950, 
inc_count_183, 
inc_count_151, 
inc_count_282, 
inc_count_906, 
inc_count_332, 
inc_count_351, 
inc_count_626, 
inc_count_940, 
inc_count_707, 
inc_count_220, 
inc_count_540, 
inc_count_193, 
inc_count_85, 
inc_count_0, 
inc_count_238, 
inc_count_305, 
inc_count_264, 
inc_count_11, 
inc_count_825, 
inc_count_204, 
inc_count_522, 
inc_count_821, 
inc_count_92, 
inc_count_804, 
inc_count_95, 
inc_count_340, 
inc_count_292, 
inc_count_55, 
inc_count_848, 
inc_count_379, 
inc_count_622, 
inc_count_61, 
inc_count_908, 
inc_count_1002, 
inc_count_890, 
inc_count_93, 
inc_count_21, 
inc_count_230, 
inc_count_131, 
inc_count_601, 
inc_count_215, 
inc_count_431, 
inc_count_777, 
inc_count_607, 
inc_count_983, 
inc_count_869, 
inc_count_734, 
inc_count_681, 
inc_count_967, 
inc_count_346, 
inc_count_832, 
inc_count_35, 
inc_count_693, 
inc_count_656, 
inc_count_957, 
inc_count_1018, 
inc_count_672, 
inc_count_725, 
inc_count_1003, 
inc_count_308, 
inc_count_949, 
inc_count_877, 
inc_count_415, 
inc_count_231, 
inc_count_460, 
inc_count_851, 
inc_count_535, 
inc_count_439, 
inc_count_684, 
inc_count_858, 
inc_count_323, 
inc_count_301, 
inc_count_907, 
inc_count_977, 
inc_count_519, 
inc_count_286, 
inc_count_9, 
inc_count_552, 
inc_count_170, 
inc_count_77, 
inc_count_67, 
inc_count_306, 
inc_count_228, 
inc_count_827, 
inc_count_665, 
inc_count_486, 
inc_count_736, 
inc_count_741, 
inc_count_178, 
inc_count_645, 
inc_count_356, 
inc_count_541, 
inc_count_28, 
inc_count_730, 
inc_count_202, 
inc_count_399, 
inc_count_604, 
inc_count_852, 
inc_count_847, 
inc_count_712, 
inc_count_917, 
inc_count_930, 
inc_count_406, 
inc_count_235, 
inc_count_942, 
inc_count_369, 
inc_count_556, 
inc_count_588, 
inc_count_101, 
inc_count_34, 
inc_count_727, 
inc_count_912, 
inc_count_931, 
inc_count_820, 
inc_count_995, 
inc_count_554, 
inc_count_816, 
inc_count_405, 
inc_count_466, 
inc_count_115, 
inc_count_90, 
inc_count_929, 
inc_count_62, 
inc_count_742, 
inc_count_927, 
inc_count_826, 
inc_count_779, 
inc_count_988, 
inc_count_576, 
inc_count_888, 
inc_count_411, 
inc_count_640, 
inc_count_506, 
inc_count_899, 
inc_count_372, 
inc_count_1012, 
inc_count_990, 
inc_count_339, 
inc_count_926, 
inc_count_703, 
inc_count_32, 
inc_count_488, 
inc_count_871, 
inc_count_350, 
inc_count_565, 
inc_count_281, 
inc_count_511, 
inc_count_951, 
inc_count_489, 
inc_count_324, 
inc_count_280, 
inc_count_597, 
inc_count_242, 
inc_count_594, 
inc_count_53, 
inc_count_760, 
inc_count_575, 
inc_count_536, 
inc_count_349, 
inc_count_311, 
inc_count_643, 
inc_count_482, 
inc_count_500, 
inc_count_429, 
inc_count_653, 
inc_count_564, 
inc_count_630, 
inc_count_861, 
inc_count_620, 
inc_count_965, 
inc_count_750, 
inc_count_928, 
inc_count_765, 
inc_count_45, 
inc_count_24, 
inc_count_364, 
inc_count_408, 
inc_count_529, 
inc_count_596, 
inc_count_868, 
inc_count_464, 
inc_count_998, 
inc_count_425, 
inc_count_247, 
inc_count_875, 
inc_count_874, 
inc_count_491, 
inc_count_146, 
inc_count_867, 
inc_count_745, 
inc_count_27, 
inc_count_402, 
inc_count_198, 
inc_count_119, 
inc_count_234, 
inc_count_175, 
inc_count_980, 
inc_count_709, 
inc_count_52, 
inc_count_843, 
inc_count_250, 
inc_count_490, 
inc_count_246, 
inc_count_974, 
inc_count_578, 
inc_count_700, 
inc_count_206, 
inc_count_59, 
inc_count_117, 
inc_count_968, 
inc_count_753, 
inc_count_89, 
inc_count_147, 
inc_count_718, 
inc_count_496, 
inc_count_648, 
inc_count_184, 
inc_count_316, 
inc_count_880, 
inc_count_800, 
inc_count_389, 
inc_count_654, 
inc_count_84, 
inc_count_846, 
inc_count_221, 
inc_count_946, 
inc_count_561, 
inc_count_219, 
inc_count_331, 
inc_count_769, 
inc_count_78, 
inc_count_252, 
inc_count_378, 
inc_count_112, 
inc_count_158, 
inc_count_585, 
inc_count_104, 
inc_count_81, 
inc_count_683, 
inc_count_838, 
inc_count_528, 
inc_count_91, 
inc_count_555, 
inc_count_212, 
inc_count_670, 
inc_count_740, 
inc_count_721, 
inc_count_128, 
inc_count_621, 
inc_count_618, 
inc_count_435, 
inc_count_787, 
inc_count_249, 
inc_count_768, 
inc_count_412, 
inc_count_127, 
inc_count_801, 
inc_count_706, 
inc_count_685, 
inc_count_751, 
inc_count_47, 
inc_count_200, 
inc_count_582, 
inc_count_754, 
inc_count_116, 
inc_count_211, 
inc_count_71, 
inc_count_901, 
inc_count_225, 
inc_count_591, 
inc_count_205, 
inc_count_671, 
inc_count_472, 
inc_count_975, 
inc_count_383, 
inc_count_521, 
inc_count_107, 
inc_count_919, 
inc_count_794, 
inc_count_143, 
inc_count_345, 
inc_count_154, 
inc_count_336, 
inc_count_181, 
inc_count_558, 
inc_count_828, 
inc_count_329, 
inc_count_612, 
inc_count_627, 
inc_count_548, 
inc_count_243, 
inc_count_25, 
inc_count_789, 
inc_count_124, 
inc_count_539, 
inc_count_13, 
inc_count_300, 
inc_count_453, 
inc_count_986, 
inc_count_772, 
inc_count_258, 
inc_count_830, 
inc_count_996, 
inc_count_182, 
inc_count_191, 
inc_count_941, 
inc_count_971, 
inc_count_139, 
inc_count_994, 
inc_count_603, 
inc_count_698, 
inc_count_2, 
inc_count_650, 
inc_count_666, 
inc_count_285, 
inc_count_194, 
inc_count_943, 
inc_count_287, 
inc_count_525, 
inc_count_918, 
inc_count_66, 
inc_count_451, 
inc_count_262, 
inc_count_1007, 
inc_count_944, 
inc_count_807, 
inc_count_40, 
inc_count_755, 
inc_count_562, 
inc_count_260, 
inc_count_662, 
inc_count_724, 
inc_count_343, 
inc_count_1014, 
inc_count_642, 
inc_count_82, 
inc_count_638, 
inc_count_450, 
inc_count_201, 
inc_count_223, 
inc_count_19, 
inc_count_854, 
inc_count_283, 
inc_count_517, 
inc_count_7, 
inc_count_749, 
inc_count_613, 
inc_count_471, 
inc_count_958, 
inc_count_569, 
inc_count_850, 
inc_count_823, 
inc_count_701, 
inc_count_265, 
inc_count_782, 
inc_count_993, 
inc_count_130, 
inc_count_839, 
inc_count_589, 
inc_count_844, 
inc_count_290, 
inc_count_164, 
inc_count_602, 
inc_count_537, 
inc_count_394, 
inc_count_516, 
inc_count_3, 
inc_count_498, 
inc_count_417, 
inc_count_1011, 
inc_count_449, 
inc_count_110, 
inc_count_338, 
inc_count_1017, 
inc_count_88, 
inc_count_635, 
inc_count_232, 
inc_count_271, 
inc_count_509, 
inc_count_587, 
inc_count_633, 
inc_count_382, 
inc_count_267, 
inc_count_487, 
inc_count_676, 
inc_count_756, 
inc_count_269, 
inc_count_137, 
inc_count_72, 
inc_count_142, 
inc_count_866, 
inc_count_49, 
inc_count_747, 
inc_count_668, 
inc_count_922, 
inc_count_708, 
inc_count_872, 
inc_count_530, 
inc_count_413, 
inc_count_150, 
inc_count_253, 
inc_count_148, 
inc_count_103, 
inc_count_796, 
inc_count_702, 
inc_count_818, 
inc_count_174, 
inc_count_795, 
inc_count_39, 
inc_count_836, 
inc_count_678, 
inc_count_96, 
inc_count_705, 
inc_count_359, 
inc_count_141, 
inc_count_714, 
inc_count_577, 
inc_count_161, 
inc_count_970, 
inc_count_185, 
inc_count_948, 
inc_count_856, 
inc_count_159, 
inc_count_326, 
inc_count_574, 
inc_count_814, 
inc_count_898, 
inc_count_743, 
inc_count_367, 
inc_count_452, 
inc_count_58, 
inc_count_661, 
inc_count_909, 
inc_count_713, 
inc_count_192, 
inc_count_360, 
inc_count_304, 
inc_count_992, 
inc_count_397, 
inc_count_18, 
inc_count_8, 
inc_count_289, 
inc_count_811, 
inc_count_443, 
inc_count_494, 
inc_count_573, 
inc_count_664, 
inc_count_380, 
inc_count_865, 
inc_count_393, 
inc_count_921, 
inc_count_437, 
inc_count_797, 
inc_count_649, 
inc_count_608, 
inc_count_442, 
inc_count_579, 
inc_count_268, 
inc_count_275, 
inc_count_862, 
inc_count_353, 
inc_count_135, 
inc_count_16, 
inc_count_357, 
inc_count_609, 
inc_count_531, 
inc_count_824, 
inc_count_583, 
inc_count_169, 
inc_count_5, 
inc_count_155, 
inc_count_86, 
inc_count_514, 
inc_count_829, 
inc_count_882, 
inc_count_344, 
inc_count_938, 
inc_count_38, 
inc_count_226, 
inc_count_418, 
inc_count_473, 
inc_count_916, 
inc_count_210, 
inc_count_434, 
inc_count_696, 
inc_count_401, 
inc_count_923, 
inc_count_328, 
inc_count_79, 
inc_count_883, 
inc_count_438, 
inc_count_483, 
inc_count_595, 
inc_count_121, 
inc_count_297, 
inc_count_815, 
inc_count_455, 
inc_count_309, 
inc_count_313, 
inc_count_172, 
inc_count_427, 
inc_count_214, 
inc_count_920, 
inc_count_758, 
inc_count_385, 
inc_count_636, 
inc_count_65, 
inc_count_10, 
inc_count_485, 
inc_count_166, 
inc_count_396, 
inc_count_386, 
inc_count_802, 
inc_count_806, 
inc_count_497, 
inc_count_492, 
inc_count_217, 
inc_count_295, 
inc_count_423, 
inc_count_697, 
inc_count_50, 
inc_count_658, 
inc_count_679, 
inc_count_991, 
inc_count_428, 
inc_count_126, 
inc_count_959, 
inc_count_677, 
inc_count_447, 
inc_count_333, 
inc_count_534, 
inc_count_272, 
inc_count_133, 
inc_count_876, 
inc_count_947, 
inc_count_479, 
inc_count_325, 
inc_count_433, 
inc_count_513, 
inc_count_4, 
inc_count_1013, 
inc_count_857, 
inc_count_368, 
inc_count_894, 
inc_count_102, 
inc_count_456, 
inc_count_129, 
inc_count_1019, 
inc_count_813, 
inc_count_785, 
inc_count_822, 
inc_count_168, 
inc_count_560, 
inc_count_631, 
inc_count_770, 
inc_count_255, 
inc_count_692, 
inc_count_853, 
inc_count_188, 
inc_count_616, 
inc_count_76, 
inc_count_366, 
inc_count_855, 
inc_count_973, 
inc_count_572, 
inc_count_972, 
inc_count_208, 
inc_count_960, 
inc_count_69, 
inc_count_733, 
inc_count_694, 
inc_count_160, 
inc_count_710, 
inc_count_1, 
inc_count_766, 
inc_count_805, 
inc_count_327, 
inc_count_373, 
inc_count_23, 
inc_count_763, 
inc_count_885, 
inc_count_690, 
inc_count_36, 
inc_count_216, 
inc_count_962, 
inc_count_655, 
inc_count_106, 
inc_count_362, 
inc_count_441, 
inc_count_157, 
inc_count_719, 
inc_count_6, 
inc_count_99, 
inc_count_218, 
inc_count_510, 
inc_count_144, 
inc_count_398, 
inc_count_784, 
inc_count_407, 
inc_count_545, 
inc_count_508, 
inc_count_395, 
inc_count_757, 
inc_count_628, 
inc_count_716, 
inc_count_167, 
inc_count_792, 
inc_count_680, 
inc_count_388, 
inc_count_1009, 
inc_count_1006, 
inc_count_288, 
inc_count_976, 
inc_count_809, 
inc_count_904, 
inc_count_499, 
inc_count_30, 
inc_count_896, 
inc_count_639, 
inc_count_526, 
inc_count_911, 
inc_count_864, 
inc_count_881, 
inc_count_342, 
inc_count_933, 
inc_count_310, 
inc_count_197, 
inc_count_533, 
inc_count_100, 
inc_count_233, 
inc_count_592, 
inc_count_207, 
inc_count_1005, 
inc_count_358, 
inc_count_963, 
inc_count_605, 
inc_count_892, 
inc_count_571, 
inc_count_480, 
inc_count_849, 
inc_count_57, 
inc_count_956, 
inc_count_299, 
inc_count_720, 
inc_count_903, 
inc_count_122, 
inc_count_660, 
inc_count_775, 
inc_count_504, 
inc_count_557, 
inc_count_392, 
inc_count_774, 
inc_count_651, 
inc_count_22, 
inc_count_1010, 
inc_count_776, 
inc_count_619, 
inc_count_563, 
inc_count_365, 
inc_count_722, 
inc_count_254, 
inc_count_341, 
inc_count_177, 
inc_count_14, 
inc_count_842, 
inc_count_196, 
inc_count_244, 
inc_count_384, 
inc_count_831, 
inc_count_370, 
inc_count_132, 
inc_count_767, 
inc_count_80, 
inc_count_493, 
inc_count_495, 
inc_count_1001, 
inc_count_315, 
inc_count_657, 
inc_count_236, 
inc_count_902, 
inc_count_237, 
inc_count_538, 
inc_count_833, 
inc_count_145, 
inc_count_1008, 
inc_count_56, 
inc_count_691, 
inc_count_209, 
inc_count_584, 
inc_count_404, 
inc_count_123, 
inc_count_532, 
inc_count_277, 
inc_count_699, 
inc_count_245, 
inc_count_887, 
inc_count_374, 
inc_count_156, 
inc_count_94, 
inc_count_507, 
inc_count_189, 
inc_count_257, 
inc_count_64, 
inc_count_731, 
inc_count_984, 
inc_count_669, 
inc_count_42, 
inc_count_567, 
inc_count_105, 
inc_count_632, 
inc_count_312, 
inc_count_317, 
inc_count_786, 
inc_count_465, 
inc_count_376, 
inc_count_625, 
inc_count_1022, 
inc_count_886, 
inc_count_999, 
inc_count_803, 
inc_count_652, 
inc_count_432, 
inc_count_641, 
inc_count_1021, 
inc_count_463, 
inc_count_934, 
inc_count_981, 
inc_count_637, 
inc_count_744, 
inc_count_54, 
inc_count_735, 
inc_count_748, 
inc_count_924, 
inc_count_70, 
inc_count_835, 
inc_count_932, 
inc_count_778, 
inc_count_445, 
inc_count_550, 
inc_count_634, 
inc_count_98, 
inc_count_60, 
inc_count_966, 
inc_count_606, 
inc_count_889, 
inc_count_467, 
inc_count_937, 
inc_count_739, 
inc_count_87, 
inc_count_321, 
inc_count_512, 
inc_count_227, 
inc_count_527, 
inc_count_600, 
inc_count_318, 
inc_count_675, 
inc_count_773, 
inc_count_566, 
inc_count_764, 
inc_count_29, 
inc_count_213, 
inc_count_63, 
inc_count_549, 
inc_count_97, 
inc_count_689, 
inc_count_953, 
inc_count_810, 
inc_count_897, 
inc_count_140, 
inc_count_263, 
inc_count_913, 
inc_count_688, 
inc_count_895, 
inc_count_1016, 
inc_count_893, 
inc_count_426, 
inc_count_905, 
inc_count_298, 
inc_count_335, 
inc_count_259, 
inc_count_936, 
inc_count_163, 
inc_count_546, 
inc_count_390, 
inc_count_179, 
inc_count_979, 
inc_count_726, 
inc_count_109, 
inc_count_663, 
inc_count_771, 
inc_count_73, 
inc_count_180, 
inc_count_704, 
inc_count_307, 
inc_count_819, 
inc_count_840, 
inc_count_20, 
inc_count_458, 
inc_count_391, 
inc_count_615, 
inc_count_695, 
inc_count_728, 
inc_count_586, 
inc_count_474, 
inc_count_1000, 
inc_count_270, 
inc_count_409, 
inc_count_478, 
inc_count_279, 
inc_count_261, 
inc_count_590, 
inc_count_375, 
inc_count_715, 
inc_count_162, 
inc_count_256, 
inc_count_190, 
inc_count_553, 
inc_count_551, 
inc_count_817, 
inc_count_568, 
inc_count_759, 
inc_count_114, 
inc_count_371, 
inc_count_978, 
inc_count_291, 
inc_count_793, 
inc_count_834, 
inc_count_687, 
inc_count_319, 
inc_count_461, 
inc_count_294, 
inc_count_798, 
inc_count_646, 
inc_count_1023, 
inc_count_37, 
inc_count_266, 
inc_count_186, 
inc_count_717, 
inc_count_997, 
inc_count_732, 
inc_count_812, 
inc_count_859, 
inc_count_240, 
inc_count_969, 
inc_count_952, 
inc_count_989, 
inc_count_355, 
inc_count_224, 
inc_count_41, 
inc_count_884, 
inc_count_614, 
inc_count_334, 
inc_count_781, 
inc_count_446, 
inc_count_125, 
inc_count_454, 
inc_count_410, 
inc_count_547, 
inc_count_837, 
inc_count_17, 
inc_count_788, 
inc_count_322, 
inc_count_845, 
inc_count_914, 
inc_count_484, 
inc_count_387, 
inc_count_1015, 
inc_count_593, 
inc_count_780, 
inc_count_337, 
inc_count_476, 
inc_count_475, 
inc_count_136, 
inc_count_477, 
inc_count_430, 
inc_count_915, 
inc_count_939, 
inc_count_414, 
inc_count_134, 
inc_count_75, 
inc_count_570, 
inc_count_624, 
inc_count_543, 
inc_count_870, 
inc_count_354, 
inc_count_502, 
inc_count_873, 
inc_count_673, 
inc_count_302, 
inc_count_118, 
inc_count_241, 
inc_count_559, 
inc_count_436, 
inc_count_293, 
inc_count_314, 
inc_count_83, 
inc_count_320, 
inc_count_416, 
inc_count_43, 
inc_count_954, 
inc_count_524, 
inc_count_841, 
inc_count_26, 
inc_count_377, 
inc_count_723, 
inc_count_1020, 
inc_count_955, 
inc_count_752, 
inc_count_46, 
inc_count_599, 
inc_count_165, 
inc_count_176, 
inc_count_33, 
inc_count_149, 
inc_count_381, 
inc_count_580, 
inc_count_15, 
inc_count_1004, 
inc_count_791, 
inc_count_152, 
inc_count_878, 
inc_count_363, 
inc_count_738, 
inc_count_501, 
inc_count_251, 
inc_count_278, 
inc_count_686, 
inc_count_945, 
inc_count_138, 
inc_count_284, 
inc_count_910, 
inc_count_420, 
inc_count_737, 
inc_count_674, 
inc_count_598, 
inc_count_303, 
inc_count_925, 
inc_count_195, 
inc_count_659, 
inc_count_790, 
inc_count_274, 
inc_count_581, 
inc_count_424, 
inc_count_51, 
inc_count_982, 
inc_count_457, 
inc_count_113, 
inc_count_440
};

int main()
{
    // for (size_t i = 0; i < 1000000; ++i)
    // {
    //     int n = fast_rand() & 0x3ff;
    //     for (size_t j = 0; j < n; ++j)
    //     {
    //         func_ptr[j]();
    //     }
    // }


    for (register size_t i = 0; i < 100000000; ++i)
    {
        func_ptr[i & 0x3ff]();
    }

    printf("%d\n", inc_count);

    return 0;
}
