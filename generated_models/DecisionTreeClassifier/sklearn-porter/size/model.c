#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict(float features[128]) {

    int classes[6];
        
    if (features[68] <= -0.5425877869129181) {
        if (features[115] <= 0.2614043354988098) {
            if (features[104] <= -0.5688600242137909) {
                if (features[67] <= -0.7260217666625977) {
                    if (features[81] <= -0.7825010418891907) {
                        if (features[32] <= -1.249678373336792) {
                            if (features[24] <= -1.3313943147659302) {
                                if (features[89] <= -1.09275221824646) {
                                    if (features[126] <= 0.5725792050361633) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 27; 
                                    }
                                } else {
                                    if (features[7] <= 0.43111078441143036) {
                                        if (features[74] <= -0.7745573818683624) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 5; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 9; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            } else {
                                if (features[106] <= -1.4380822777748108) {
                                    classes[0] = 0; 
                                    classes[1] = 91; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 1; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[65] <= -0.674408495426178) {
                                if (features[22] <= 1.1086645126342773) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 144; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[83] <= -1.0323238372802734) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 5; 
                                classes[5] = 0; 
                            }
                        }
                    } else {
                        if (features[105] <= 0.35595814883708954) {
                            if (features[66] <= -0.877354234457016) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 5; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[108] <= -1.5124805569648743) {
                                    if (features[80] <= -0.6472192704677582) {
                                        if (features[86] <= 0.9680100083351135) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[76] <= -0.5889225006103516) {
                                        if (features[105] <= 0.3304189443588257) {
                                            classes[0] = 1; 
                                            classes[1] = 336; 
                                            classes[2] = 3; 
                                            classes[3] = 0; 
                                            classes[4] = 1; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[14] <= 0.686243861913681) {
                                            classes[0] = 0; 
                                            classes[1] = 46; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 16; 
                                            classes[2] = 12; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 24; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        }
                    }
                } else {
                    if (features[9] <= -0.1915048509836197) {
                        if (features[81] <= -1.0249053239822388) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 50; 
                        } else {
                            if (features[2] <= -0.5933612883090973) {
                                if (features[67] <= -0.6129690706729889) {
                                    if (features[19] <= -0.8557447195053101) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 140; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[98] <= -0.9643124341964722) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 1; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 6; 
                                    }
                                }
                            } else {
                                if (features[63] <= 0.6916938424110413) {
                                    if (features[51] <= -0.9258103966712952) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 13; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[17] <= -0.28552772104740143) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 4; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 7; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[89] <= -1.0530169010162354) {
                                        if (features[5] <= 0.6793803870677948) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 44; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[81] <= -0.7535135447978973) {
                            if (features[74] <= -0.5718453526496887) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 152; 
                            } else {
                                if (features[0] <= -0.46804477274417877) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 11; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[70] <= 0.5640237033367157) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 5; 
                                    } else {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[95] <= 0.48230889439582825) {
                                classes[0] = 0; 
                                classes[1] = 28; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[125] <= 0.7490453720092773) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 3; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[100] <= -1.4982523918151855) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 2; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 19; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[112] <= -0.22445037215948105) {
                    if (features[37] <= 0.8809530735015869) {
                        if (features[113] <= 0.8244923055171967) {
                            if (features[104] <= -0.434018075466156) {
                                if (features[66] <= -0.7776674330234528) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 61; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            } else {
                                if (features[34] <= -0.9868058562278748) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 1; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[80] <= -0.06227978132665157) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 841; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[70] <= 0.7148396968841553) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 64; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        }
                    } else {
                        if (features[45] <= 0.8309594094753265) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 4; 
                            classes[5] = 0; 
                        } else {
                            if (features[120] <= -0.6460903584957123) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 1; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        }
                    }
                } else {
                    if (features[104] <= 0.2713518291711807) {
                        classes[0] = 0; 
                        classes[1] = 106; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    } else {
                        if (features[0] <= -0.20996348932385445) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 45; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 1; 
                            classes[5] = 0; 
                        }
                    }
                }
            }
        } else {
            if (features[105] <= 2.436236023902893) {
                if (features[48] <= -0.6793288588523865) {
                    classes[0] = 8; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                    classes[3] = 0; 
                    classes[4] = 0; 
                    classes[5] = 0; 
                } else {
                    if (features[46] <= -4.279415965080261) {
                        classes[0] = 2; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    } else {
                        if (features[60] <= 8.649916648864746) {
                            classes[0] = 0; 
                            classes[1] = 1310; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        } else {
                            classes[0] = 1; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 54; 
                classes[3] = 0; 
                classes[4] = 0; 
                classes[5] = 0; 
            }
        }
    } else {
        if (features[15] <= -0.12365959212183952) {
            if (features[8] <= 0.2875627726316452) {
                if (features[99] <= -0.3641917407512665) {
                    if (features[84] <= -0.6824571490287781) {
                        if (features[87] <= 0.23954058066010475) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 19; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 5; 
                            classes[5] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 26; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    }
                } else {
                    if (features[4] <= -0.1420620232820511) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                        classes[3] = 9; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    } else {
                        classes[0] = 84; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    }
                }
            } else {
                if (features[107] <= 1.410966694355011) {
                    if (features[74] <= 4.219982624053955) {
                        if (features[32] <= -0.49093757569789886) {
                            if (features[47] <= -0.17285329848527908) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[74] <= 1.3440011143684387) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 3; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[24] <= -0.9005714058876038) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 1; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 1; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[14] <= -0.13404250890016556) {
                                if (features[107] <= 1.0651574730873108) {
                                    if (features[1] <= -0.3152785450220108) {
                                        if (features[1] <= -0.32533223927021027) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 3; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[20] <= 0.13445010036230087) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 1333; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 158; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[44] <= 0.3567964732646942) {
                                        if (features[17] <= -0.2829463630914688) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 1; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 21; 
                                        classes[5] = 0; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        }
                    } else {
                        if (features[0] <= 4.997907876968384) {
                            if (features[91] <= 1.0387677997350693) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 11; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 24; 
                            classes[5] = 0; 
                        }
                    }
                } else {
                    if (features[15] <= -0.44793112576007843) {
                        if (features[20] <= 0.2834374010562897) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 3; 
                            classes[5] = 0; 
                        }
                    } else {
                        classes[0] = 8; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    }
                }
            }
        } else {
            if (features[100] <= 0.2937767654657364) {
                if (features[35] <= -0.874773770570755) {
                    if (features[16] <= -1.181192398071289) {
                        if (features[10] <= -0.7843974530696869) {
                            if (features[119] <= 0.47240695357322693) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 26; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        } else {
                            if (features[103] <= 0.7689186036586761) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 44; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 1; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        }
                    } else {
                        if (features[73] <= 0.2520785331726074) {
                            if (features[41] <= -0.01026466442272067) {
                                if (features[65] <= -0.6531317830085754) {
                                    if (features[30] <= 0.6474269926548004) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 1; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 2; 
                                    }
                                } else {
                                    if (features[104] <= -1.3814684748649597) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[121] <= -0.12199729308485985) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                            classes[3] = 2; 
                                            classes[4] = 483; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[42] <= -1.0403082370758057) {
                                    if (features[19] <= -0.7956719398498535) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 2; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    classes[0] = 9; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[65] <= 0.5147538781166077) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 4; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[64] <= 1.0126134157180786) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 1; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 32; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[77] <= 0.2912884056568146) {
                        if (features[15] <= 0.06633185967803001) {
                            if (features[79] <= -0.1057712696492672) {
                                if (features[124] <= -0.39637015759944916) {
                                    if (features[98] <= -0.7152480483055115) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 18; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 10; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[87] <= -0.2868337333202362) {
                                        if (features[82] <= 0.106729656457901) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 4; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[9] <= 0.09055457264184952) {
                                            classes[0] = 38; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[127] <= -0.24034086614847183) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 5; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[9] <= 0.15297102183103561) {
                                        if (features[5] <= 0.715386688709259) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 4; 
                                            classes[3] = 0; 
                                            classes[4] = 146; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 2; 
                                    }
                                }
                            }
                        } else {
                            if (features[78] <= -0.3771652728319168) {
                                if (features[124] <= -0.8758597671985626) {
                                    if (features[53] <= 0.7391412258148193) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 6; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 9; 
                                    }
                                } else {
                                    if (features[123] <= 0.12890810519456863) {
                                        classes[0] = 116; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 3; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            } else {
                                if (features[75] <= -0.4204075187444687) {
                                    if (features[62] <= 0.8201560378074646) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 53; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 1; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[30] <= 0.6279397308826447) {
                                        if (features[33] <= 0.3133629411458969) {
                                            classes[0] = 21; 
                                            classes[1] = 2; 
                                            classes[2] = 2; 
                                            classes[3] = 681; 
                                            classes[4] = 10; 
                                            classes[5] = 13; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 28; 
                                            classes[2] = 20; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[9] <= 0.04611106403172016) {
                                            classes[0] = 55; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 2; 
                                            classes[4] = 9; 
                                            classes[5] = 1; 
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 16; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[11] <= -0.24556570500135422) {
                            if (features[17] <= 0.0025796834379434586) {
                                if (features[80] <= -0.863321453332901) {
                                    if (features[10] <= -0.5952297151088715) {
                                        if (features[123] <= -0.7285806238651276) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 127; 
                                            classes[4] = 1; 
                                            classes[5] = 20; 
                                        } else {
                                            classes[0] = 50; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[123] <= -0.7119058668613434) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 8; 
                                            classes[4] = 8; 
                                            classes[5] = 305; 
                                        } else {
                                            classes[0] = 23; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 35; 
                                            classes[4] = 0; 
                                            classes[5] = 11; 
                                        }
                                    }
                                } else {
                                    if (features[43] <= -0.7554851174354553) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 12; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[41] <= -0.009008116088807583) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 277; 
                                            classes[4] = 0; 
                                            classes[5] = 7; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
                                            classes[3] = 2; 
                                            classes[4] = 0; 
                                            classes[5] = 12; 
                                        }
                                    }
                                }
                            } else {
                                if (features[1] <= -0.32397526502609253) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 120; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[74] <= -0.10330598801374435) {
                                if (features[30] <= 0.024583667516708374) {
                                    if (features[33] <= -0.09153123572468758) {
                                        if (features[19] <= -0.34488799422979355) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 2; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 16; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[67] <= -0.2926729917526245) {
                                        if (features[72] <= -0.4443739652633667) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 1; 
                                            classes[5] = 68; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                            classes[3] = 12; 
                                            classes[4] = 15; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[7] <= 0.43070580065250397) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 2; 
                                            classes[4] = 0; 
                                            classes[5] = 607; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 2; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[11] <= 0.19932663440704346) {
                                    if (features[9] <= -0.14841797575354576) {
                                        if (features[104] <= 0.15853480994701385) {
                                            classes[0] = 7; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 2; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 8; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 9; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[6] <= 0.05653543770313263) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 1; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 38; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (features[19] <= 1.3563512563705444) {
                    if (features[69] <= 0.747373640537262) {
                        if (features[100] <= 0.9330124258995056) {
                            if (features[26] <= 0.14015592634677887) {
                                if (features[124] <= -0.2643217444419861) {
                                    if (features[117] <= -0.6273360848426819) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[27] <= -0.5759629905223846) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 1; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 16; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[111] <= -0.5449270308017731) {
                                        if (features[9] <= -0.0021830350160598755) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 4; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[97] <= -1.0256813764572144) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 3; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 351; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 4; 
                                            classes[4] = 1; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[84] <= 0.7459717392921448) {
                                    if (features[65] <= 0.2848273143172264) {
                                        if (features[112] <= 0.062151748687028885) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 8; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 3; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 2; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[37] <= -1.3854027390480042) {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 87; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 37; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[116] <= 0.24138417840003967) {
                                if (features[87] <= -0.15764189325273037) {
                                    if (features[38] <= -1.8358940482139587) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 10; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[124] <= -0.1235273964703083) {
                                        if (features[57] <= -0.016608990961685777) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 1; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 1; 
                                        }
                                    } else {
                                        classes[0] = 54; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            } else {
                                if (features[108] <= 1.0134692788124084) {
                                    if (features[44] <= 1.101758897304535) {
                                        classes[0] = 85; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 1; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    classes[0] = 1029; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[67] <= 0.10701897740364075) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 11; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 49; 
                            classes[5] = 0; 
                        }
                    }
                } else {
                    if (features[96] <= 1.5488168597221375) {
                        classes[0] = 0; 
                        classes[1] = 120; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
                    } else {
                        if (features[69] <= 0.7057390511035919) {
                            classes[0] = 29; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        } else {
                            if (features[10] <= 1.2981035113334656) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 9; 
                                classes[5] = 0; 
                            }
                        }
                    }
                }
            }
        }
    }

    int index = 0;
    for (int i = 0; i < 6; i++) {
        index = classes[i] > classes[index] ? i : index;
    }
    return index;
}



int main(void) {
#if !defined(SVC) && !defined(ADABOOST) && !defined(NUSVC)
    float features[1];
#else
    double features[1];
#endif
    int result = predict(features);
    return result;
}
