/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.5 and the Signal Processing Toolbox 7.0.
 * Generated on: 20-Jun-2017 18:04:50
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 513
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\MATLAB\MATLAB Production Server\R2015a\extern\include\tmwtypes.h 
 */
const int f852L = 513;
const double f852[513] = {
                   0,-5.191960668848e-09,-3.90499809171e-08,-9.403737777213e-08,
  -1.004263177348e-07,3.707589293186e-08,3.468316035601e-07,7.039531421386e-07,
  8.335442086597e-07,4.468863023307e-07,-5.351419654058e-07,-1.803512039125e-06,
  -2.679166522015e-06,-2.397965799811e-06,-5.748931373803e-07,2.390725736215e-06,
  5.250108016469e-06,6.338014777361e-06,4.403896479235e-06,-5.294930909841e-07,
  -6.774164674145e-06,-1.141143861559e-05,-1.153549788253e-05,-5.82727480582e-06,
  4.322886907537e-06,1.486456777122e-05,2.055915049698e-05, 1.74158529316e-05,
  5.021096621933e-06,-1.247734028256e-05,-2.751721883685e-05,-3.223410656927e-05,
  -2.232963440657e-05,1.234534013576e-07,2.654423189164e-05,4.491096616344e-05,
  4.505091066373e-05,2.389924123174e-05,-1.187069846185e-05,-4.754719117083e-05,
  -6.623668938439e-05,-5.664043264388e-05,-1.925630651378e-05,3.221087444555e-05,
  7.556279832121e-05,8.949575855042e-05,6.377649414492e-05,5.450831588446e-06,
  -6.23558699715e-05,-0.0001093649659926,-0.0001114760986141,-6.27126914523e-05,
  1.999836293695e-05,0.0001022351650645,0.0001462180456426,0.0001279600894691,
  4.972470492028e-05,-5.847615866925e-05,-0.0001500875464366,-0.0001819004034911,
  -0.0001341915125606,-2.181463790765e-05,0.0001096631440014,0.0002022536605478,
   0.000211021077006,0.0001255888493338,-2.250828372593e-05,-0.0001710675407749,
  -0.0002532673995088,-0.0002276558980749,-9.864310747396e-05,8.249490917626e-05,
  0.0002378260502572,0.0002963168944197,0.0002262780004877, 5.18866658034e-05,
  -0.0001546220560603,-0.0003028897192081,-0.0003240979124586,-0.0002028963694425,
  1.322550937951e-05,0.0002324139751348,0.0003576730514229,0.0003300170677804,
  0.0001562539303275,-9.170922511678e-05,-0.0003067552137921,-0.0003931821668155,
  -0.000309627094651,-8.888499920059e-05,0.0001749077318101,0.0003667794136863,
  0.0004015561096309,0.0002621029180736,7.802934291894e-06,-0.0002509686972688,
  -0.0004013389141201,-0.0003778646263094,-0.0001915092367626,7.540663731042e-05,
  0.0003060308647872, 0.000400959611818,0.0003219201129486,0.0001075819365056,
  -0.0001452665183183,-0.0003261100185144,-0.0003600774781784,-0.000239797411312,
  -2.575868864008e-05,0.0001839551366729,0.0002995523565049,0.0002792547680233,
  0.0001447287320736,-3.374460367249e-05,-0.0001736901031482,-0.0002197964884544,
  -0.0001670043987236,-5.706479909845e-05,4.790559691776e-05,9.977305421494e-05,
    8.8073627558e-05,4.082807116955e-05,3.073612686551e-06,6.138832245096e-06,
  4.602647977256e-05,8.439899332701e-05,7.288940805039e-05,-1.248275164925e-05,
  -0.0001473579980647,-0.0002621958099949,-0.0002751943465073,-0.0001403850967881,
  0.0001148480098251,0.0003867176595325,0.0005348389880022,0.0004508321501274,
  0.0001235150803928,-0.0003350294181337,-0.0007232283377013,-0.0008362098366746,
  -0.0005686000219164,1.587104163083e-05,0.0006882473888007, 0.001140767646229,
   0.001124886510455,0.0005801303170509,-0.0003105209966224, -0.00117534553429,
  -0.001606296144849,-0.001347902941885,-0.0004365828654482,0.0007818942393348,
    0.00177897268476, 0.002069997432285, 0.001444926443608,9.502494322825e-05,
  -0.001434526541659, -0.00246139115342,-0.002467691512526,-0.001354294966733,
  0.0004746405022102, 0.002251460129093,  0.00316450876509, 0.002725609719535,
   0.001020436299789,-0.001283030474871,-0.003191539261679,-0.003812520302205,
  -0.002767307427349,-0.0004019258423378, 0.002315844595362, 0.004189239758949,
   0.004317247333808, 0.002522166383292,-0.0005207583119707,-0.003530531888191,
  -0.005157457920207,-0.004585916198843,-0.001934647199803, 0.001738817422618,
   0.004855804843459, 0.005993350986912, 0.004530755983646,0.0009732399137494,
  -0.003211048592659, -0.00619446925793,-0.006586934723296,-0.004079481392103,
  0.0003620345564133, 0.004862916397865, 0.007429668436456,  0.00683175237696,
   0.003185498238907,  -0.0020346710605, -0.00658929433989,-0.008434216816391,
  -0.006636587091112,-0.001836572396405, 0.003970175038929, 0.008260984985435,
    0.00908227412282, 0.005936948486277,6.076192714407e-05,-0.006058569124322,
  -0.009734668332641,-0.009262244537124,-0.004704965421044, 0.002071367506067,
   0.008161034879472,  0.01086547271871, 0.008889530385298, 0.002956385971054,
  -0.004448858550562, -0.01012031979481, -0.01152097279738,-0.007917669315168,
  -0.0007536260301272, 0.006926951546856,  0.01177405518845,  0.01159515132659,
   0.006346462210051,-0.001795800159592,-0.009337765025742, -0.01296971947147,
   -0.01102075912921,-0.004225957568612, 0.004545632563506,  0.01150417390528,
    0.01357970173233,  0.00977859401865, 0.001655573703683,-0.007321613584999,
   -0.01325556166642, -0.01351481642216, -0.00790249378371, 0.001221832623127,
   0.009935710245803,  0.01444383295807,  0.01273471324725, 0.005479274255336,
  -0.004230566207307, -0.01220244192561,   -0.014957967263, -0.01125391387036,
  -0.002643392077847, 0.007176423469913,  0.01395564684849,  0.01473549313489,
   0.009142659393903,-0.0004332926377147,  -0.0098633542277, -0.01506391332981,
   -0.01376956033838,-0.006522317781704, 0.003555710053419,  0.01211075183892,
    0.01544300487066,  0.01211075183892, 0.003555710053419,-0.006522317781704,
   -0.01376956033838, -0.01506391332981,  -0.0098633542277,-0.0004332926377147,
   0.009142659393903,  0.01473549313489,  0.01395564684849, 0.007176423469913,
  -0.002643392077847, -0.01125391387036,   -0.014957967263, -0.01220244192561,
  -0.004230566207307, 0.005479274255336,  0.01273471324725,  0.01444383295807,
   0.009935710245803, 0.001221832623127, -0.00790249378371, -0.01351481642216,
   -0.01325556166642,-0.007321613584999, 0.001655573703683,  0.00977859401865,
    0.01357970173233,  0.01150417390528, 0.004545632563506,-0.004225957568612,
   -0.01102075912921, -0.01296971947147,-0.009337765025742,-0.001795800159592,
   0.006346462210051,  0.01159515132659,  0.01177405518845, 0.006926951546856,
  -0.0007536260301272,-0.007917669315168, -0.01152097279738, -0.01012031979481,
  -0.004448858550562, 0.002956385971054, 0.008889530385298,  0.01086547271871,
   0.008161034879472, 0.002071367506067,-0.004704965421044,-0.009262244537124,
  -0.009734668332641,-0.006058569124322,6.076192714407e-05, 0.005936948486277,
    0.00908227412282, 0.008260984985435, 0.003970175038929,-0.001836572396405,
  -0.006636587091112,-0.008434216816391, -0.00658929433989,  -0.0020346710605,
   0.003185498238907,  0.00683175237696, 0.007429668436456, 0.004862916397865,
  0.0003620345564133,-0.004079481392103,-0.006586934723296, -0.00619446925793,
  -0.003211048592659,0.0009732399137494, 0.004530755983646, 0.005993350986912,
   0.004855804843459, 0.001738817422618,-0.001934647199803,-0.004585916198843,
  -0.005157457920207,-0.003530531888191,-0.0005207583119707, 0.002522166383292,
   0.004317247333808, 0.004189239758949, 0.002315844595362,-0.0004019258423378,
  -0.002767307427349,-0.003812520302205,-0.003191539261679,-0.001283030474871,
   0.001020436299789, 0.002725609719535,  0.00316450876509, 0.002251460129093,
  0.0004746405022102,-0.001354294966733,-0.002467691512526, -0.00246139115342,
  -0.001434526541659,9.502494322825e-05, 0.001444926443608, 0.002069997432285,
    0.00177897268476,0.0007818942393348,-0.0004365828654482,-0.001347902941885,
  -0.001606296144849, -0.00117534553429,-0.0003105209966224,0.0005801303170509,
   0.001124886510455, 0.001140767646229,0.0006882473888007,1.587104163083e-05,
  -0.0005686000219164,-0.0008362098366746,-0.0007232283377013,-0.0003350294181337,
  0.0001235150803928,0.0004508321501274,0.0005348389880022,0.0003867176595325,
  0.0001148480098251,-0.0001403850967881,-0.0002751943465073,-0.0002621958099949,
  -0.0001473579980647,-1.248275164925e-05,7.288940805039e-05,8.439899332701e-05,
  4.602647977256e-05,6.138832245096e-06,3.073612686551e-06,4.082807116955e-05,
    8.8073627558e-05,9.977305421494e-05,4.790559691776e-05,-5.706479909845e-05,
  -0.0001670043987236,-0.0002197964884544,-0.0001736901031482,-3.374460367249e-05,
  0.0001447287320736,0.0002792547680233,0.0002995523565049,0.0001839551366729,
  -2.575868864008e-05,-0.000239797411312,-0.0003600774781784,-0.0003261100185144,
  -0.0001452665183183,0.0001075819365056,0.0003219201129486, 0.000400959611818,
  0.0003060308647872,7.540663731042e-05,-0.0001915092367626,-0.0003778646263094,
  -0.0004013389141201,-0.0002509686972688,7.802934291894e-06,0.0002621029180736,
  0.0004015561096309,0.0003667794136863,0.0001749077318101,-8.888499920059e-05,
  -0.000309627094651,-0.0003931821668155,-0.0003067552137921,-9.170922511678e-05,
  0.0001562539303275,0.0003300170677804,0.0003576730514229,0.0002324139751348,
  1.322550937951e-05,-0.0002028963694425,-0.0003240979124586,-0.0003028897192081,
  -0.0001546220560603, 5.18866658034e-05,0.0002262780004877,0.0002963168944197,
  0.0002378260502572,8.249490917626e-05,-9.864310747396e-05,-0.0002276558980749,
  -0.0002532673995088,-0.0001710675407749,-2.250828372593e-05,0.0001255888493338,
   0.000211021077006,0.0002022536605478,0.0001096631440014,-2.181463790765e-05,
  -0.0001341915125606,-0.0001819004034911,-0.0001500875464366,-5.847615866925e-05,
  4.972470492028e-05,0.0001279600894691,0.0001462180456426,0.0001022351650645,
  1.999836293695e-05,-6.27126914523e-05,-0.0001114760986141,-0.0001093649659926,
  -6.23558699715e-05,5.450831588446e-06,6.377649414492e-05,8.949575855042e-05,
  7.556279832121e-05,3.221087444555e-05,-1.925630651378e-05,-5.664043264388e-05,
  -6.623668938439e-05,-4.754719117083e-05,-1.187069846185e-05,2.389924123174e-05,
  4.505091066373e-05,4.491096616344e-05,2.654423189164e-05,1.234534013576e-07,
  -2.232963440657e-05,-3.223410656927e-05,-2.751721883685e-05,-1.247734028256e-05,
  5.021096621933e-06, 1.74158529316e-05,2.055915049698e-05,1.486456777122e-05,
  4.322886907537e-06,-5.82727480582e-06,-1.153549788253e-05,-1.141143861559e-05,
  -6.774164674145e-06,-5.294930909841e-07,4.403896479235e-06,6.338014777361e-06,
  5.250108016469e-06,2.390725736215e-06,-5.748931373803e-07,-2.397965799811e-06,
  -2.679166522015e-06,-1.803512039125e-06,-5.351419654058e-07,4.468863023307e-07,
  8.335442086597e-07,7.039531421386e-07,3.468316035601e-07,3.707589293186e-08,
  -1.004263177348e-07,-9.403737777213e-08,-3.90499809171e-08,-5.191960668848e-09,
                   0
};