/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 8.5 and the Signal Processing Toolbox 7.0.
 * Generated on: 08-Jun-2017 23:02:23
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
const int BL = 513;
const real64_T B[513] = {
                   0,3.411957399772e-08,1.066646376155e-07,-3.102751971509e-08,
  -4.995674373255e-07,-8.290880883448e-07,-2.578805269392e-07,1.241000138588e-06,
  2.368430356418e-06,1.432461573505e-06,-1.683975728791e-06,-4.561476787032e-06,
  -3.90408583184e-06,1.089732039039e-06,6.866016728982e-06,7.763474261025e-06,
  1.266053686693e-06,-8.415896405008e-06,-1.266387657274e-05,-5.885926266651e-06,
  8.163554204254e-06,1.778518450737e-05,1.285463374895e-05,-5.092555914453e-06,
  -2.189834948028e-05,-2.169682966247e-05,-1.532963951375e-06,2.353260860379e-05,
  3.132602333626e-05,1.192643086445e-05,-2.122877693754e-05,-4.011010151992e-05,
  -2.559375642319e-05,1.384325403332e-05,4.606045129319e-05,4.125081128276e-05,
  -8.526864460631e-07,-4.712971670826e-05,-5.687704319908e-05,-1.739854036883e-05,
  4.158082341292e-05, 6.99189508968e-05,3.956435227156e-05,-2.837092505805e-05,
  -7.763186020996e-05,-6.332121486341e-05,7.482147297584e-06,7.752141403097e-05,
  8.557368850838e-05,1.987045015649e-05,-6.782182481903e-05,-0.0001028354863084,
  -5.12125742658e-05,4.793091247668e-05,0.0001117476542633,8.300206011166e-05,
  -1.871639391297e-05,-0.0001096644799441,-0.0001110408888145,-1.738338581681e-05,
   9.52139497727e-05,0.0001310718829759,5.651729541502e-05,-6.872836596316e-05,
  -0.0001394850097358,-9.385367356369e-05,3.244614473855e-05,0.0001340258514984,
  0.0001242565865405,9.590332030615e-06,-0.0001143799535868,-0.0001431269260026,
  -5.197473257467e-05, 8.25070034548e-05,0.0001472860584294,8.869429517284e-05,
  -4.262132652231e-05,-0.0001357507234009,-0.0001141243910049,7.598550282291e-07,
  0.0001102404399007,0.0001241232390191,3.605846174854e-05,-7.527779665573e-05,
  -0.000117047552825,-6.100468380596e-05,3.778890496213e-05,9.449141412903e-05,
  6.879360285009e-05,-6.182643019174e-06,-6.156329874296e-05,-5.700993068906e-05,
  -1.102495436915e-05, 2.65630939834e-05,2.716380184453e-05,6.882904653591e-06,
   3.35296311021e-18,1.476576328533e-05,2.226533933776e-05,-7.004523476289e-06,
  -5.849748248404e-05,-7.528964778298e-05,-1.522959136425e-05,9.043798856633e-05,
  0.0001453273747192,7.269697995886e-05,-9.549031413247e-05,-0.0002196589511362,
  -0.000165621145501,5.953654353292e-05,0.0002805939491319,0.0002869151751646,
  2.768911616716e-05,-0.0003074243996303,-0.0004215595270925,-0.0001697382644078,
  0.0002793375073596,0.0005471868580244,0.0003610717772688,-0.0001790041438036,
  -0.0006360226038672,-0.0005856530075854,-3.601103623482e-06,0.0006581409724305,
  0.0008169294070182,0.0002677101583278,-0.000585781423468,-0.001019479082851,
  -0.0005992132252542,0.0003982601562332, 0.001152390196038,0.0009696264328227,
  -8.68378195547e-05,-0.001174188130853,-0.001337018928639,-0.0003411991955155,
   0.001048860040303, 0.001649124403471,0.0008599948595262,-0.0007522870550301,
  -0.001848575695086,-0.001424765676013,0.0002782207858721, 0.001879880193144,
    0.00197406414045,0.0003571321691956,-0.001697440910136,-0.002434790156061,
  -0.001112801530489, 0.001273670318255, 0.002729705624191, 0.001923717131946,
  -0.0006060862350088,-0.002786818564428,-0.002704729382428,-0.0002777430315137,
   0.002549650454714, 0.003357961366496, 0.001318402959497,-0.001987138799891,
  -0.003783007660198,-0.002426694538824, 0.001101804350993, 0.003889042914889,
   0.003489836201822,6.513733148737e-05,-0.003607523142119,-0.004381572273878,
  -0.001432804095059,  0.00290391529073,  0.00497540759597, 0.002884488850832,
  -0.001786824883888,-0.005159682645134,-0.004276440673387,0.0003130357036484,
   0.004852812582025, 0.005451086312641, 0.001412667843355,-0.004016801713803,
  -0.006253566896234,-0.003243482468104, 0.002667158067609, 0.006549920815236,
   0.005002284391515,-0.0008775909766038,-0.006244862365893,-0.006498227942802,
   -0.00122163366887, 0.005296951750094, 0.007546735119843, 0.003452124312679,
  -0.003729065633177,-0.007990803896979,-0.005602225888304, 0.001632466378773,
   0.007721213796891, 0.007447136412559,0.0008365957350873,-0.006693133749039,
  -0.008772360017374,-0.003467992242811, 0.004936869944628, 0.009398018972344,
   0.006015869011753,-0.002561022811116,-0.009201253750846,-0.008222274656536,
  -0.0002528944042789, 0.008133967892198, 0.009843931115209, 0.003264369955412,
  -0.006233540551977, -0.01067928150132,-0.006195321826665, 0.003624808990366,
    0.01059273549257, 0.008757069958758,-0.0005125491277207,-0.009533178625956,
   -0.01068011599751, -0.00283524691897, 0.007544320016807,  0.01174351641987,
   0.006111906757337,-0.004765278485841,   -0.011800519082,-0.009002060396437,
   0.001420863086502,  0.01079740991869,  0.01121396421889, 0.002197828847153,
   -0.00878316833979, -0.01251066043292,-0.005760732778391, 0.005908491880696,
    0.01273646569941, 0.008931320118491,-0.002413916997617, -0.01183569577743,
   -0.01140086276404,-0.001392001079222,  0.00986132268551,  0.01292073603125,
   0.005162327960128,  -0.0069723422859,  -0.0133291625983,-0.008546147976057,
   0.003419880529554,   0.0125693485083,  0.01122405586069,0.0004766604339344,
   -0.01069687642003, -0.01294088958968,-0.004360971255437, 0.007875398126323,
    0.01353210769044, 0.007875398126323,-0.004360971255437, -0.01294088958968,
   -0.01069687642003,0.0004766604339344,  0.01122405586069,   0.0125693485083,
   0.003419880529554,-0.008546147976057,  -0.0133291625983,  -0.0069723422859,
   0.005162327960128,  0.01292073603125,  0.00986132268551,-0.001392001079222,
   -0.01140086276404, -0.01183569577743,-0.002413916997617, 0.008931320118491,
    0.01273646569941, 0.005908491880696,-0.005760732778391, -0.01251066043292,
   -0.00878316833979, 0.002197828847153,  0.01121396421889,  0.01079740991869,
   0.001420863086502,-0.009002060396437,   -0.011800519082,-0.004765278485841,
   0.006111906757337,  0.01174351641987, 0.007544320016807, -0.00283524691897,
   -0.01068011599751,-0.009533178625956,-0.0005125491277207, 0.008757069958758,
    0.01059273549257, 0.003624808990366,-0.006195321826665, -0.01067928150132,
  -0.006233540551977, 0.003264369955412, 0.009843931115209, 0.008133967892198,
  -0.0002528944042789,-0.008222274656536,-0.009201253750846,-0.002561022811116,
   0.006015869011753, 0.009398018972344, 0.004936869944628,-0.003467992242811,
  -0.008772360017374,-0.006693133749039,0.0008365957350873, 0.007447136412559,
   0.007721213796891, 0.001632466378773,-0.005602225888304,-0.007990803896979,
  -0.003729065633177, 0.003452124312679, 0.007546735119843, 0.005296951750094,
   -0.00122163366887,-0.006498227942802,-0.006244862365893,-0.0008775909766038,
   0.005002284391515, 0.006549920815236, 0.002667158067609,-0.003243482468104,
  -0.006253566896234,-0.004016801713803, 0.001412667843355, 0.005451086312641,
   0.004852812582025,0.0003130357036484,-0.004276440673387,-0.005159682645134,
  -0.001786824883888, 0.002884488850832,  0.00497540759597,  0.00290391529073,
  -0.001432804095059,-0.004381572273878,-0.003607523142119,6.513733148737e-05,
   0.003489836201822, 0.003889042914889, 0.001101804350993,-0.002426694538824,
  -0.003783007660198,-0.001987138799891, 0.001318402959497, 0.003357961366496,
   0.002549650454714,-0.0002777430315137,-0.002704729382428,-0.002786818564428,
  -0.0006060862350088, 0.001923717131946, 0.002729705624191, 0.001273670318255,
  -0.001112801530489,-0.002434790156061,-0.001697440910136,0.0003571321691956,
    0.00197406414045, 0.001879880193144,0.0002782207858721,-0.001424765676013,
  -0.001848575695086,-0.0007522870550301,0.0008599948595262, 0.001649124403471,
   0.001048860040303,-0.0003411991955155,-0.001337018928639,-0.001174188130853,
  -8.68378195547e-05,0.0009696264328227, 0.001152390196038,0.0003982601562332,
  -0.0005992132252542,-0.001019479082851,-0.000585781423468,0.0002677101583278,
  0.0008169294070182,0.0006581409724305,-3.601103623482e-06,-0.0005856530075854,
  -0.0006360226038672,-0.0001790041438036,0.0003610717772688,0.0005471868580244,
  0.0002793375073596,-0.0001697382644078,-0.0004215595270925,-0.0003074243996303,
  2.768911616716e-05,0.0002869151751646,0.0002805939491319,5.953654353292e-05,
  -0.000165621145501,-0.0002196589511362,-9.549031413247e-05,7.269697995886e-05,
  0.0001453273747192,9.043798856633e-05,-1.522959136425e-05,-7.528964778298e-05,
  -5.849748248404e-05,-7.004523476289e-06,2.226533933776e-05,1.476576328533e-05,
   3.35296311021e-18,6.882904653591e-06,2.716380184453e-05, 2.65630939834e-05,
  -1.102495436915e-05,-5.700993068906e-05,-6.156329874296e-05,-6.182643019174e-06,
  6.879360285009e-05,9.449141412903e-05,3.778890496213e-05,-6.100468380596e-05,
  -0.000117047552825,-7.527779665573e-05,3.605846174854e-05,0.0001241232390191,
  0.0001102404399007,7.598550282291e-07,-0.0001141243910049,-0.0001357507234009,
  -4.262132652231e-05,8.869429517284e-05,0.0001472860584294, 8.25070034548e-05,
  -5.197473257467e-05,-0.0001431269260026,-0.0001143799535868,9.590332030615e-06,
  0.0001242565865405,0.0001340258514984,3.244614473855e-05,-9.385367356369e-05,
  -0.0001394850097358,-6.872836596316e-05,5.651729541502e-05,0.0001310718829759,
   9.52139497727e-05,-1.738338581681e-05,-0.0001110408888145,-0.0001096644799441,
  -1.871639391297e-05,8.300206011166e-05,0.0001117476542633,4.793091247668e-05,
  -5.12125742658e-05,-0.0001028354863084,-6.782182481903e-05,1.987045015649e-05,
  8.557368850838e-05,7.752141403097e-05,7.482147297584e-06,-6.332121486341e-05,
  -7.763186020996e-05,-2.837092505805e-05,3.956435227156e-05, 6.99189508968e-05,
  4.158082341292e-05,-1.739854036883e-05,-5.687704319908e-05,-4.712971670826e-05,
  -8.526864460631e-07,4.125081128276e-05,4.606045129319e-05,1.384325403332e-05,
  -2.559375642319e-05,-4.011010151992e-05,-2.122877693754e-05,1.192643086445e-05,
  3.132602333626e-05,2.353260860379e-05,-1.532963951375e-06,-2.169682966247e-05,
  -2.189834948028e-05,-5.092555914453e-06,1.285463374895e-05,1.778518450737e-05,
  8.163554204254e-06,-5.885926266651e-06,-1.266387657274e-05,-8.415896405008e-06,
  1.266053686693e-06,7.763474261025e-06,6.866016728982e-06,1.089732039039e-06,
  -3.90408583184e-06,-4.561476787032e-06,-1.683975728791e-06,1.432461573505e-06,
  2.368430356418e-06,1.241000138588e-06,-2.578805269392e-07,-8.290880883448e-07,
  -4.995674373255e-07,-3.102751971509e-08,1.066646376155e-07,3.411957399772e-08,
                   0
};
