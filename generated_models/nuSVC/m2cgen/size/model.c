#include <math.h>
#include <string.h>
void predict(double * input, double * output) {
    double var0;
    var0 = exp((-0.25) * ((((pow((0.12130918365404282) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((0.29714103734861663) - (input[2]), 2.0))) + (pow((0.1352862243498301) - (input[3]), 2.0))));
    double var1;
    var1 = exp((-0.25) * ((((pow((0.7487704784163448) - (input[0]), 2.0)) + (pow((-0.2248361167255634) - (input[1]), 2.0))) + (pow((0.29714103734861663) - (input[2]), 2.0))) + (pow((-0.009663301739274176) - (input[3]), 2.0))));
    double var2;
    var2 = exp((-0.25) * ((((pow((-0.631644370060719) - (input[0]), 2.0)) + (pow((-0.9742898391441088) - (input[1]), 2.0))) + (pow((0.17502828227384304) - (input[2]), 2.0))) + (pow((-0.15461282782837876) - (input[3]), 2.0))));
    double var3;
    var3 = exp((-0.25) * ((((pow((-0.5061521111082591) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((-0.008140850338318458) - (input[2]), 2.0))) + (pow((-0.009663301739274176) - (input[3]), 2.0))));
    double var4;
    var4 = exp((-0.25) * ((((pow((-1.3845979237754809) - (input[0]), 2.0)) + (pow((-1.4739256540898065) - (input[1]), 2.0))) + (pow((-0.49659187063741456) - (input[2]), 2.0))) + (pow((-0.4445118800065876) - (input[3]), 2.0))));
    double var5;
    var5 = exp((-0.25) * ((((pow((1.1252472552737267) - (input[0]), 2.0)) + (pow((0.2747996982201343) - (input[1]), 2.0))) + (pow((0.48031016996077813) - (input[2]), 2.0))) + (pow((0.28023575043893467) - (input[3]), 2.0))));
    double var6;
    var6 = exp((-0.25) * ((((pow((0.3722937015589638) - (input[0]), 2.0)) + (pow((-1.7237435615626553) - (input[1]), 2.0))) + (pow((0.17502828227384304) - (input[2]), 2.0))) + (pow((-0.009663301739274176) - (input[3]), 2.0))));
    double var7;
    var7 = exp((-0.25) * ((((pow((-1.886566959585323) - (input[0]), 2.0)) + (pow((-1.7237435615626553) - (input[1]), 2.0))) + (pow((-1.717719421385155) - (input[2]), 2.0))) + (pow((-1.4591585626303187) - (input[3]), 2.0))));
    double var8;
    var8 = exp((-0.25) * ((((pow((-1.1336134058705611) - (input[0]), 2.0)) + (pow((1.7737071430572262) - (input[1]), 2.0))) + (pow((-1.5956066663103807) - (input[2]), 2.0))) + (pow((-1.3142090365412142) - (input[3]), 2.0))));
    double var9;
    var9 = exp((-0.25) * ((((pow((-1.3845979237754809) - (input[0]), 2.0)) + (pow((1.5238892355843774) - (input[1]), 2.0))) + (pow((-1.6566630438477679) - (input[2]), 2.0))) + (pow((-1.7490576148085275) - (input[3]), 2.0))));
    double var10;
    var10 = exp((-0.25) * ((((pow((-1.3845979237754809) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((-1.6566630438477679) - (input[2]), 2.0))) + (pow((-1.6041080887194232) - (input[3]), 2.0))));
    double var11;
    var11 = exp((-0.25) * ((((pow((-0.757136629013179) - (input[0]), 2.0)) + (pow((1.0242534206386797) - (input[1]), 2.0))) + (pow((-1.4734939112356067) - (input[2]), 2.0))) + (pow((-1.6041080887194232) - (input[3]), 2.0))));
    double var12;
    var12 = exp((-0.25) * ((((pow((-0.2551675932033381) - (input[0]), 2.0)) + (pow((2.5231608654757713) - (input[1]), 2.0))) + (pow((-1.778775798922542) - (input[2]), 2.0))) + (pow((-1.6041080887194232) - (input[3]), 2.0))));
    double var13;
    var13 = exp((-0.25) * ((((pow((0.8742627373688058) - (input[0]), 2.0)) + (pow((0.7744355131658308) - (input[1]), 2.0))) + (pow((0.9687611902598743) - (input[2]), 2.0))) + (pow((1.1499329069735615) - (input[3]), 2.0))));
    double var14;
    var14 = exp((-0.25) * ((((pow((0.8742627373688058) - (input[0]), 2.0)) + (pow((0.7744355131658308) - (input[1]), 2.0))) + (pow((0.9687611902598743) - (input[2]), 2.0))) + (pow((1.729731011329979) - (input[3]), 2.0))));
    double var15;
    var15 = exp((-0.25) * ((((pow((1.5017240321311078) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((1.029817567797261) - (input[2]), 2.0))) + (pow((0.4251852765280392) - (input[3]), 2.0))));
    double var16;
    var16 = exp((-0.25) * ((((pow((1.7527085500360287) - (input[0]), 2.0)) + (pow((-0.47465402419841224) - (input[1]), 2.0))) + (pow((1.212986700409422) - (input[2]), 2.0))) + (pow((0.8600338547953523) - (input[3]), 2.0))));
    double var17;
    var17 = exp((-0.25) * ((((pow((0.3722937015589638) - (input[0]), 2.0)) + (pow((-0.2248361167255634) - (input[1]), 2.0))) + (pow((0.9077048127224869) - (input[2]), 2.0))) + (pow((0.715084328706248) - (input[3]), 2.0))));
    double var18;
    var18 = exp((-0.25) * ((((pow((0.6232782194638848) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((0.8466484351851) - (input[2]), 2.0))) + (pow((0.715084328706248) - (input[3]), 2.0))));
    double var19;
    var19 = exp((-0.25) * ((((pow((-0.5061521111082591) - (input[0]), 2.0)) + (pow((-0.47465402419841224) - (input[1]), 2.0))) + (pow((0.48031016996077813) - (input[2]), 2.0))) + (pow((1.0049833808844568) - (input[3]), 2.0))));
    double var20;
    var20 = exp((-0.25) * ((((pow((-0.12967533425087704) - (input[0]), 2.0)) + (pow((0.02498179074728544) - (input[1]), 2.0))) + (pow((0.6024229250355517) - (input[2]), 2.0))) + (pow((0.715084328706248) - (input[3]), 2.0))));
    double var21;
    var21 = exp((-0.25) * ((((pow((-1.3845979237754809) - (input[0]), 2.0)) + (pow((-1.2241077466169576) - (input[1]), 2.0))) + (pow((0.23608465981122986) - (input[2]), 2.0))) + (pow((0.5701348026171436) - (input[3]), 2.0))));
    memcpy(output, (double[]){(((((((((((((0.028890040417146844) + ((var0) * (-0.03600181263499816))) + ((var1) * (-0.05109482868679139))) + ((var2) * (-0.12845868279901976))) + ((var3) * (-0.4311106482416186))) + ((var4) * (-0.4311106482416186))) + ((var5) * (-0.4311106482416186))) + ((var6) * (-0.4311106482416186))) + ((var7) * (0.4311106482416186))) + ((var8) * (0.2196358445810843))) + ((var9) * (0.0))) + ((var10) * (0.4311106482416186))) + ((var11) * (0.42703012778134364))) + ((var12) * (0.4311106482416186)), (((((((((((((((-0.06414315876287408) + ((var13) * (-0.01870238149229514))) + ((var14) * (-0.38570031988028847))) + ((var15) * (-0.24654627004425364))) + ((var16) * (-0.38570031988028847))) + ((var17) * (-0.0))) + ((var18) * (-0.0))) + ((var19) * (-0.38570031988028847))) + ((var20) * (-0.024026588373667623))) + ((var21) * (-0.38570031988028847))) + ((var7) * (0.38570031988028847))) + ((var8) * (0.3376867700671777))) + ((var9) * (0.14216130534263666))) + ((var10) * (0.38570031988028847))) + ((var11) * (0.1951274843806905))) + ((var12) * (0.38570031988028847)), ((((((((((((((((0.05174798900487004) + ((var13) * (-0.0))) + ((var14) * (-0.0))) + ((var15) * (-1.2094821907602344))) + ((var16) * (-0.18267529592725734))) + ((var17) * (-0.9672313662337972))) + ((var18) * (-1.2094821907602344))) + ((var19) * (-0.9666871716693556))) + ((var20) * (-1.2094821907602344))) + ((var21) * (-1.2094821907602344))) + ((var0) * (1.2094821907602344))) + ((var1) * (1.2094821907602344))) + ((var2) * (0.6330716890692691))) + ((var3) * (1.2094821907602344))) + ((var4) * (0.7174840715137045))) + ((var5) * (1.2094821907602344))) + ((var6) * (0.7660380732474366))}, 3 * sizeof(double));
}


int main(void) {
    double input[5];
    double output[5];

    predict(input, output);
}
