/*
   'src_ipsec_pgpIPsecNATT.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Wed Jan 15 12:08:55 2014
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb355) || ! defined( bb356)
#define bb354 1
#define bb330 1
#else
#define bb352 bb334
#define bb351 1
#define bb340 1
#endif
#define bb347 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbs bbl bbf, *bb1;bba bbs bbe bbq, *bb94;bba bb135 bb123, *bb332;
bba bbs bbl bb39, *bb72;bba bbs bb135 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb89;
#ifdef bb311
bba bbd bb60, *bb122;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb120
#define bb120
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb119
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
bba bb113 bb249;
#else
bba bbe bbu, *bb134, *bb236;
#define bb201 1
#define bb202 0
bba bb270 bb211, *bb268, *bb234;bba bbe bb207, *bb217, *bb212;bba bbs
bbq, *bb94, *bb223;bba bb6 bb274, *bb265;bba bbs bb6 bb280, *bb254;
bba bb6 bb116, *bb285;bba bbs bb6 bb63, *bb264;bba bb63 bb242, *bb229
;bba bb63 bb267, *bb235;bba bb116 bb113, *bb240;bba bb227 bb210;bba
bb255 bb123;bba bb245 bb83;bba bb115 bb118;bba bb115 bb272;
#ifdef bb226
bba bb288 bb39, *bb72;bba bb241 bbk, *bb59;bba bb253 bbd, *bb29;bba
bb208 bb56, *bb112;
#else
bba bb224 bb39, *bb72;bba bb291 bbk, *bb59;bba bb238 bbd, *bb29;bba
bb262 bb56, *bb112;
#endif
bba bb39 bbf, *bb1, *bb271;bba bbk bb228, *bb251, *bb277;bba bbk bb231
, *bb260, *bb225;bba bbd bb60, *bb122, *bb248;bba bb83 bb36, *bb279, *
bb292;bba bbd bb232, *bb213, *bb243;bba bb118 bb281, *bb269, *bb275;
bba bb56 bb222, *bb289, *bb247;
#define bb140 bbb
bba bbb*bb205, *bb77;bba bbh bbb*bb290;bba bbl bb252;bba bbl*bb259;
bba bbh bbl*bb82;
#if defined( bb119)
bba bbe bb114;
#endif
bba bb114 bb20;bba bb20*bb215;bba bbh bb20*bb187;
#if defined( bb282) || defined( bb209)
bba bb20 bb37;bba bb20 bb111;
#else
bba bbl bb37;bba bbs bbl bb111;
#endif
bba bbh bb37*bb278;bba bb37*bb246;bba bb60 bb257, *bb261;bba bbb*
bb106;bba bb106*bb258;
#define bb263( bb35) bbi bb35##__ { bbe bb230; }; bba bbi bb35##__  * \
 bb35
bba bbi{bb36 bb191,bb216,bb284,bb276;}bb266, *bb220, *bb273;bba bbi{
bb36 bb8,bb193;}bb244, *bb250, *bb237;bba bbi{bb36 bb206,bb221;}bb286
, *bb233, *bb214;
#endif
bba bbh bbf*bb89;
#endif
bba bbf bb103;
#define IN
#define OUT
#ifdef _DEBUG
#define bb145( bbc) bb32( bbc)
#else
#define bb145( bbc) ( bbb)( bbc)
#endif
bba bbe bb161, *bb173;
#define bb287 0
#define bb315 1
#define bb299 2
#define bb319 3
#define bb357 4
bba bbe bb349;bba bbb*bb121;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb31 bb341
#define bb43 bb338
bba bbs bb6 bb31;bba bb6 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb128(bb31 bb47);bbb bb109(bbb* );bbb*bb137(bb31 bb159,bb31 bb47);
#else
#define bb128( bbc) bb146(1, bbc, bb139)
#define bb109( bbc) bb348( bbc)
#define bb137( bbc, bbn) bb146( bbc, bbn, bb139)
#endif
#ifdef _WIN32
#define bb32( bbc) bb339( bbc)
#else
#ifdef _DEBUG
bbe bb144(bbh bbl*bb95,bbh bbl*bb25,bbs bb239);
#define bb32( bbc) ( bbb)(( bbc) || ( bb144(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb32( bbc) (( bbb)0)
#endif
#endif
bb43 bb302(bb43*bb320);
#ifndef _WIN32
bbe bb328(bbh bbl*bbg);bbe bb323(bbh bbl*bb19,...);
#endif
#ifdef _WIN32
bba bb343 bb97;
#define bb141( bbc) bb345( bbc)
#define bb143( bbc) bb358( bbc)
#define bb133( bbc) bb353( bbc)
#define bb132( bbc) bb333( bbc)
#else
bba bb350 bb97;
#define bb141( bbc) ( bbb)(  *  bbc = bb344( bbc))
#define bb143( bbc) (( bbb)0)
#define bb133( bbc) bb337( bbc)
#define bb132( bbc) bb342( bbc)
#endif
bba bb10{bb403,bb1504,}bb295;bbk bb1215(bb295 bb712,bbh bbf*bb446);
bbd bb544(bb295 bb712,bbh bbf*bb446);bbb bb1173(bbk bb159,bb295 bb550
,bbf bb441[2 ]);bbb bb975(bbd bb159,bb295 bb550,bbf bb441[4 ]);
#define bb956 bb53(0x0800)
#define bb1140 bb53(0x0806)
#define bb937 bb53(0x01f4)
#define bb939 bb53(0x1194)
#define bb1134 bb53(0x4000)
#define bb1117 bb53(0x2000)
#define bb1108 bb53(0x1FFF)
#define bb1067( bb8) (( bb8) & bb53(0x2000 | 0x1FFF))
#define bb993( bb8) ((( bb195( bb8)) & 0x1FFF) << 3)
#define bb979( bb8) ((( bb8) & bb53(0x1FFF)) == 0)
#define bb496( bb8) (( bb8) & bb53(0x2000))
#define bb988( bb8) (!( bb496( bb8)))
#pragma pack(push, 1)
bba bbi{bbf bb369[6 ];bbf bb1008[6 ];bbk bb375;}bb365, *bb376;bba bbi{
bbf bb444[6 ];bbk bb375;}bb1084, *bb1093;bba bbi{bbf bb938:4 ;bbf bb1089
:4 ;bbf bb1055;bbk bb367;bbk bb892;bbk bb566;bbf bb1002;bbf bb283;bbk
bb614;bbd bb309;bbd bb203;}bb326, *bb318;bba bbi{bbk bb1035;bbk bb1083
;bbf bb1038;bbf bb1046;bbk bb1063;bbf bb1082[6 ];bbd bb1039;bbf bb1092
[6 ];bbd bb1090;}bb1075, *bb1064;
#pragma pack(pop)
bba bbi{bbk bb218;bbk bb424;bbk bb1005;bbk bb322;}bb415, *bb346;bba
bbi{bbk bb218;bbk bb591;bbd bb543;bbd bb923;bbf bb92;bbf bb172;bbk
bb158;bbk bb322;bbk bb1018;}bb483, *bb313;bba bbi{bbf bb1078;bbf
bb1070;bbf bb1088;bbf bb1040;bbd bb1065;bbk bb1050;bbk bb373;bbd
bb1033;bbd bb1079;bbd bb1066;bbd bb1062;bbf bb1085[16 ];bbf bb1052[64 ]
;bbf bb25[128 ];bbf bb1034[64 ];}bb1045, *bb1074;bba bbi{bbd bb309;bbd
bb203;bbf bb918;bbf bb283;bbk bb914;}bb610, *bb560;
#if defined( _WIN32)
#define bb53( bbc) (((( bbc) & 0XFF00) >> 8) | ((( bbc) & 0X00FF) <<  \
8))
#define bb195( bbc) ( bb53( bbc))
#define bb445( bbc) (((( bbc) & 0XFF000000) >> 24) | ((( bbc) &  \
0X00FF0000) >> 8) | ((( bbc) & 0X0000FF00) << 8) | ((( bbc) &  \
0X000000FF) << 24))
#define bb493( bbc) ( bb445( bbc))
#endif
bbk bb928(bbh bbb*bb297);bbk bb859(bbh bbb*bb510,bbe bb22);bba bb83
bb4;bb10{bb98=0 ,bb364=-12000 ,bb336=-11999 ,bb379=-11998 ,bb658=-11997 ,
bb811=-11996 ,bb717=-11995 ,bb871=-11994 ,bb780=-11992 ,bb713=-11991 ,
bb834=-11990 ,bb730=-11989 ,bb837=-11988 ,bb645=-11987 ,bb900=-11986 ,
bb752=-11985 ,bb687=-11984 ,bb813=-11983 ,bb648=-11982 ,bb844=-11981 ,
bb904=-11980 ,bb667=-11979 ,bb801=-11978 ,bb851=-11977 ,bb578=-11976 ,
bb782=-11975 ,bb762=-11960 ,bb803=-11959 ,bb677=-11500 ,bb725=-11499 ,
bb849=-11498 ,bb791=-11497 ,bb878=-11496 ,bb772=-11495 ,bb898=-11494 ,
bb769=-11493 ,bb843=-11492 ,bb887=-11491 ,bb865=-11490 ,bb727=-11489 ,
bb660=-11488 ,bb866=-11487 ,bb873=-11486 ,bb655=-11485 ,bb638=-11484 ,
bb905=-11483 ,bb830=-11482 ,bb617=-11481 ,bb691=-11480 ,bb757=-11479 ,
bb637=-11478 ,bb653=-11477 ,bb759=-11476 ,bb864=-11475 ,bb862=-11474 ,
bb706=-11473 ,bb695=-11472 ,bb635=-11460 ,bb840=-11450 ,bb729=-11449 ,
bb698=-11448 ,bb726=-11447 ,bb847=-11446 ,bb624=-11445 ,bb894=-11444 ,
bb701=-11443 ,bb694=-11440 ,bb781=-11439 ,bb774=-11438 ,bb793=-11437 ,
bb659=-11436 ,bb746=-11435 ,bb845=-11420 ,bb522=-11419 ,bb567=-11418 ,
bb673=-11417 ,bb627=-11416 ,bb775=-11415 ,bb788=-11414 ,bb724=-11413 ,
bb854=-11412 ,bb715=-11411 ,bb665=-11410 ,bb623=-11409 ,bb700=-11408 ,
bb897=-11407 ,bb907=-11406 ,bb688=-11405 ,bb666=-11404 ,bb639=-11403 ,
bb754=-11402 ,bb764=-11401 ,bb664=-11400 ,bb880=-11399 ,bb883=-11398 ,
bb756=-11397 ,bb670=-11396 ,bb875=-11395 ,bb671=-11394 ,bb827=-11393 ,
bb800=-11392 ,bb678=-11391 ,bb735=-11390 ,bb720=-11389 ,bb767=-11388 ,
bb903=-11387 ,bb901=-11386 ,bb733=-11385 ,bb690=-11384 ,bb829=-11383 ,
bb642=-11382 ,bb768=-11381 ,bb744=-11380 ,bb777=-11379 ,bb620=-11378 ,
bb745=-11377 ,bb795=-11376 ,bb749=-11375 ,bb650=-11374 ,bb841=-11373 ,
bb672=-11372 ,bb846=-11371 ,bb797=-11370 ,bb771=-11369 ,bb835=-11368 ,
bb750=-11367 ,bb852=-11366 ,bb751=-11365 ,bb842=-11364 ,bb807=-11363 ,
bb394=-11350 ,bb714=bb394,bb702=-11349 ,bb902=-11348 ,bb802=-11347 ,bb693
=-11346 ,bb640=-11345 ,bb884=-11344 ,bb805=-11343 ,bb708=-11342 ,bb848=-
11341 ,bb753=-11340 ,bb689=-11339 ,bb395=-11338 ,bb679=-11337 ,bb748=bb395
,bb705=-11330 ,bb810=-11329 ,bb681=-11328 ,bb785=-11327 ,bb761=-11326 ,
bb643=-11325 ,bb814=-11324 ,bb634=-11320 ,bb822=-11319 ,bb858=-11318 ,
bb737=-11317 ,bb618=-11316 ,bb839=-11315 ,bb821=-11314 ,bb716=-11313 ,
bb633=-11312 ,bb893=-11300 ,bb778=-11299 ,bb790=-11298 ,bb692=-11297 ,
bb668=-11296 ,bb863=-11295 ,bb819=-11294 ,bb649=-11293 ,bb685=-11292 ,
bb886=-11291 ,bb809=-11290 ,bb787=-11289 ,bb879=-11288 ,bb630=-11287 ,
bb789=-11286 ,bb647=-11285 ,bb816=-11284 ,bb806=-11283 ,bb704=-11282 ,
bb663=-11281 ,bb703=-11280 ,bb675=-11279 ,bb731=-11250 ,bb784=-11249 ,
bb652=-11248 ,bb741=-11247 ,bb654=-11246 ,bb891=-11245 ,bb696=-11244 ,
bb747=-11243 ,bb619=-11242 ,bb860=-11240 ,bb626=-11239 ,bb738=-11238 ,
bb783=-11237 ,bb684=-11150 ,bb686=-11100 ,bb831=-11099 ,bb836=-11098 ,
bb697=-11097 ,bb622=-11096 ,bb786=-11095 ,bb632=-11094 ,bb877=-11093 ,
bb828=-11092 ,bb896=-11091 ,bb798=-11090 ,bb874=-11089 ,bb832=-11088 ,
bb908=-11087 ,bb850=-11086 ,bb763=-11085 ,bb776=-11050 ,bb656=-11049 ,
bb876=-10999 ,bb758=-10998 ,bb680=-10997 ,bb743=-10996 ,bb888=-10995 ,
bb669=-10994 ,bb870=-10993 ,bb899=-10992 ,bb766=-10991 ,bb683=-10990 ,
bb616=-10989 ,bb794=-10988 ,bb710=-10979 ,bb856=-10978 ,bb629=-10977 ,
bb885=-10976 ,bb722=-10975 ,bb799=-10974 ,};bba bbi bb452{bb1 bb74;bbd
bb125;bbd bb181;bbi bb452*bb93;}bbx;bb4 bb472(bbx*bb824,bbd bb910,bbx
 *bb857,bbd bb895,bbd bb539);bb4 bb524(bbx*bbj,bbd bb92,bbh bbb*bb95,
bbd bb47);bb4 bb576(bbx*bbj,bbd bb92,bbb*bb130,bbd bb47);bbu bb823(
bbx*bbj,bbd bb92,bbh bbb*bb95,bbd bb47);bb4 bb596(bbx*bb87,bbf bb102,
bbx*bb58);bb4 bb674(bbx*bb87,bbu bb177,bbf*bb408);bb4 bb940(bbx*bb58,
bbf*bb397);bb4 bb958(bbh bbf*bb397,bbx*bb58);bb4 bb541(bbx*bb51,bbf
bb102,bbd*bb944);bb4 bb929(bbx*bb87,bbf bb102,bbf bb408,bbx*bb58);bbd
bb517(bbx*bb51);bbk bb536(bbx*bb51);bbb bb526(bbk bb151,bbx*bb51);bbb
bb545(bbx*bb51);bbb bb978(bbx*bb51,bbd*bb26);bbb bb1001(bbx*bb51,bbd*
bb26);bbb bb991(bbx*bb51,bbd bb26);bbb bb925(bbx*bb51,bbd bb26);bbb
bb984(bbx*bb51);bbu bb1016(bbf*bb51);bb10{bb1137=-5000 ,bb1105=-4000 ,
bb998=-4999 ,bb990=-4998 ,bb989=-4997 ,bb981=-4996 ,bb1094=-4995 ,bb1087=-
4994 ,bb1098=-4993 ,bb1014=-4992 ,bb1080=-4991 };bb4 bb1133(bb4 bb1127,
bbd bb1116,bbl*bb1100);bba bbi bb1010*bb1026;bba bbi bb1029*bb1006;
bba bbi bb994*bb1027;bba bbi bb1028*bb1015;bba bbi bb999*bb1022;bba
bbi bb1019*bb987;bba bb10{bb552=0 ,bb594=1 ,bb584=2 ,bb755=3 ,bb581=4 ,
bb561=5 ,bb575=6 ,bb563=7 ,bb586=9 ,}bb418;bba bb10{bb601=0 ,bb992,bb603,
bb1012,bb909,bb921,bb920,bb919,bb927,bb926,bb913,}bb515;bbu bb2135(
bbx*bb298);bbu bb2193(bbx*bb298);bb4 bb2060(bbx*bb298,bbd*bb104);bb4
bb2010(bbx*bb298,bbd*bb104);bb4 bb1846(bbx*bb87,bbx*bb58,bbu bb1061,
bbk bb2120,bbk bb1812);bb4 bb1861(bbx*bb87,bbx*bb58,bbu bb1061);bb41
bbf bb2022[8 ]={0 };bbu bb2135(bbx*bb298){bbd bb368;bb4 bb18=bb541(
bb298,17 ,&bb368);bb2((bb18)==bb98)&&bb536(bb298)==bb368+bb12(bb415)+1
;}bbu bb2193(bbx*bb298){bbd bb368;bb4 bb18=bb541(bb298,17 ,&bb368);bb2
((bb18)==bb98)&&bb823(bb298,bb368+bb12(bb415),bb2022,bb12(bb2022));}
bb4 bb2060(bbx*bb298,bbd*bb104){bbd bb368;bbf bb74[8 ];bb4 bb18; *
bb104=0 ;bb18=bb541(bb298,17 ,&bb368);bbm(((bb18)!=bb98))bb2 bb18;bb368
+=bb12(bb415);bbm(!bb823(bb298,bb368,bb2022,bb12(bb2022)))bb2 bb18;
bb368+=8 ;bbm(bb298->bb125<bb368+8 )bb2 bb18;bb576(bb298,bb368,bb74,8 );
 *bb104=bb544(bb403,&bb74[0 ]);bb2 bb18;}bb4 bb2010(bbx*bb298,bbd*
bb104){bbd bb368;bbf bb74[8 ];bb4 bb18; *bb104=0 ;bb18=bb541(bb298,17 ,&
bb368);bbm(((bb18)!=bb98))bb2 bb18;bb368+=bb12(bb415);bbm(bb298->
bb125<bb368+8 )bb2 bb18;bb576(bb298,bb368,bb74,8 ); *bb104=bb544(bb403,
&bb74[0 ]);bb2 bb18;}bb4 bb1846(bbx*bb87,bbx*bb58,bbu bb1061,bbk bb2120
,bbk bb1812){bb4 bb18=bb98;bbd bb1184;bbk bb151;bb415 bb2097;bb151=
bb536(bb87);bb1184=bb517(bb87);bb18=bb596(bb87,17 ,bb58);bbm(((bb18)!=
bb98))bb100 bb1832;bb18=bb472(bb87,bb1184,bb58,bb1184+bb12(bb415)+(
bb1061?8 :0 ),bb151-bb1184);bbm(((bb18)!=bb98))bb100 bb1832;bb2097.
bb218=bb2120;bb2097.bb424=bb1812;bb2097.bb1005=bb53(bb151-bb1184+bb12
(bb415)+(bb1061?8 :0 ));bb2097.bb322=0 ;bb18=bb524(bb58,bb1184,&bb2097,
bb12(bb415));bbm(((bb18)!=bb98))bb100 bb1832;bb151+=bb12(bb415);bbm(
bb1061){bb18=bb524(bb58,bb1184+bb12(bb415),bb2022,bb12(bb2022));bbm((
(bb18)!=bb98))bb100 bb1832;bb151+=8 ;}bb526(bb151,bb58);bb545(bb58);
bb1832:bb2 bb18;}bb4 bb1861(bbx*bb87,bbx*bb58,bbu bb1061){bb4 bb18=
bb98;bbd bb1184;bbk bb151;bbf bb408;bb151=bb536(bb87);bb1184=bb517(
bb87);bbm(bb151<bb1184+bb12(bb415)+(bb1061?8 :0 )){bb18=bb1014;bb100
bb1832;}bb674(bb87,0 ,&bb408);bbm(bb408==17 ){bb18=bb596(bb87,50 ,bb58);
bbm(((bb18)!=bb98))bb100 bb1832;bb18=bb472(bb87,bb1184+bb12(bb415)+(
bb1061?8 :0 ),bb58,bb1184,bb151-bb1184-bb12(bb415)-(bb1061?8 :0 ));bbm(((
bb18)!=bb98))bb100 bb1832;bb151-=(bb12(bb415)+(bb1061?8 :0 ));bb526(
bb151,bb58);bb545(bb58);}bb54{bb18=bb472(bb87,0 ,bb58,0 ,bb151);}bb1832
:bb2 bb18;}
