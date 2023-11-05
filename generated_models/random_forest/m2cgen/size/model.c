#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void predict(double * input, double * output) {
    double var0[6];
    double var1[6];
    double var2[6];
    double var3[6];
    double var4[6];
    double var5[6];
    double var6[6];
    double var7[6];
    double var8[6];
    double var9[6];
    double var10[6];
    if ((input[21]) <= (-0.660736471414566)) {
        if ((input[67]) <= (-0.6441143155097961)) {
            if ((input[71]) <= (-0.6854146718978882)) {
                if ((input[40]) <= (0.06277036480605602)) {
                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[51]) <= (0.17972535640001297)) {
                        if ((input[55]) <= (-0.479438841342926)) {
                            if ((input[74]) <= (0.649180144071579)) {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[57]) <= (-0.9983718991279602)) {
                                    if ((input[14]) <= (0.7959152460098267)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[22]) <= (-0.05536161549389362)) {
                                        if ((input[41]) <= (-0.0807010680437088)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.9722222222222222, 0.027777777777777776, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[62]) <= (-0.9426381289958954)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[57]) <= (-0.9614571332931519)) {
                                if ((input[1]) <= (-0.0399734303355217)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[63]) <= (-0.47183260321617126)) {
                                        if ((input[16]) <= (-0.9999209642410278)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.9047619047619048, 0.09523809523809523, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[39]) <= (-0.6778849363327026)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[36]) <= (0.04027604125440121)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[15]) <= (-0.39152040518820286)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[5]) <= (-0.8813616633415222)) {
                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[63]) <= (-0.9285637140274048)) {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[32]) <= (-0.22203319519758224)) {
                                    if ((input[37]) <= (-0.5737177580595016)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[58]) <= (-0.36313797533512115)) {
                    if ((input[40]) <= (0.16823336854577065)) {
                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[42]) <= (0.14421280473470688)) {
                            if ((input[63]) <= (-0.879092276096344)) {
                                if ((input[32]) <= (-0.3969946503639221)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[57]) <= (-0.9942502677440643)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[54]) <= (-0.36017951369285583)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.1, 0.9, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[10]) <= (-0.44189319014549255)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[56]) <= (-0.7080137133598328)) {
                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                }
            }
        } else {
            if ((input[79]) <= (-0.9092224538326263)) {
                if ((input[56]) <= (-0.31700680404901505)) {
                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[70]) <= (0.2788041979074478)) {
                        if ((input[9]) <= (-0.9435474872589111)) {
                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[18]) <= (-0.9949148595333099)) {
                                if ((input[67]) <= (-0.5604998171329498)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[57]) <= (-0.9912312924861908)) {
                            if ((input[26]) <= (-0.16449054330587387)) {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[53]) <= (0.034607136622071266)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[53]) <= (0.1298065446317196)) {
                                if ((input[24]) <= (-0.43891119956970215)) {
                                    if ((input[30]) <= (0.08514764904975891)) {
                                        if ((input[21]) <= (-0.9910219311714172)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[44]) <= (-0.9958548545837402)) {
                    if ((input[67]) <= (-0.3794236332178116)) {
                        if ((input[49]) <= (0.08894436061382294)) {
                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            if ((input[53]) <= (-0.1383487731218338)) {
                                if ((input[58]) <= (-0.8319726884365082)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[18]) <= (-0.9974541664123535)) {
                                    if ((input[52]) <= (0.9738918840885162)) {
                                        if ((input[9]) <= (-0.9454044103622437)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.993103448275862, 0.006896551724137931, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[10]) <= (-0.5702704787254333)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.8823529411764706, 0.11764705882352941, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.25, 0.75, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[61]) <= (-0.9965255856513977)) {
                            if ((input[51]) <= (0.35867366194725037)) {
                                if ((input[51]) <= (0.17321981489658356)) {
                                    if ((input[49]) <= (0.2980244681239128)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[41]) <= (-0.07230581901967525)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.8571428571428571, 0.14285714285714285, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[40]) <= (0.2969655655324459)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[40]) <= (0.1405000053346157)) {
                                memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[56]) <= (0.7245751321315765)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[9]) <= (-0.9440799355506897)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[57]) <= (-0.9835401475429535)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.8870967741935484, 0.11290322580645161, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.39622641509433965, 0.6037735849056604, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[77]) <= (-0.4018147140741348)) {
                        if ((input[63]) <= (-0.983412116765976)) {
                            if ((input[69]) <= (-0.3904770463705063)) {
                                if ((input[50]) <= (-0.09734787791967392)) {
                                    if ((input[41]) <= (-0.4047897011041641)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[36]) <= (-0.29921016097068787)) {
                                        if ((input[79]) <= (0.6313512623310089)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.25, 0.0, 0.75}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[12]) <= (0.799040287733078)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.9354838709677419, 0.06451612903225806, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[32]) <= (-0.2799327075481415)) {
                                    if ((input[51]) <= (-0.03886172641068697)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[29]) <= (0.038603052496910095)) {
                                        if ((input[44]) <= (-0.994494616985321)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.07142857142857142, 0.9285714285714286, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[5]) <= (-0.9902811944484711)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.21428571428571427, 0.5714285714285714, 0.21428571428571427}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.8958333333333334, 0.0625, 0.041666666666666664}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[50]) <= (-0.03314823471009731)) {
                                if ((input[59]) <= (-0.9981521964073181)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[78]) <= (0.8810593485832214)) {
                                    if ((input[40]) <= (0.1817047819495201)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[3]) <= (-0.9985457956790924)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.9621621621621622, 0.03783783783783784, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[52]) <= (0.9091857969760895)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[63]) <= (-0.977095901966095)) {
                            if ((input[51]) <= (-0.04455648548901081)) {
                                if ((input[51]) <= (-0.1717178300023079)) {
                                    if ((input[58]) <= (-0.7327853441238403)) {
                                        if ((input[15]) <= (-0.6198005676269531)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.024691358024691357, 0.9753086419753086, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[57]) <= (-0.9785482883453369)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.9615384615384616, 0.038461538461538464}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[57]) <= (-0.9671914279460907)) {
                                        if ((input[50]) <= (-0.05517490766942501)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.890625, 0.109375, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[66]) <= (0.34209850430488586)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.06818181818181818, 0.9318181818181818, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[52]) <= (0.7950360774993896)) {
                                    if ((input[23]) <= (-0.4987032562494278)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[38]) <= (-0.5205593705177307)) {
                                        if ((input[77]) <= (0.8685199916362762)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.75, 0.25, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[41]) <= (-0.07682578265666962)) {
                                            memcpy(var10, (double[]){0.0022988505747126436, 0.0, 0.0, 0.009195402298850575, 0.9885057471264368, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.43478260869565216, 0.5652173913043478, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[75]) <= (-0.35303014516830444)) {
                                if ((input[57]) <= (-0.9941487908363342)) {
                                    if ((input[49]) <= (0.8970185220241547)) {
                                        if ((input[77]) <= (0.35942287743091583)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.5454545454545454, 0.45454545454545453, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[42]) <= (0.001637413864955306)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.2857142857142857, 0.7142857142857143, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[41]) <= (0.538598358631134)) {
                                        if ((input[42]) <= (0.7838983535766602)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.9047619047619048, 0.09523809523809523, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[51]) <= (0.5000966638326645)) {
                                    if ((input[38]) <= (-0.5347846746444702)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((input[16]) <= (-0.48018765449523926)) {
            if ((input[69]) <= (-0.36073319613933563)) {
                if ((input[3]) <= (-0.5453828573226929)) {
                    if ((input[49]) <= (0.43848489969968796)) {
                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[9]) <= (-0.6460963487625122)) {
                            if ((input[37]) <= (-0.2780020534992218)) {
                                if ((input[54]) <= (-0.14611506462097168)) {
                                    if ((input[9]) <= (-0.8018818199634552)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[6]) <= (-0.9494947493076324)) {
                                    if ((input[19]) <= (-0.9896926879882812)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[25]) <= (-0.08373314514756203)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[71]) <= (-0.712302178144455)) {
                                if ((input[67]) <= (-0.9058458805084229)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[75]) <= (-0.5921450853347778)) {
                        if ((input[73]) <= (-0.49471449851989746)) {
                            if ((input[42]) <= (0.3011225163936615)) {
                                if ((input[30]) <= (-0.4495354890823364)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[59]) <= (-0.9925337135791779)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[11]) <= (-0.6218163967132568)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.012360939431396786, 0.969097651421508, 0.018541409147095178, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[52]) <= (0.8799569606781006)) {
                                    if ((input[44]) <= (-0.9120124578475952)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[4]) <= (0.043779073283076286)) {
                            if ((input[46]) <= (-0.9817171990871429)) {
                                if ((input[12]) <= (0.10435845330357552)) {
                                    if ((input[75]) <= (-0.441476047039032)) {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[20]) <= (-0.6216432750225067)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[39]) <= (0.346616730093956)) {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[58]) <= (-0.718722939491272)) {
                                    if ((input[72]) <= (0.5843115448951721)) {
                                        if ((input[45]) <= (-0.9720449149608612)) {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.03225806451612903, 0.0, 0.967741935483871, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[20]) <= (-0.4676218032836914)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.10714285714285714, 0.6785714285714286, 0.21428571428571427, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[55]) <= (0.37395475804805756)) {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[57]) <= (-0.9340835809707642)) {
                                if ((input[36]) <= (0.077236192766577)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[38]) <= (-0.5189710259437561)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[72]) <= (0.47730402648448944)) {
                                        if ((input[56]) <= (0.8452115952968597)) {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[67]) <= (-0.6833089590072632)) {
                    if ((input[75]) <= (-0.6714301109313965)) {
                        if ((input[33]) <= (-0.10434979572892189)) {
                            if ((input[57]) <= (-0.9659017622470856)) {
                                if ((input[65]) <= (-0.6961883008480072)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[17]) <= (-0.5970334112644196)) {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[44]) <= (-0.9716200232505798)) {
                                if ((input[69]) <= (-0.34212204813957214)) {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[39]) <= (0.31084132194519043)) {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[2]) <= (0.10554785467684269)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[37]) <= (-0.23727045953273773)) {
                            if ((input[65]) <= (-0.5944817066192627)) {
                                if ((input[50]) <= (-0.2961599677801132)) {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[75]) <= (-0.5800613760948181)) {
                                        if ((input[65]) <= (-0.6133431196212769)) {
                                            memcpy(var10, (double[]){0.0, 0.08333333333333333, 0.9166666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[70]) <= (0.11358446627855301)) {
                                    if ((input[47]) <= (-0.9383255541324615)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[43]) <= (-0.9653956294059753)) {
                                        if ((input[61]) <= (-0.9315464198589325)) {
                                            memcpy(var10, (double[]){0.0, 0.9, 0.1, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.5, 0.0, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[9]) <= (0.2270510494709015)) {
                                if ((input[20]) <= (0.021482981275767088)) {
                                    if ((input[53]) <= (0.06368333473801613)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[55]) <= (-0.007108598947525024)) {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[8]) <= (0.11427384614944458)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[45]) <= (-0.9216741025447845)) {
                        if ((input[73]) <= (-0.6067502498626709)) {
                            if ((input[55]) <= (-0.4660783112049103)) {
                                memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[5]) <= (0.07030148804187775)) {
                                if ((input[41]) <= (-0.3820749521255493)) {
                                    if ((input[36]) <= (0.06027056789025664)) {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[41]) <= (-0.2969084531068802)) {
                                        if ((input[55]) <= (-0.0547532569617033)) {
                                            memcpy(var10, (double[]){0.23529411764705882, 0.7647058823529411, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.9587628865979382, 0.020618556701030927, 0.020618556701030927, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[17]) <= (-0.940568596124649)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.9871428571428571, 0.004285714285714286, 0.008571428571428572, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[9]) <= (0.202021524310112)) {
                                    if ((input[20]) <= (0.11145342141389847)) {
                                        if ((input[8]) <= (0.0407739607617259)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[48]) <= (-0.9361870884895325)) {
                                        if ((input[69]) <= (0.06376010924577713)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[23]) <= (0.21678191423416138)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[15]) <= (-0.11087112501263618)) {
                            if ((input[37]) <= (-0.418483704328537)) {
                                if ((input[4]) <= (-0.07172543369233608)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[11]) <= (-0.6088786125183105)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[44]) <= (-0.869859129190445)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[74]) <= (0.4711621254682541)) {
                                if ((input[22]) <= (0.38023386895656586)) {
                                    if ((input[53]) <= (-0.3312020003795624)) {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[67]) <= (-0.5464055836200714)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.75, 0.0, 0.25, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[57]) <= (-0.9740494191646576)) {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[1]) <= (-0.05232745036482811)) {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[40]) <= (0.945936918258667)) {
                                    if ((input[22]) <= (0.22882293909788132)) {
                                        if ((input[58]) <= (-0.8131787776947021)) {
                                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[2]) <= (0.005366767756640911)) {
                                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[53]) <= (-0.2742152512073517)) {
                if ((input[76]) <= (0.6030918657779694)) {
                    if ((input[38]) <= (-0.24359769374132156)) {
                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[31]) <= (0.18238931149244308)) {
                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[72]) <= (0.3221636116504669)) {
                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[38]) <= (-0.5508474707603455)) {
                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[22]) <= (0.1916307508945465)) {
                                memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[66]) <= (0.36131973564624786)) {
                    if ((input[31]) <= (0.062119260430336)) {
                        memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                } else {
                    if ((input[1]) <= (-0.0937814861536026)) {
                        memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[76]) <= (0.8283378481864929)) {
                            if ((input[45]) <= (-0.9823755323886871)) {
                                if ((input[64]) <= (-0.542241096496582)) {
                                    memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[79]) <= (-0.6815186440944672)) {
                                    if ((input[48]) <= (-0.9659101963043213)) {
                                        if ((input[2]) <= (-0.11281942948698997)) {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[47]) <= (-0.9801557958126068)) {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[22]) <= (0.6148850917816162)) {
                                        if ((input[23]) <= (0.20888801664113998)) {
                                            memcpy(var10, (double[]){0.014492753623188406, 0.0, 0.9855072463768116, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[27]) <= (-0.12622389843454584)) {
                                            memcpy(var10, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var10, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var10, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    double var11[6];
    if ((input[16]) <= (-0.9388823211193085)) {
        if ((input[77]) <= (-0.282007172703743)) {
            if ((input[50]) <= (0.5154966413974762)) {
                if ((input[62]) <= (-0.9222413301467896)) {
                    if ((input[51]) <= (0.1552606076002121)) {
                        if ((input[57]) <= (-0.9681247174739838)) {
                            if ((input[57]) <= (-0.9997929334640503)) {
                                if ((input[24]) <= (-0.4123629629611969)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[42]) <= (0.06285667233169079)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[47]) <= (-0.9845887720584869)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[41]) <= (-0.08507003262639046)) {
                                    if ((input[76]) <= (0.8780085146427155)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[9]) <= (-0.9226662516593933)) {
                                        if ((input[42]) <= (-0.08682341128587723)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.6041666666666666, 0.3958333333333333, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.9216867469879518, 0.0783132530120482, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[38]) <= (-0.016399594023823738)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.391304347826087, 0.6086956521739131, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[49]) <= (0.876370906829834)) {
                                if ((input[58]) <= (-0.9979896247386932)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[42]) <= (-0.5840586498379707)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[56]) <= (0.6127476394176483)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[78]) <= (0.8403084874153137)) {
                                    if ((input[35]) <= (-0.22484295070171356)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[28]) <= (0.41879475116729736)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[41]) <= (-0.08418663591146469)) {
                            if ((input[17]) <= (-0.934409111738205)) {
                                if ((input[27]) <= (-0.22206245362758636)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[41]) <= (0.4076625108718872)) {
                                if ((input[10]) <= (-0.49570176005363464)) {
                                    if ((input[55]) <= (-0.4996287226676941)) {
                                        if ((input[21]) <= (-0.9556322395801544)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[56]) <= (-0.4060250371694565)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[41]) <= (-0.053141798824071884)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[44]) <= (-0.8909028172492981)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[32]) <= (-0.027793340384960175)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[42]) <= (0.7675710320472717)) {
                        if ((input[50]) <= (-0.07435580715537071)) {
                            if ((input[38]) <= (-0.3737054765224457)) {
                                if ((input[34]) <= (-0.13831208273768425)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[54]) <= (-0.2665207237005234)) {
                                if ((input[46]) <= (-0.9174569249153137)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[55]) <= (0.8412098586559296)) {
                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                }
            }
        } else {
            if ((input[57]) <= (-0.7462678849697113)) {
                if ((input[50]) <= (-0.12363813817501068)) {
                    if ((input[52]) <= (0.013397693634033203)) {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[9]) <= (-0.6178026497364044)) {
                            if ((input[60]) <= (-0.9964227080345154)) {
                                if ((input[8]) <= (-0.9717437624931335)) {
                                    if ((input[43]) <= (-0.999890148639679)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[54]) <= (0.26838474720716476)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.033707865168539325, 0.9662921348314607, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[50]) <= (-0.22285177558660507)) {
                                        if ((input[59]) <= (-0.997161477804184)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[54]) <= (-0.05882469564676285)) {
                                    if ((input[49]) <= (0.888633519411087)) {
                                        if ((input[54]) <= (-0.13350922614336014)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.02158273381294964, 0.9784172661870504, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.18691588785046728, 0.8130841121495327, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[43]) <= (-0.9934204518795013)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[51]) <= (0.26305127143859863)) {
                                        if ((input[14]) <= (0.7320816516876221)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.25, 0.75, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[15]) <= (-0.9944603741168976)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.09523809523809523, 0.9047619047619048, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[52]) <= (0.11817596852779388)) {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[56]) <= (0.9100399911403656)) {
                            if ((input[24]) <= (-0.19910595566034317)) {
                                if ((input[27]) <= (-0.17883021384477615)) {
                                    if ((input[69]) <= (-0.5961401760578156)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[61]) <= (-0.9495894908905029)) {
                                        if ((input[63]) <= (-0.5523724853992462)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.9333333333333333, 0.06666666666666667, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[61]) <= (-0.9454702138900757)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.92, 0.08, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[32]) <= (-0.25786009430885315)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[60]) <= (-0.9972949624061584)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[3]) <= (-0.92826908826828)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.8918918918918919, 0.10810810810810811, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.4, 0.6, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[0]) <= (0.2768613249063492)) {
                                if ((input[54]) <= (-0.053603457286953926)) {
                                    if ((input[57]) <= (-0.9993671476840973)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[51]) <= (0.1265220046043396)) {
                                        if ((input[22]) <= (-0.1534101814031601)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.05405405405405406, 0.9459459459459459, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[39]) <= (-0.07120868191123009)) {
                                    if ((input[29]) <= (-0.12881578912492841)) {
                                        if ((input[77]) <= (0.9437843263149261)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[50]) <= (0.007761291228234768)) {
                                        if ((input[78]) <= (0.2608359381556511)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.08333333333333333, 0.9166666666666666, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.6, 0.4, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[39]) <= (0.059770189225673676)) {
                    if ((input[1]) <= (0.013992170803248882)) {
                        if ((input[40]) <= (0.15854656510055065)) {
                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[64]) <= (-0.006745010614395142)) {
                            if ((input[2]) <= (-0.07075243349027005)) {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[57]) <= (-0.2562515586614609)) {
                        if ((input[40]) <= (0.050383470952510834)) {
                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            if ((input[47]) <= (-0.9648431837558746)) {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if ((input[75]) <= (-0.6294079422950745)) {
            if ((input[50]) <= (0.313448004424572)) {
                if ((input[9]) <= (0.4454791694879532)) {
                    if ((input[54]) <= (0.23502510786056519)) {
                        if ((input[69]) <= (-0.24672351777553558)) {
                            if ((input[53]) <= (-0.1682688444852829)) {
                                if ((input[36]) <= (-0.5034043192863464)) {
                                    if ((input[28]) <= (0.12795523181557655)) {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[24]) <= (0.42148466408252716)) {
                                        if ((input[74]) <= (0.6322646737098694)) {
                                            memcpy(var11, (double[]){0.08888888888888889, 0.8814814814814815, 0.02962962962962963, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.008658008658008658, 0.98989898989899, 0.001443001443001443, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[74]) <= (0.6828309297561646)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.8888888888888888, 0.1111111111111111, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[55]) <= (-0.13384024240076542)) {
                                    if ((input[52]) <= (0.956206887960434)) {
                                        if ((input[32]) <= (0.1640005148947239)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[28]) <= (0.36517536640167236)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[60]) <= (-0.9836231172084808)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[56]) <= (0.7621330618858337)) {
                                if ((input[19]) <= (-0.5467861294746399)) {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[31]) <= (0.44529785215854645)) {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[50]) <= (-0.0903090387582779)) {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[3]) <= (-0.46791598200798035)) {
                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[50]) <= (-0.316465824842453)) {
                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[68]) <= (0.6683041453361511)) {
                            if ((input[40]) <= (0.9224820733070374)) {
                                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[37]) <= (-0.9426487386226654)) {
                    if ((input[4]) <= (-0.42115454375743866)) {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                } else {
                    memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                }
            }
        } else {
            if ((input[66]) <= (0.6042696833610535)) {
                if ((input[38]) <= (-0.4324992746114731)) {
                    if ((input[71]) <= (-0.246794693171978)) {
                        if ((input[75]) <= (0.0689144916832447)) {
                            if ((input[70]) <= (0.17494601011276245)) {
                                memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[40]) <= (0.7892619967460632)) {
                                    memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[36]) <= (-0.03303831070661545)) {
                            if ((input[57]) <= (-0.9573816359043121)) {
                                if ((input[37]) <= (-0.1805412843823433)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[71]) <= (-0.22156905382871628)) {
                                if ((input[51]) <= (-0.12593736872076988)) {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[0]) <= (0.17090871930122375)) {
                        if ((input[9]) <= (0.11892934143543243)) {
                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[3]) <= (-0.05685524083673954)) {
                            if ((input[37]) <= (-0.36579430103302)) {
                                if ((input[71]) <= (-0.2775462418794632)) {
                                    if ((input[43]) <= (-0.9818871319293976)) {
                                        if ((input[57]) <= (-0.9119726121425629)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[69]) <= (-0.19931790232658386)) {
                                            memcpy(var11, (double[]){0.09090909090909091, 0.9090909090909091, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[48]) <= (-0.9257267415523529)) {
                                        if ((input[4]) <= (0.35432468354701996)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[23]) <= (0.04913495108485222)) {
                                    if ((input[13]) <= (0.10933507233858109)) {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[77]) <= (0.1963699283078313)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[55]) <= (0.613052099943161)) {
                                        if ((input[13]) <= (-0.45971670746803284)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.9915764139590855, 0.007220216606498195, 0.0012033694344163659, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[36]) <= (-0.0160287544131279)) {
                                if ((input[3]) <= (0.01455896720290184)) {
                                    if ((input[50]) <= (-0.2952887862920761)) {
                                        if ((input[70]) <= (0.0803739782422781)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[37]) <= (-0.3228033632040024)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.5454545454545454, 0.36363636363636365, 0.09090909090909091, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[77]) <= (0.9487329125404358)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[34]) <= (0.15904632024466991)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[22]) <= (0.35808345675468445)) {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[48]) <= (-0.9364579617977142)) {
                                        if ((input[34]) <= (0.5519657731056213)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[53]) <= (-0.2133859470486641)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[41]) <= (-0.30374282598495483)) {
                    if ((input[19]) <= (-0.14849942922592163)) {
                        if ((input[16]) <= (-0.46812817454338074)) {
                            if ((input[5]) <= (-0.05209334008395672)) {
                                memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[66]) <= (0.7465502023696899)) {
                                    memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[56]) <= (0.7245144248008728)) {
                                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[75]) <= (-0.5662295520305634)) {
                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[9]) <= (0.3168316185474396)) {
                                memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[19]) <= (-0.31523333489894867)) {
                        if ((input[47]) <= (-0.9643564522266388)) {
                            if ((input[46]) <= (-0.9465746879577637)) {
                                if ((input[28]) <= (0.27109627425670624)) {
                                    if ((input[37]) <= (-0.3464779704809189)) {
                                        if ((input[17]) <= (-0.8545089960098267)) {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[70]) <= (0.42353135347366333)) {
                                        if ((input[22]) <= (0.13116532564163208)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.8125, 0.0, 0.1875, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[24]) <= (0.11574700474739075)) {
                                    memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[75]) <= (-0.4886228144168854)) {
                                if ((input[6]) <= (-0.23401552438735962)) {
                                    if ((input[12]) <= (0.1427062451839447)) {
                                        if ((input[23]) <= (0.3022596538066864)) {
                                            memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.4, 0.0, 0.4, 0.0, 0.0, 0.2}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[54]) <= (0.24737393110990524)) {
                                            memcpy(var11, (double[]){0.6875, 0.14583333333333334, 0.16666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[60]) <= (-0.8858193755149841)) {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[16]) <= (-0.7880680859088898)) {
                                    if ((input[50]) <= (-0.09592579305171967)) {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[34]) <= (0.11724318191409111)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[56]) <= (0.9181310832500458)) {
                                        if ((input[48]) <= (-0.980187177658081)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.01639344262295082, 0.9836065573770492, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[70]) <= (0.0356125608086586)) {
                            if ((input[16]) <= (-0.4378819912672043)) {
                                if ((input[67]) <= (-0.6919989883899689)) {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[77]) <= (0.34954724583076313)) {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[22]) <= (0.4480099678039551)) {
                                if ((input[54]) <= (-0.3536084294319153)) {
                                    memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[44]) <= (-0.7495578527450562)) {
                                        if ((input[16]) <= (-0.6877763569355011)) {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.01288659793814433, 0.0, 0.9871134020618557, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[3]) <= (-0.03612454794347286)) {
                                            memcpy(var11, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[18]) <= (-0.7487309277057648)) {
                                    if ((input[30]) <= (0.5111061930656433)) {
                                        if ((input[7]) <= (-0.1401800513267517)) {
                                            memcpy(var11, (double[]){0.5, 0.0, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[2]) <= (-0.07410892099142075)) {
                                        memcpy(var11, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var11, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var10, var11, 6, var9);
    double var12[6];
    if ((input[56]) <= (-0.672631561756134)) {
        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
    } else {
        if ((input[15]) <= (-0.4943205863237381)) {
            if ((input[41]) <= (-0.08447166532278061)) {
                if ((input[36]) <= (-0.02352872397750616)) {
                    if ((input[42]) <= (-0.05568780563771725)) {
                        if ((input[50]) <= (-0.12436878308653831)) {
                            if ((input[28]) <= (0.08523974195122719)) {
                                if ((input[29]) <= (-0.521155908703804)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[55]) <= (-0.3704574853181839)) {
                                        if ((input[2]) <= (-0.10933754593133926)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[43]) <= (-0.9963169097900391)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.09375, 0.90625, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.005555555555555556, 0.9944444444444445, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[56]) <= (0.8692242503166199)) {
                                    if ((input[79]) <= (-0.9628195762634277)) {
                                        if ((input[2]) <= (-0.10190577059984207)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[43]) <= (-0.996645987033844)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.13793103448275862, 0.8620689655172413, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[69]) <= (-0.6584133803844452)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[44]) <= (-0.9833946526050568)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[40]) <= (0.8938422203063965)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[58]) <= (-0.9512542188167572)) {
                                        if ((input[2]) <= (-0.19194698333740234)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[7]) <= (-0.9943794906139374)) {
                            if ((input[44]) <= (-0.9916762709617615)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[16]) <= (-0.9636090099811554)) {
                                if ((input[44]) <= (-0.742932140827179)) {
                                    if ((input[51]) <= (0.26105593889951706)) {
                                        if ((input[18]) <= (-0.9780973494052887)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.03225806451612903, 0.967741935483871, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[35]) <= (0.019550720928236842)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.03333333333333333, 0.9666666666666667, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[3]) <= (-0.9201765954494476)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[2]) <= (-0.09171785041689873)) {
                        if ((input[44]) <= (-0.8752003014087677)) {
                            if ((input[79]) <= (-0.952539324760437)) {
                                if ((input[33]) <= (0.1826019510626793)) {
                                    if ((input[57]) <= (-0.9106049835681915)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[59]) <= (-0.9997326731681824)) {
                                    if ((input[42]) <= (-0.029864682679999532)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[54]) <= (0.2700894922018051)) {
                                        if ((input[49]) <= (0.7867553532123566)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.2222222222222222, 0.7777777777777778, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.019305019305019305, 0.9806949806949807, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[4]) <= (-0.9832991063594818)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[54]) <= (-0.0792058352380991)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[42]) <= (-0.05577745474874973)) {
                            if ((input[52]) <= (0.9676544368267059)) {
                                if ((input[34]) <= (0.05473253317177296)) {
                                    if ((input[70]) <= (0.6347401738166809)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[16]) <= (-0.999779224395752)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[42]) <= (-0.16949791461229324)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[58]) <= (-0.8834612369537354)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[17]) <= (-0.9997498691082001)) {
                    if ((input[55]) <= (-0.8204442262649536)) {
                        if ((input[51]) <= (-0.011415896471589804)) {
                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[52]) <= (0.9906944930553436)) {
                            if ((input[15]) <= (-0.9863402545452118)) {
                                if ((input[2]) <= (-0.11946151033043861)) {
                                    if ((input[19]) <= (-0.9979860186576843)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[73]) <= (-0.5636938214302063)) {
                                        if ((input[29]) <= (-0.007092407904565334)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[50]) <= (0.038547907024621964)) {
                                    if ((input[39]) <= (-0.6054686605930328)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[53]) <= (0.08563921973109245)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.9210526315789473, 0.07894736842105263, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[52]) <= (0.9921326041221619)) {
                                if ((input[68]) <= (0.29979291558265686)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[9]) <= (-0.9399073123931885)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[26]) <= (-0.3442185968160629)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[54]) <= (0.18718601763248444)) {
                        if ((input[57]) <= (-0.9791257679462433)) {
                            if ((input[68]) <= (0.1859302669763565)) {
                                if ((input[31]) <= (-0.10087085142731667)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[50]) <= (0.035121504217386246)) {
                                    if ((input[51]) <= (0.04041570983827114)) {
                                        if ((input[52]) <= (0.9824547171592712)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.5151515151515151, 0.48484848484848486, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.8909090909090909, 0.10909090909090909, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[19]) <= (-0.9953596293926239)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.11428571428571428, 0.8857142857142857, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.5233644859813084, 0.4766355140186916, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[63]) <= (-0.31759093701839447)) {
                                        if ((input[72]) <= (0.7229975759983063)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.8275862068965517, 0.1724137931034483, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[74]) <= (0.9284795820713043)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.9090909090909091, 0.09090909090909091, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[65]) <= (-0.9848326742649078)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[22]) <= (0.26657964289188385)) {
                            memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[47]) <= (-0.8962061703205109)) {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[19]) <= (-0.23419758677482605)) {
                if ((input[74]) <= (0.6016908884048462)) {
                    if ((input[22]) <= (0.1732190027832985)) {
                        if ((input[9]) <= (0.04717456176877022)) {
                            if ((input[41]) <= (-0.33409664034843445)) {
                                memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[16]) <= (-0.7248131930828094)) {
                                    if ((input[13]) <= (0.321715384721756)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[20]) <= (-0.35307058691978455)) {
                                memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[13]) <= (0.04309260845184326)) {
                                    if ((input[24]) <= (0.15987470000982285)) {
                                        if ((input[41]) <= (-0.2837587147951126)) {
                                            memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[37]) <= (-0.3512502908706665)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.25, 0.75, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[43]) <= (-0.9718379378318787)) {
                                        if ((input[56]) <= (0.8666827380657196)) {
                                            memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[71]) <= (-0.49009284377098083)) {
                            if ((input[8]) <= (-0.4483475685119629)) {
                                if ((input[66]) <= (0.6137963533401489)) {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[26]) <= (0.12021709978580475)) {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[57]) <= (-0.9807839095592499)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[22]) <= (0.21173162013292313)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[53]) <= (-0.14641911536455154)) {
                                            memcpy(var12, (double[]){0.015625, 0.9375, 0.046875, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[16]) <= (-0.5828960835933685)) {
                                if ((input[53]) <= (-0.08111276850104332)) {
                                    if ((input[55]) <= (0.2036307081580162)) {
                                        if ((input[69]) <= (-0.4302460700273514)) {
                                            memcpy(var12, (double[]){0.2727272727272727, 0.09090909090909091, 0.6363636363636364, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.973384030418251, 0.01394169835234474, 0.012674271229404309, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[69]) <= (-0.2396644800901413)) {
                                            memcpy(var12, (double[]){0.4745762711864407, 0.5254237288135594, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.9824561403508771, 0.017543859649122806, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[6]) <= (-0.2925832122564316)) {
                                        if ((input[68]) <= (0.7578074038028717)) {
                                            memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.10714285714285714, 0.0, 0.8928571428571429, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[57]) <= (-0.8451894819736481)) {
                                    if ((input[74]) <= (-0.010616416111588478)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[48]) <= (-0.8257558643817902)) {
                                            memcpy(var12, (double[]){0.0125, 0.025, 0.9625, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.4444444444444444, 0.0, 0.5555555555555556, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[6]) <= (-0.15876470506191254)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[71]) <= (-0.3188660591840744)) {
                        if ((input[16]) <= (-0.9148759841918945)) {
                            if ((input[67]) <= (-0.664271205663681)) {
                                if ((input[17]) <= (-0.9017070829868317)) {
                                    if ((input[34]) <= (0.0007535405457019806)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[38]) <= (-0.5943783521652222)) {
                                if ((input[75]) <= (-0.7346534729003906)) {
                                    memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[67]) <= (-0.7950672209262848)) {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[71]) <= (-0.4130742847919464)) {
                                    if ((input[38]) <= (0.3658771514892578)) {
                                        if ((input[38]) <= (0.07374706864356995)) {
                                            memcpy(var12, (double[]){0.011725293132328308, 0.9865996649916248, 0.0016750418760469012, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.16666666666666666, 0.8333333333333334, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[62]) <= (-0.9084505140781403)) {
                                        if ((input[64]) <= (-0.433284267783165)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[57]) <= (-0.9611086249351501)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.037037037037037035, 0.9629629629629629, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[49]) <= (0.8334901034832001)) {
                            if ((input[5]) <= (0.027716062671970576)) {
                                if ((input[25]) <= (-0.013854808639734983)) {
                                    memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[39]) <= (-0.01913450099527836)) {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[6]) <= (-0.15311500057578087)) {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[9]) <= (0.23523076809942722)) {
                                if ((input[37]) <= (-0.24871312081813812)) {
                                    if ((input[7]) <= (-0.20958158373832703)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[50]) <= (-0.2807832360267639)) {
                    if ((input[24]) <= (0.24443788826465607)) {
                        if ((input[61]) <= (-0.986946314573288)) {
                            if ((input[65]) <= (-0.5842772722244263)) {
                                memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[66]) <= (0.5744989514350891)) {
                                if ((input[11]) <= (-0.17592233419418335)) {
                                    if ((input[32]) <= (-0.036545757204294205)) {
                                        memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[6]) <= (0.24723166227340698)) {
                                    if ((input[23]) <= (0.4481118321418762)) {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[8]) <= (-0.24708056449890137)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[9]) <= (0.12163694575428963)) {
                            if ((input[24]) <= (0.3923395574092865)) {
                                memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[74]) <= (0.6855440437793732)) {
                                memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[68]) <= (0.6324081420898438)) {
                        if ((input[60]) <= (-0.9667388200759888)) {
                            memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[26]) <= (0.43374204635620117)) {
                                if ((input[16]) <= (-0.5097886770963669)) {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[10]) <= (-0.011928528547286987)) {
                                    memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[75]) <= (-0.7648423314094543)) {
                            if ((input[43]) <= (-0.08727684617042542)) {
                                memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var12, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[3]) <= (0.018936615902930498)) {
                                if ((input[37]) <= (-0.3569401055574417)) {
                                    if ((input[45]) <= (-0.9680060744285583)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[23]) <= (0.01175504270941019)) {
                                            memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.045454545454545456, 0.0, 0.9545454545454546, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[75]) <= (-0.6503712236881256)) {
                                        memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[22]) <= (0.33045993745326996)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.9827586206896551, 0.017241379310344827, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[28]) <= (-0.031678058207035065)) {
                                    if ((input[48]) <= (-0.9719433188438416)) {
                                        memcpy(var12, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[23]) <= (0.15773969888687134)) {
                                            memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[65]) <= (-0.7426950335502625)) {
                                        if ((input[17]) <= (-0.6930932402610779)) {
                                            memcpy(var12, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[3]) <= (0.04832322709262371)) {
                                            memcpy(var12, (double[]){0.13043478260869565, 0.0, 0.8695652173913043, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var12, (double[]){0.007207207207207207, 0.0, 0.9927927927927928, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var9, var12, 6, var8);
    double var13[6];
    if ((input[14]) <= (0.6867888569831848)) {
        if ((input[72]) <= (0.5466660857200623)) {
            if ((input[6]) <= (-0.09178999811410904)) {
                if ((input[37]) <= (-0.22282227128744125)) {
                    if ((input[56]) <= (0.8056976497173309)) {
                        if ((input[54]) <= (0.22647608816623688)) {
                            if ((input[24]) <= (0.41861486434936523)) {
                                if ((input[20]) <= (-0.229463092982769)) {
                                    if ((input[9]) <= (0.316840797662735)) {
                                        if ((input[69]) <= (-0.17760225385427475)) {
                                            memcpy(var13, (double[]){0.0, 0.967479674796748, 0.016260162601626018, 0.0, 0.0, 0.016260162601626018}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.6923076923076923, 0.23076923076923078, 0.0, 0.0, 0.07692307692307693, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[73]) <= (-0.16962222009897232)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[65]) <= (-0.41449297964572906)) {
                                        if ((input[50]) <= (-0.19755256921052933)) {
                                            memcpy(var13, (double[]){0.0375, 0.9125, 0.05, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.6666666666666666, 0.0, 0.3333333333333333, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[48]) <= (-0.8874689042568207)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[3]) <= (-0.163960263133049)) {
                                    if ((input[5]) <= (-0.11007769964635372)) {
                                        if ((input[38]) <= (-0.5780542492866516)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[43]) <= (-0.9814313650131226)) {
                            if ((input[39]) <= (-0.31255343556404114)) {
                                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[65]) <= (-0.5740413963794708)) {
                                    if ((input[71]) <= (-0.39393095672130585)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[67]) <= (0.03776425123214722)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[16]) <= (-0.6830369532108307)) {
                                if ((input[51]) <= (-0.04055185243487358)) {
                                    if ((input[73]) <= (-0.5019336938858032)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[3]) <= (-0.3278210908174515)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[57]) <= (-0.9521357417106628)) {
                                        if ((input[65]) <= (-0.5598059296607971)) {
                                            memcpy(var13, (double[]){0.17647058823529413, 0.0, 0.8235294117647058, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.8, 0.0, 0.0, 0.2, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[4]) <= (0.11753210425376892)) {
                                    if ((input[22]) <= (0.5531773269176483)) {
                                        if ((input[28]) <= (-0.23556961864233017)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.028169014084507043, 0.971830985915493, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[57]) <= (-0.9420586824417114)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[52]) <= (0.9560588300228119)) {
                                        if ((input[75]) <= (-0.42976222932338715)) {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[65]) <= (-0.47984470427036285)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[74]) <= (0.637162059545517)) {
                        if ((input[62]) <= (-0.3045955300331116)) {
                            if ((input[50]) <= (0.1088472232222557)) {
                                if ((input[20]) <= (-0.7709786593914032)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[47]) <= (-0.9025726616382599)) {
                                        if ((input[26]) <= (0.8794136643409729)) {
                                            memcpy(var13, (double[]){0.9931740614334471, 0.004550625711035267, 0.0022753128555176336, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[24]) <= (0.20964767038822174)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[37]) <= (-0.12725353240966797)) {
                                if ((input[74]) <= (0.4164222925901413)) {
                                    if ((input[40]) <= (0.9163409769535065)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[24]) <= (0.16723670298233628)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[45]) <= (-0.9250843524932861)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[10]) <= (0.12500756327062845)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[27]) <= (-0.2813614159822464)) {
                                    if ((input[10]) <= (-0.057874247431755066)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[55]) <= (0.20278719812631607)) {
                            if ((input[74]) <= (0.7616668045520782)) {
                                if ((input[11]) <= (-0.625528559088707)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[61]) <= (-0.7206365168094635)) {
                                    if ((input[61]) <= (-0.8094108700752258)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[59]) <= (-0.9852133691310883)) {
                                if ((input[13]) <= (0.2408287189900875)) {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[66]) <= (0.6132027208805084)) {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[55]) <= (-0.24945184588432312)) {
                    if ((input[22]) <= (0.46123063564300537)) {
                        if ((input[60]) <= (-0.6862636804580688)) {
                            if ((input[25]) <= (-0.057696208357810974)) {
                                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[59]) <= (-0.9535332918167114)) {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[8]) <= (-0.363789826631546)) {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[60]) <= (-0.9851194322109222)) {
                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[3]) <= (0.05226026847958565)) {
                                if ((input[27]) <= (-0.3671911805868149)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[43]) <= (-0.9280298054218292)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[68]) <= (0.6310282051563263)) {
                        if ((input[38]) <= (-0.5879444777965546)) {
                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[10]) <= (0.43521595001220703)) {
                                if ((input[62]) <= (-0.40878014266490936)) {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[22]) <= (0.4890925735235214)) {
                            if ((input[25]) <= (-0.40493276715278625)) {
                                if ((input[42]) <= (-0.0676928460597992)) {
                                    if ((input[69]) <= (-0.0748228756710887)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[16]) <= (-0.42381682991981506)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[37]) <= (-0.7314151227474213)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[74]) <= (-0.08586674369871616)) {
                                    memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[34]) <= (-0.2436770647764206)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[16]) <= (-0.45125730335712433)) {
                                            memcpy(var13, (double[]){0.10526315789473684, 0.05263157894736842, 0.8421052631578947, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[53]) <= (-0.27978014945983887)) {
                                if ((input[69]) <= (0.005358068272471428)) {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[53]) <= (-0.17397620528936386)) {
                if ((input[19]) <= (-0.14999321103096008)) {
                    if ((input[20]) <= (-0.6247678697109222)) {
                        if ((input[24]) <= (-0.31579574942588806)) {
                            if ((input[79]) <= (0.8675579726696014)) {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[75]) <= (-0.313402995467186)) {
                            if ((input[69]) <= (-0.8317452371120453)) {
                                if ((input[69]) <= (-0.9285997450351715)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[69]) <= (-0.4065544605255127)) {
                                    if ((input[16]) <= (-0.4529019892215729)) {
                                        if ((input[37]) <= (-0.7101221084594727)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.015503875968992248, 0.9782945736434109, 0.006201550387596899, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[1]) <= (-0.01570628024637699)) {
                                            memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[14]) <= (0.5963937938213348)) {
                                        if ((input[6]) <= (-0.3807491660118103)) {
                                            memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.06, 0.82, 0.12, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[65]) <= (-0.549706220626831)) {
                                if ((input[52]) <= (0.940472811460495)) {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[69]) <= (-0.36743077635765076)) {
                        if ((input[50]) <= (-0.29131193459033966)) {
                            if ((input[38]) <= (-0.4642989784479141)) {
                                memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[36]) <= (0.29261527955532074)) {
                                if ((input[42]) <= (-0.2511352673172951)) {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[73]) <= (-0.7604919970035553)) {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[40]) <= (0.31986244581639767)) {
                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[12]) <= (0.4682168960571289)) {
                        if ((input[37]) <= (-0.27978096157312393)) {
                            if ((input[49]) <= (0.8388795554637909)) {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[70]) <= (0.3531145453453064)) {
                                    if ((input[23]) <= (0.20641528069972992)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[77]) <= (0.9323674440383911)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[58]) <= (-0.9117792844772339)) {
                                if ((input[45]) <= (-0.7834447622299194)) {
                                    if ((input[10]) <= (0.12465301901102066)) {
                                        memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[55]) <= (-0.5859023630619049)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[41]) <= (-0.013860005419701338)) {
                            if ((input[45]) <= (-0.7256789803504944)) {
                                if ((input[8]) <= (-0.7842452526092529)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            }
        }
    } else {
        if ((input[54]) <= (0.39897479116916656)) {
            if ((input[60]) <= (-0.9957252740859985)) {
                if ((input[57]) <= (0.02038714289665222)) {
                    if ((input[40]) <= (0.8986202776432037)) {
                        if ((input[56]) <= (-0.42255568504333496)) {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            if ((input[45]) <= (-0.9821163415908813)) {
                                if ((input[38]) <= (0.05554034747183323)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[9]) <= (-0.9435307085514069)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[25]) <= (0.030551139265298843)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[78]) <= (0.06245771050453186)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[57]) <= (-0.9575531780719757)) {
                            if ((input[12]) <= (0.8528349697589874)) {
                                if ((input[40]) <= (0.9760569632053375)) {
                                    if ((input[51]) <= (0.13906452804803848)) {
                                        if ((input[54]) <= (0.07031659409403801)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.7872340425531915, 0.2127659574468085, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.34375, 0.65625, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[23]) <= (-0.23572908341884613)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[48]) <= (-0.9873129725456238)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[38]) <= (-0.17962875217199326)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[30]) <= (-0.08455356769263744)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[17]) <= (-0.9999716579914093)) {
                                if ((input[51]) <= (0.08845831267535686)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[71]) <= (-0.040728237479925156)) {
                                    if ((input[50]) <= (-0.021565958857536316)) {
                                        if ((input[8]) <= (-0.9816245138645172)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.14634146341463414, 0.8536585365853658, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[54]) <= (0.12204556167125702)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[54]) <= (0.2570376768708229)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                }
            } else {
                if ((input[43]) <= (-0.9891919791698456)) {
                    if ((input[63]) <= (-0.983412116765976)) {
                        if ((input[28]) <= (0.01675649918615818)) {
                            if ((input[56]) <= (-0.17366182804107666)) {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[50]) <= (-0.12307735159993172)) {
                                    if ((input[70]) <= (0.8627465665340424)) {
                                        if ((input[20]) <= (-0.991937130689621)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.25, 0.75, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.022556390977443608, 0.9774436090225563, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[27]) <= (0.4088435769081116)) {
                                        if ((input[58]) <= (-0.9472160339355469)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.2222222222222222, 0.7777777777777778, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.9285714285714286, 0.07142857142857142, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[77]) <= (-0.903503805398941)) {
                                if ((input[69]) <= (-0.5973243415355682)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[7]) <= (-0.92980095744133)) {
                                        if ((input[51]) <= (-0.14762884005904198)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.925, 0.075, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[29]) <= (0.25159986317157745)) {
                                    if ((input[13]) <= (0.6954836845397949)) {
                                        if ((input[57]) <= (-0.9942564964294434)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.9230769230769231, 0.07692307692307693, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.06981519507186858, 0.9219712525667351, 0.008213552361396304}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[27]) <= (0.09768973663449287)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[23]) <= (-0.5322018265724182)) {
                                        if ((input[66]) <= (0.6529149413108826)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.14285714285714285, 0.8441558441558441, 0.012987012987012988}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[40]) <= (0.08081087470054626)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.6176470588235294, 0.38235294117647056, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[57]) <= (-0.9841856956481934)) {
                            if ((input[67]) <= (-0.6658772826194763)) {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[22]) <= (-0.5994884371757507)) {
                                    if ((input[22]) <= (-0.662754476070404)) {
                                        if ((input[35]) <= (0.03976080380380154)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.15789473684210525, 0.8421052631578947, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.7317073170731707, 0.2682926829268293, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[41]) <= (-0.011801650281995535)) {
                                        if ((input[51]) <= (-0.02064648177474737)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[9]) <= (-0.9351701438426971)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.1111111111111111, 0.8888888888888888, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.6136363636363636, 0.38636363636363635, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[42]) <= (-0.10863359458744526)) {
                                if ((input[62]) <= (-0.9749467968940735)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[56]) <= (-0.19059646129608154)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[52]) <= (0.2772911302745342)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[63]) <= (-0.9081035554409027)) {
                        if ((input[16]) <= (-0.9412039518356323)) {
                            if ((input[41]) <= (-0.14947206526994705)) {
                                if ((input[51]) <= (-0.6739641577005386)) {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[61]) <= (-0.9858598709106445)) {
                                        if ((input[32]) <= (-0.3098330721259117)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[5]) <= (-0.9388088881969452)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0196078431372549, 0.9803921568627451, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[67]) <= (-0.4411746710538864)) {
                                    if ((input[49]) <= (0.9028823971748352)) {
                                        if ((input[71]) <= (-0.9736303091049194)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.88, 0.12, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[34]) <= (0.3693445324897766)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[53]) <= (-0.04339020233601332)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[78]) <= (-0.5026871711015701)) {
                                memcpy(var13, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[49]) <= (0.8749706447124481)) {
                                    memcpy(var13, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[39]) <= (0.361055925488472)) {
                            if ((input[6]) <= (-0.9580799639225006)) {
                                if ((input[72]) <= (0.6520686447620392)) {
                                    if ((input[10]) <= (-0.5226885974407196)) {
                                        if ((input[49]) <= (0.30312053114175797)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[59]) <= (-0.9864757359027863)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.9230769230769231, 0.0, 0.07692307692307693}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[47]) <= (-0.9667910933494568)) {
                                        if ((input[58]) <= (-0.9279943406581879)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.6666666666666666, 0.3333333333333333}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.9090909090909091, 0.0, 0.09090909090909091}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[73]) <= (-0.955497533082962)) {
                                    if ((input[57]) <= (-0.02230001986026764)) {
                                        if ((input[27]) <= (0.11100383661687374)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[15]) <= (-0.723026692867279)) {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[51]) <= (-0.15838433802127838)) {
                                memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[57]) <= (0.20154906809329987)) {
                                    if ((input[21]) <= (-0.13772632740437984)) {
                                        if ((input[41]) <= (-0.023661349900066853)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.7777777777777778, 0.2222222222222222, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[67]) <= (-0.9703194200992584)) {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.6666666666666666, 0.3333333333333333}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[55]) <= (0.6971878111362457)) {
                if ((input[39]) <= (0.20374184101819992)) {
                    if ((input[50]) <= (0.23682764172554016)) {
                        if ((input[52]) <= (0.2669322267174721)) {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                } else {
                    if ((input[12]) <= (0.8330502808094025)) {
                        if ((input[52]) <= (0.320892333984375)) {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[40]) <= (0.3556899167597294)) {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[53]) <= (0.6623384654521942)) {
                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                } else {
                    memcpy(var13, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var8, var13, 6, var7);
    double var14[6];
    if ((input[56]) <= (-0.6786419153213501)) {
        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
    } else {
        if ((input[4]) <= (-0.5088459253311157)) {
            if ((input[37]) <= (-0.11487893387675285)) {
                if ((input[41]) <= (-0.08470619842410088)) {
                    if ((input[42]) <= (0.26544127613306046)) {
                        if ((input[46]) <= (-0.937421053647995)) {
                            if ((input[53]) <= (-0.07449566200375557)) {
                                if ((input[44]) <= (-0.9981055557727814)) {
                                    if ((input[48]) <= (-0.9859392642974854)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[57]) <= (-0.988725334405899)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[16]) <= (-0.9979367852210999)) {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[44]) <= (-0.9960263669490814)) {
                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[39]) <= (-0.15005481243133545)) {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[49]) <= (0.871313214302063)) {
                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[41]) <= (0.07387731969356537)) {
                            if ((input[55]) <= (-0.39985324442386627)) {
                                if ((input[7]) <= (-0.9839829206466675)) {
                                    if ((input[57]) <= (-0.9999685883522034)) {
                                        if ((input[12]) <= (0.8515638411045074)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[26]) <= (0.07562199607491493)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.9571428571428572, 0.04285714285714286, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.4, 0.6, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[29]) <= (0.28846143186092377)) {
                                        if ((input[45]) <= (-0.8919110894203186)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.5158730158730159, 0.48412698412698413, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.8484848484848485, 0.15151515151515152, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[15]) <= (-0.8508160412311554)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[49]) <= (0.8720016479492188)) {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[51]) <= (0.1541380137205124)) {
                    if ((input[50]) <= (-0.10176105797290802)) {
                        if ((input[3]) <= (-0.9997560679912567)) {
                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[8]) <= (-0.980215847492218)) {
                                if ((input[75]) <= (-0.8891906142234802)) {
                                    if ((input[39]) <= (-0.18125881254673004)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[78]) <= (0.9972025156021118)) {
                                        if ((input[2]) <= (-0.09165490046143532)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.25, 0.75, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[60]) <= (-0.9874138534069061)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[8]) <= (-0.9796232581138611)) {
                                    if ((input[60]) <= (-0.9806992709636688)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[71]) <= (-0.3800994008779526)) {
                                        if ((input[14]) <= (0.7901636362075806)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.15476190476190477, 0.8452380952380952, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.034482758620689655, 0.9655172413793104, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[49]) <= (0.8784449398517609)) {
                                            memcpy(var14, (double[]){0.013157894736842105, 0.0, 0.0, 0.07894736842105263, 0.9078947368421053, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.36363636363636365, 0.6363636363636364, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[58]) <= (-0.9792342782020569)) {
                            if ((input[50]) <= (0.04661394841969013)) {
                                if ((input[58]) <= (-0.9825779497623444)) {
                                    if ((input[3]) <= (-0.9759902358055115)) {
                                        if ((input[5]) <= (-0.9895830154418945)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.9130434782608695, 0.08695652173913043, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[31]) <= (-0.08112083747982979)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0625, 0.9375, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[37]) <= (0.16534603387117386)) {
                                        if ((input[32]) <= (0.24114399403333664)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.10810810810810811, 0.8918918918918919, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[18]) <= (-0.9991149306297302)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[12]) <= (0.772373378276825)) {
                                if ((input[23]) <= (-0.6773520410060883)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[65]) <= (-0.5288589894771576)) {
                                    if ((input[13]) <= (0.6930120885372162)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[8]) <= (-0.8362253308296204)) {
                                        if ((input[23]) <= (-0.7686131596565247)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.8571428571428571, 0.14285714285714285, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[22]) <= (-0.11908567044883966)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[53]) <= (-0.13912111520767212)) {
                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[40]) <= (0.953011155128479)) {
                            if ((input[36]) <= (-0.3599643409252167)) {
                                if ((input[41]) <= (-0.016905982978641987)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[54]) <= (0.3423890620470047)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[42]) <= (0.3539208322763443)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[18]) <= (-0.9942820966243744)) {
                                if ((input[22]) <= (-0.6557362079620361)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[9]) <= (-0.9352673292160034)) {
                                        if ((input[78]) <= (-0.9311869442462921)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[6]) <= (-0.05949930474162102)) {
                if ((input[72]) <= (0.48565123975276947)) {
                    if ((input[74]) <= (0.6009493470191956)) {
                        if ((input[47]) <= (-0.9645222723484039)) {
                            if ((input[3]) <= (-0.1633400246500969)) {
                                if ((input[69]) <= (-0.38325823843479156)) {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[53]) <= (-0.36173176765441895)) {
                                        if ((input[71]) <= (-0.11544199287891388)) {
                                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[37]) <= (-0.4078220874071121)) {
                                            memcpy(var14, (double[]){0.6451612903225806, 0.03225806451612903, 0.3225806451612903, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.9971469329529244, 0.0, 0.0028530670470756064, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[20]) <= (-0.2710579037666321)) {
                                    if ((input[22]) <= (0.33796966075897217)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[26]) <= (-0.005556823685765266)) {
                                            memcpy(var14, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.9444444444444444, 0.05555555555555555, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[15]) <= (-0.024588207714259624)) {
                                        if ((input[11]) <= (-0.40453144907951355)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.1, 0.9, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[56]) <= (0.6328617334365845)) {
                                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.9090909090909091, 0.0, 0.09090909090909091, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[28]) <= (0.10369803011417389)) {
                                if ((input[43]) <= (-0.9326636493206024)) {
                                    if ((input[58]) <= (-0.9977016150951385)) {
                                        if ((input[37]) <= (-0.34502312541007996)) {
                                            memcpy(var14, (double[]){0.2, 0.0, 0.8, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.6, 0.4, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[18]) <= (-0.2571873441338539)) {
                                            memcpy(var14, (double[]){0.9692307692307692, 0.0, 0.03076923076923077, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[8]) <= (-0.2761869430541992)) {
                                        if ((input[17]) <= (-0.7533158957958221)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[49]) <= (0.8016403913497925)) {
                                    if ((input[19]) <= (-0.5303514003753662)) {
                                        memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[78]) <= (0.9059802293777466)) {
                                            memcpy(var14, (double[]){0.05555555555555555, 0.9444444444444444, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[65]) <= (-0.5581508278846741)) {
                                        if ((input[29]) <= (-0.11608072370290756)) {
                                            memcpy(var14, (double[]){0.09333333333333334, 0.0, 0.9066666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.5909090909090909, 0.045454545454545456, 0.36363636363636365, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[3]) <= (-0.21861734986305237)) {
                                            memcpy(var14, (double[]){0.9649122807017544, 0.0, 0.03508771929824561, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.2641509433962264, 0.018867924528301886, 0.7169811320754716, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[42]) <= (-0.14371828734874725)) {
                            if ((input[23]) <= (0.41134487092494965)) {
                                if ((input[28]) <= (0.03436676971614361)) {
                                    if ((input[75]) <= (-0.6841013729572296)) {
                                        memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[3]) <= (-0.4597347378730774)) {
                                        if ((input[28]) <= (0.35199040174484253)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[55]) <= (-0.190437451004982)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.03007518796992481, 0.9624060150375939, 0.007518796992481203, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[30]) <= (0.23177603632211685)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[56]) <= (0.7616745233535767)) {
                                if ((input[48]) <= (-0.9028569459915161)) {
                                    if ((input[66]) <= (0.6919063627719879)) {
                                        memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[72]) <= (0.45994943380355835)) {
                                    if ((input[39]) <= (-0.10356942471116781)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[10]) <= (-0.22381740808486938)) {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[15]) <= (-0.37431345880031586)) {
                        if ((input[71]) <= (-0.557956337928772)) {
                            if ((input[63]) <= (-0.5534333884716034)) {
                                if ((input[60]) <= (-0.8302394449710846)) {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[74]) <= (0.5370969474315643)) {
                            if ((input[53]) <= (-0.2107928991317749)) {
                                if ((input[0]) <= (0.4242187440395355)) {
                                    if ((input[72]) <= (0.6053950190544128)) {
                                        if ((input[52]) <= (0.9547940790653229)) {
                                            memcpy(var14, (double[]){0.23076923076923078, 0.5961538461538461, 0.17307692307692307, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[39]) <= (0.09246424585580826)) {
                                            memcpy(var14, (double[]){0.0, 0.8, 0.2, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[43]) <= (-0.9797509610652924)) {
                                    memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[37]) <= (-0.33443883061408997)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[29]) <= (0.11225248873233795)) {
                                            memcpy(var14, (double[]){0.9032258064516129, 0.0967741935483871, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[41]) <= (-0.1438954547047615)) {
                                if ((input[37]) <= (-0.6884270310401917)) {
                                    if ((input[49]) <= (0.8217665255069733)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[62]) <= (-0.9749467968940735)) {
                                        if ((input[44]) <= (-0.9448137581348419)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.8888888888888888, 0.1111111111111111, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[9]) <= (-0.44251155853271484)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.006144393241167435, 0.9800307219662059, 0.013824884792626729, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[8]) <= (-0.16912240535020828)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[62]) <= (-0.7973107695579529)) {
                                        memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[22]) <= (0.47585634887218475)) {
                    if ((input[69]) <= (-0.45232200622558594)) {
                        if ((input[0]) <= (0.14521976187825203)) {
                            memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[3]) <= (0.07175930589437485)) {
                                if ((input[68]) <= (0.839801162481308)) {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[57]) <= (-0.853498637676239)) {
                            if ((input[20]) <= (-0.15655578672885895)) {
                                memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[20]) <= (-0.1541915014386177)) {
                                    memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[37]) <= (-0.15510699898004532)) {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[39]) <= (0.1196020320057869)) {
                                            memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[54]) <= (-0.10609464719891548)) {
                                if ((input[2]) <= (-0.14693567901849747)) {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[55]) <= (-0.09166546911001205)) {
                        if ((input[69]) <= (-0.19572732597589493)) {
                            if ((input[53]) <= (-0.24245206266641617)) {
                                memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[33]) <= (-0.2685428261756897)) {
                                    memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[43]) <= (-0.9690232872962952)) {
                                if ((input[63]) <= (-0.6334909647703171)) {
                                    memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[45]) <= (-0.9301580190658569)) {
                                    if ((input[14]) <= (0.4360044449567795)) {
                                        memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[49]) <= (0.7696521580219269)) {
                            memcpy(var14, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[71]) <= (-0.008310820907354355)) {
                                memcpy(var14, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var14, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var7, var14, 6, var6);
    double var15[6];
    if ((input[16]) <= (-0.9370073080062866)) {
        if ((input[16]) <= (-0.9999635219573975)) {
            if ((input[42]) <= (0.16576585918664932)) {
                if ((input[55]) <= (-0.5059453845024109)) {
                    if ((input[41]) <= (-0.06439543515443802)) {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[53]) <= (0.05153384990990162)) {
                            if ((input[51]) <= (-0.03713231161236763)) {
                                if ((input[22]) <= (-0.7091881334781647)) {
                                    if ((input[10]) <= (-0.5685672461986542)) {
                                        if ((input[49]) <= (0.8955031037330627)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.058823529411764705, 0.9411764705882353, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[13]) <= (0.6973960995674133)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[28]) <= (0.2853849083185196)) {
                                    if ((input[14]) <= (0.8295730650424957)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[66]) <= (0.25703264772892)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.03125, 0.96875, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[23]) <= (-0.7881291806697845)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[79]) <= (-0.8964856266975403)) {
                                if ((input[36]) <= (-0.024030033499002457)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[40]) <= (0.3671863451600075)) {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[40]) <= (0.8915326297283173)) {
                            if ((input[8]) <= (-0.9906007349491119)) {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[53]) <= (-0.12433876842260361)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[53]) <= (-0.0644384752959013)) {
                                if ((input[3]) <= (-0.9996959567070007)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[33]) <= (0.10752039402723312)) {
                                        if ((input[72]) <= (0.28103217482566833)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.4, 0.6, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.06666666666666667, 0.9333333333333333, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[42]) <= (-0.09822669625282288)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.07228915662650602, 0.927710843373494, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[65]) <= (-0.5104705989360809)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[58]) <= (-0.5386497974395752)) {
                    if ((input[40]) <= (0.24865371733903885)) {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[50]) <= (-0.11685400828719139)) {
                            if ((input[38]) <= (-0.34192226827144623)) {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[4]) <= (-0.9900404512882233)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[50]) <= (0.5111920237541199)) {
                        if ((input[51]) <= (0.7088470458984375)) {
                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            }
        } else {
            if ((input[17]) <= (-0.999724268913269)) {
                if ((input[50]) <= (0.3559796065092087)) {
                    if ((input[54]) <= (-0.1508091241121292)) {
                        if ((input[13]) <= (0.6896265745162964)) {
                            if ((input[72]) <= (0.6908464133739471)) {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[2]) <= (-0.10239601507782936)) {
                                if ((input[73]) <= (-0.41199538111686707)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[5]) <= (-0.9874362349510193)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[6]) <= (-0.9931581616401672)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[53]) <= (-0.06790333427488804)) {
                            if ((input[54]) <= (0.6029201745986938)) {
                                if ((input[44]) <= (-0.9964663684368134)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[54]) <= (-0.12368784844875336)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[31]) <= (-0.16869983077049255)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.034482758620689655, 0.9655172413793104, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[68]) <= (0.7472278475761414)) {
                                if ((input[52]) <= (0.18177177011966705)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[11]) <= (-0.7864683866500854)) {
                                        if ((input[33]) <= (-0.16646187752485275)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.9941176470588236, 0.0058823529411764705, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[46]) <= (-0.9837709963321686)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[2]) <= (-0.10036586225032806)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[58]) <= (-0.042014069855213165)) {
                        if ((input[58]) <= (-0.0546776931732893)) {
                            if ((input[77]) <= (-0.99296435713768)) {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[40]) <= (0.0633813738822937)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[52]) <= (0.0901741310954094)) {
                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[77]) <= (-0.2943677008152008)) {
                        if ((input[54]) <= (0.18089652806520462)) {
                            if ((input[50]) <= (-0.03181739058345556)) {
                                if ((input[75]) <= (-0.9846275746822357)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[12]) <= (0.8518049716949463)) {
                                        if ((input[69]) <= (-0.9494048357009888)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.6, 0.4, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.07920792079207921, 0.9207920792079208, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[12]) <= (0.8450922071933746)) {
                                    if ((input[51]) <= (-0.09965331852436066)) {
                                        if ((input[42]) <= (-0.1874948963522911)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[45]) <= (-0.9849220216274261)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.75, 0.25, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.9741379310344828, 0.02586206896551724, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[53]) <= (0.0657412838190794)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[26]) <= (0.10185075923800468)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.6666666666666666, 0.3333333333333333, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[65]) <= (0.13033346831798553)) {
                                if ((input[57]) <= (-0.9998634159564972)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[8]) <= (-0.9827013909816742)) {
                                        if ((input[56]) <= (0.633089691400528)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[65]) <= (-0.31683893501758575)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.8235294117647058, 0.17647058823529413, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[42]) <= (0.23265494406223297)) {
                            if ((input[50]) <= (-0.12398403137922287)) {
                                if ((input[42]) <= (-0.062065910547971725)) {
                                    if ((input[58]) <= (-0.9882497787475586)) {
                                        if ((input[42]) <= (-0.06366850063204765)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[61]) <= (-0.996406227350235)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.08296943231441048, 0.9170305676855895, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[50]) <= (0.005218828096985817)) {
                                    if ((input[41]) <= (-0.031747445464134216)) {
                                        if ((input[42]) <= (0.010200020857155323)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.6857142857142857, 0.3142857142857143, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.2631578947368421, 0.7368421052631579, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[68]) <= (0.6472186148166656)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.08333333333333333, 0.9166666666666666, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.8, 0.2, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[19]) <= (-0.9954387247562408)) {
                                        if ((input[59]) <= (-0.9964889287948608)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.25, 0.75, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[77]) <= (-0.1250704936683178)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[24]) <= (-0.023996819742023945)) {
                                if ((input[33]) <= (0.20291637629270554)) {
                                    if ((input[18]) <= (-0.9994575083255768)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[79]) <= (-0.391968235373497)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[15]) <= (-0.5960838198661804)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((input[65]) <= (-0.5662424862384796)) {
            if ((input[73]) <= (-0.5685924589633942)) {
                if ((input[57]) <= (-0.9720984101295471)) {
                    if ((input[4]) <= (-0.17012124508619308)) {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[65]) <= (-0.6573140919208527)) {
                            if ((input[64]) <= (0.43856891989707947)) {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[42]) <= (0.34410400688648224)) {
                        if ((input[38]) <= (-0.6404394209384918)) {
                            if ((input[24]) <= (0.29178810119628906)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[12]) <= (-0.0825117938220501)) {
                                if ((input[6]) <= (0.08167556300759315)) {
                                    if ((input[18]) <= (-0.8576183915138245)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[14]) <= (0.4157342314720154)) {
                                        if ((input[43]) <= (-0.9106959998607635)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[71]) <= (-0.5160326659679413)) {
                                    if ((input[37]) <= (-0.7188953459262848)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[3]) <= (0.08437370136380196)) {
                                            memcpy(var15, (double[]){0.004024144869215292, 0.993963782696177, 0.002012072434607646, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.6, 0.4, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[9]) <= (0.42861877381801605)) {
                                        if ((input[16]) <= (-0.8286604881286621)) {
                                            memcpy(var15, (double[]){0.5217391304347826, 0.43478260869565216, 0.0, 0.0, 0.0, 0.043478260869565216}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.018018018018018018, 0.9594594594594594, 0.02252252252252252, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[6]) <= (-0.049186887219548225)) {
                    if ((input[70]) <= (0.222982756793499)) {
                        if ((input[61]) <= (-0.9365056157112122)) {
                            if ((input[29]) <= (-0.28047357499599457)) {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[43]) <= (-0.9424507915973663)) {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[19]) <= (-0.5206326246261597)) {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[5]) <= (-0.21775203198194504)) {
                                    if ((input[15]) <= (-0.17726797610521317)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[70]) <= (-0.008106622844934464)) {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[72]) <= (0.5523262321949005)) {
                            if ((input[50]) <= (-0.28800344467163086)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[53]) <= (-0.07576321810483932)) {
                                    if ((input[52]) <= (0.9739607572555542)) {
                                        if ((input[19]) <= (-0.5498390793800354)) {
                                            memcpy(var15, (double[]){0.875, 0.041666666666666664, 0.08333333333333333, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.12790697674418605, 0.10465116279069768, 0.7674418604651163, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[37]) <= (-0.275655597448349)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[49]) <= (0.8030421733856201)) {
                                        if ((input[41]) <= (0.45606088638305664)) {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[68]) <= (0.7661668360233307)) {
                                            memcpy(var15, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[62]) <= (-0.6182948052883148)) {
                                if ((input[57]) <= (-0.9267435967922211)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[37]) <= (-0.3490740805864334)) {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[42]) <= (0.500094797462225)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[18]) <= (-0.8702777624130249)) {
                                    if ((input[58]) <= (-0.8974841237068176)) {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[25]) <= (-0.012872942490503192)) {
                                        if ((input[23]) <= (0.4089798480272293)) {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.4, 0.6, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[76]) <= (0.6432771682739258)) {
                        if ((input[41]) <= (-0.2732425183057785)) {
                            if ((input[42]) <= (-0.08415443077683449)) {
                                if ((input[69]) <= (-0.08169553615152836)) {
                                    if ((input[30]) <= (0.27706651389598846)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[22]) <= (0.44341127574443817)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[72]) <= (0.35249343514442444)) {
                                    if ((input[57]) <= (-0.8097098767757416)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[26]) <= (0.24538154900074005)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[47]) <= (-0.6394696831703186)) {
                                if ((input[49]) <= (0.8891871273517609)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[54]) <= (-0.07353197410702705)) {
                                        if ((input[32]) <= (0.21561336517333984)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[33]) <= (0.23603812605142593)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.14285714285714285, 0.0, 0.8571428571428571, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[16]) <= (-0.3878961652517319)) {
                            if ((input[70]) <= (0.37972913682460785)) {
                                if ((input[76]) <= (0.6549654304981232)) {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[43]) <= (-0.9750802218914032)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[62]) <= (-0.508812665939331)) {
                if ((input[60]) <= (-0.955470860004425)) {
                    if ((input[69]) <= (-0.36178430914878845)) {
                        if ((input[15]) <= (-0.19109119474887848)) {
                            if ((input[58]) <= (-0.6673466861248016)) {
                                memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[28]) <= (-0.14805712550878525)) {
                                memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[3]) <= (0.07958711124956608)) {
                                    if ((input[53]) <= (-0.129248958081007)) {
                                        if ((input[19]) <= (-0.5501452088356018)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[37]) <= (-0.5002792775630951)) {
                            if ((input[40]) <= (0.8717072308063507)) {
                                if ((input[31]) <= (0.04834338277578354)) {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[30]) <= (0.1363784521818161)) {
                                    if ((input[75]) <= (-0.3119530752301216)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[19]) <= (-0.1546400710940361)) {
                                if ((input[74]) <= (0.7289228439331055)) {
                                    if ((input[37]) <= (-0.3367801606655121)) {
                                        if ((input[70]) <= (0.08686638250946999)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.4444444444444444, 0.2222222222222222, 0.3333333333333333, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[28]) <= (-0.19681764394044876)) {
                                            memcpy(var15, (double[]){0.9666666666666667, 0.03333333333333333, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[16]) <= (-0.35053814947605133)) {
                                    if ((input[48]) <= (-0.8696789145469666)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[42]) <= (-0.030672576278448105)) {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[50]) <= (-0.18687649071216583)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[19]) <= (-0.387859582901001)) {
                        if ((input[36]) <= (0.1531638279557228)) {
                            if ((input[57]) <= (-0.9813156127929688)) {
                                if ((input[29]) <= (-0.11078620702028275)) {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[69]) <= (-0.514108419418335)) {
                                    if ((input[68]) <= (0.6716930270195007)) {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[60]) <= (-0.9296448826789856)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[16]) <= (-0.7001859545707703)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[52]) <= (0.8940565884113312)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[15]) <= (0.11370747163891792)) {
                            if ((input[71]) <= (-0.3691507875919342)) {
                                if ((input[52]) <= (0.9550139605998993)) {
                                    if ((input[32]) <= (0.33947066962718964)) {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[51]) <= (0.06632903590798378)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[22]) <= (0.3729565143585205)) {
                                    if ((input[48]) <= (-0.9501870572566986)) {
                                        if ((input[8]) <= (-0.3886657804250717)) {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[67]) <= (-0.6715028285980225)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[69]) <= (-0.336222842335701)) {
                    if ((input[57]) <= (-0.9563030898571014)) {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[46]) <= (-0.9834809303283691)) {
                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[39]) <= (0.2803921103477478)) {
                                if ((input[61]) <= (-0.9717822670936584)) {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[0]) <= (0.16174451261758804)) {
                                        if ((input[68]) <= (0.578681617975235)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[14]) <= (0.14872775226831436)) {
                                            memcpy(var15, (double[]){0.07142857142857142, 0.9285714285714286, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[40]) <= (0.8540816009044647)) {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[7]) <= (0.1342182382941246)) {
                                        if ((input[35]) <= (-0.4055357575416565)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[78]) <= (-0.5453696399927139)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.8333333333333334, 0.16666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[9]) <= (0.18704748153686523)) {
                        if ((input[70]) <= (0.18572978675365448)) {
                            if ((input[58]) <= (-0.736131101846695)) {
                                if ((input[58]) <= (-0.9975430071353912)) {
                                    if ((input[12]) <= (-0.02955135703086853)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[1]) <= (0.022164699621498585)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[8]) <= (-0.07348909508436918)) {
                                            memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[1]) <= (-0.04251585155725479)) {
                                if ((input[44]) <= (-0.9089548289775848)) {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[75]) <= (-0.21757455170154572)) {
                                    if ((input[48]) <= (-0.9073662161827087)) {
                                        if ((input[37]) <= (-0.3842032700777054)) {
                                            memcpy(var15, (double[]){0.0, 0.5, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.9736842105263158, 0.02631578947368421, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[61]) <= (-0.9718999862670898)) {
                                        memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[72]) <= (0.42028558254241943)) {
                            if ((input[43]) <= (-0.9833807945251465)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[66]) <= (0.6412077844142914)) {
                                    if ((input[37]) <= (-0.17404601722955704)) {
                                        if ((input[36]) <= (-0.4185030162334442)) {
                                            memcpy(var15, (double[]){0.0, 0.4, 0.6, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[55]) <= (-0.3222358226776123)) {
                                            memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var15, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[15]) <= (0.06098824925720692)) {
                                if ((input[4]) <= (0.13033128157258034)) {
                                    if ((input[38]) <= (-0.18952035158872604)) {
                                        memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var15, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[44]) <= (-0.9810033142566681)) {
                                    memcpy(var15, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var15, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var6, var15, 6, var5);
    double var16[6];
    if ((input[9]) <= (-0.6162023544311523)) {
        if ((input[50]) <= (0.3759530037641525)) {
            if ((input[50]) <= (-0.10854528099298477)) {
                if ((input[59]) <= (-0.980122834444046)) {
                    if ((input[41]) <= (-0.3997456431388855)) {
                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    } else {
                        if ((input[40]) <= (0.061053186655044556)) {
                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            if ((input[20]) <= (-0.9958333969116211)) {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[17]) <= (-0.9999742805957794)) {
                                    if ((input[54]) <= (0.01652473211288452)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[53]) <= (-0.07638822868466377)) {
                                        if ((input[5]) <= (-0.9817590117454529)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.025821596244131457, 0.9741784037558685, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.07886435331230283, 0.9211356466876972, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[65]) <= (-0.12162506207823753)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.13636363636363635, 0.8636363636363636, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[57]) <= (-0.7216572761535645)) {
                        if ((input[43]) <= (-0.9808016717433929)) {
                            if ((input[44]) <= (-0.9819103181362152)) {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[19]) <= (-0.9901604652404785)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[42]) <= (-0.7349905222654343)) {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[37]) <= (-0.37136252224445343)) {
                                    if ((input[42]) <= (-0.18821593350730836)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[57]) <= (-0.961792379617691)) {
                                        if ((input[59]) <= (-0.8983493149280548)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[61]) <= (-0.955560714006424)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.06666666666666667, 0.9333333333333333, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[60]) <= (-0.9888438284397125)) {
                    if ((input[51]) <= (0.6740435063838959)) {
                        if ((input[40]) <= (0.9757418036460876)) {
                            if ((input[31]) <= (0.6016193926334381)) {
                                if ((input[79]) <= (-0.8667658865451813)) {
                                    if ((input[30]) <= (-0.22874919325113297)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[70]) <= (0.468412384390831)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.9642857142857143, 0.03571428571428571, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[54]) <= (0.19374755769968033)) {
                                        if ((input[3]) <= (-0.9983659088611603)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.3333333333333333, 0.6666666666666666, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.9298780487804879, 0.0701219512195122, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[58]) <= (-0.995099276304245)) {
                                if ((input[41]) <= (-0.045866796746850014)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                } else {
                    if ((input[42]) <= (0.6859261095523834)) {
                        if ((input[57]) <= (-0.9830597043037415)) {
                            if ((input[63]) <= (-0.28319141268730164)) {
                                if ((input[35]) <= (-0.021670455113053322)) {
                                    if ((input[71]) <= (-0.2041400521993637)) {
                                        if ((input[37]) <= (0.5566819608211517)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.15254237288135594, 0.847457627118644, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[29]) <= (-0.030048832297325134)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[58]) <= (-0.8683719635009766)) {
                                        if ((input[38]) <= (-0.14797625690698624)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.375, 0.625, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.7377049180327869, 0.26229508196721313, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[73]) <= (-0.9653653502464294)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[41]) <= (0.07220049947500229)) {
                                    if ((input[14]) <= (0.8329907357692719)) {
                                        if ((input[41]) <= (-0.030356128700077534)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[22]) <= (-0.5391835272312164)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[61]) <= (-0.009662285447120667)) {
                                if ((input[26]) <= (-0.5590855628252029)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[46]) <= (-0.7339716255664825)) {
                                        if ((input[65]) <= (-0.08169981464743614)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.8571428571428571, 0.14285714285714285, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[60]) <= (-0.2686479464173317)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                    }
                }
            }
        } else {
            if ((input[40]) <= (0.08016437897458673)) {
                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
            } else {
                memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
            }
        }
    } else {
        if ((input[71]) <= (-0.4373055249452591)) {
            if ((input[50]) <= (-0.17599281668663025)) {
                if ((input[16]) <= (-0.3915594816207886)) {
                    if ((input[59]) <= (-0.9906873106956482)) {
                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[9]) <= (0.2823217809200287)) {
                            if ((input[52]) <= (0.9621439278125763)) {
                                if ((input[9]) <= (-0.35854798555374146)) {
                                    if ((input[78]) <= (0.39750753343105316)) {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[70]) <= (0.46950308978557587)) {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[13]) <= (-0.44717612862586975)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[37]) <= (-0.041037995368242264)) {
                                            memcpy(var16, (double[]){0.0015015015015015015, 0.9924924924924925, 0.006006006006006006, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.3157894736842105, 0.6842105263157895, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[22]) <= (0.40217383205890656)) {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[75]) <= (-0.7688062787055969)) {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[41]) <= (-0.29579369723796844)) {
                                    if ((input[39]) <= (0.49933527410030365)) {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[3]) <= (0.0034670187160372734)) {
                                            memcpy(var16, (double[]){0.4, 0.6, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[28]) <= (0.12611261382699013)) {
                                        if ((input[9]) <= (0.5057802945375443)) {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[15]) <= (-0.15140188485383987)) {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.03571428571428571, 0.9642857142857143, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[9]) <= (0.3434164822101593)) {
                        if ((input[46]) <= (-0.915303647518158)) {
                            if ((input[58]) <= (-0.9940491318702698)) {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[57]) <= (-0.7906013429164886)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[11]) <= (-0.2351936548948288)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[73]) <= (-0.5494725704193115)) {
                            if ((input[28]) <= (0.21172324568033218)) {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[71]) <= (-0.5615975260734558)) {
                    if ((input[68]) <= (0.9386101365089417)) {
                        if ((input[5]) <= (-0.4250917583703995)) {
                            if ((input[16]) <= (-0.8513001799583435)) {
                                memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[74]) <= (0.6157763302326202)) {
                                if ((input[64]) <= (-0.4659454710781574)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[52]) <= (0.9766267240047455)) {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[46]) <= (-0.9751002788543701)) {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[49]) <= (0.5248669981956482)) {
                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[37]) <= (-0.34035907685756683)) {
                        if ((input[21]) <= (0.023394372314214706)) {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[3]) <= (-0.1246078573167324)) {
                            if ((input[14]) <= (0.2271265983581543)) {
                                if ((input[74]) <= (0.5315814465284348)) {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[62]) <= (-0.36593347042798996)) {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[53]) <= (-0.14882531762123108)) {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[36]) <= (0.16122205182909966)) {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[16]) <= (-0.5570462942123413)) {
                if ((input[73]) <= (-0.5413536429405212)) {
                    if ((input[52]) <= (0.9490915834903717)) {
                        if ((input[51]) <= (0.12825718894600868)) {
                            if ((input[3]) <= (-0.4597347378730774)) {
                                if ((input[55]) <= (-0.07423945888876915)) {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[52]) <= (0.7933633625507355)) {
                                    if ((input[39]) <= (-0.0022249408066272736)) {
                                        if ((input[33]) <= (0.0058693476021289825)) {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[2]) <= (-0.19993582367897034)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[32]) <= (-0.5211873352527618)) {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[77]) <= (0.9687092006206512)) {
                                            memcpy(var16, (double[]){0.016260162601626018, 0.975609756097561, 0.008130081300813009, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[6]) <= (-0.4431728422641754)) {
                                memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[0]) <= (0.38102999329566956)) {
                            if ((input[76]) <= (0.6027047336101532)) {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[69]) <= (-0.2437501847743988)) {
                        if ((input[44]) <= (-0.9735655188560486)) {
                            if ((input[17]) <= (-0.9003886282444)) {
                                if ((input[68]) <= (0.6665993630886078)) {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[50]) <= (-0.2984199821949005)) {
                                if ((input[41]) <= (-0.35511358082294464)) {
                                    if ((input[18]) <= (-0.7002193331718445)) {
                                        if ((input[30]) <= (0.38419947028160095)) {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[43]) <= (-0.9677678346633911)) {
                                    if ((input[50]) <= (-0.13901688903570175)) {
                                        if ((input[37]) <= (-0.35259006917476654)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.9841269841269841, 0.015873015873015872, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[54]) <= (0.1005479171872139)) {
                                            memcpy(var16, (double[]){0.125, 0.0, 0.875, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.6538461538461539, 0.0, 0.34615384615384615, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[79]) <= (0.8026646971702576)) {
                                        if ((input[23]) <= (0.1464642435312271)) {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.05, 0.025, 0.9, 0.0, 0.0, 0.025}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[47]) <= (-0.9608431756496429)) {
                            if ((input[2]) <= (-0.1828886717557907)) {
                                if ((input[30]) <= (0.17208992689847946)) {
                                    if ((input[30]) <= (0.06697814632207155)) {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[65]) <= (-0.6493034064769745)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[57]) <= (-0.7333368957042694)) {
                                        if ((input[2]) <= (-0.04020858183503151)) {
                                            memcpy(var16, (double[]){0.992867332382311, 0.0028530670470756064, 0.0042796005706134095, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.8, 0.0, 0.2, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[9]) <= (0.1953090950846672)) {
                                if ((input[54]) <= (-0.3672935664653778)) {
                                    memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[56]) <= (0.5961862504482269)) {
                                        memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[53]) <= (-0.3651137799024582)) {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.9809523809523809, 0.0, 0.01904761904761905, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[75]) <= (-0.04658623971045017)) {
                                    if ((input[75]) <= (-0.36465515196323395)) {
                                        if ((input[10]) <= (0.17879674583673477)) {
                                            memcpy(var16, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[59]) <= (-0.9835650026798248)) {
                                            memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[71]) <= (-0.10829782113432884)) {
                    if ((input[57]) <= (-0.8444299399852753)) {
                        if ((input[65]) <= (-0.48801465332508087)) {
                            if ((input[74]) <= (0.7117627859115601)) {
                                if ((input[20]) <= (0.18090834468603134)) {
                                    if ((input[32]) <= (0.2899731695652008)) {
                                        if ((input[50]) <= (-0.30320510268211365)) {
                                            memcpy(var16, (double[]){0.5, 0.0, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.008714596949891068, 0.0, 0.9912854030501089, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[12]) <= (-0.04847278073430061)) {
                                            memcpy(var16, (double[]){0.4, 0.0, 0.6, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[12]) <= (0.0446602888405323)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[49]) <= (0.8613717257976532)) {
                                if ((input[51]) <= (-0.06413865648210049)) {
                                    memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[6]) <= (0.15946688875555992)) {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[3]) <= (0.08580753207206726)) {
                                    if ((input[69]) <= (-0.3007657676935196)) {
                                        memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[37]) <= (-0.5386228561401367)) {
                                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[28]) <= (-0.03976650442928076)) {
                                        memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[46]) <= (-0.9873003363609314)) {
                                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var16, (double[]){0.047619047619047616, 0.0, 0.9523809523809523, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[6]) <= (0.18366491049528122)) {
                            if ((input[78]) <= (-0.8461097180843353)) {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[22]) <= (0.453624427318573)) {
                        if ((input[38]) <= (-0.5533355474472046)) {
                            if ((input[52]) <= (0.9430994093418121)) {
                                memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[0]) <= (0.3689414858818054)) {
                            memcpy(var16, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            }
        }
    }
    add_vectors(var5, var16, 6, var4);
    double var17[6];
    if ((input[56]) <= (-0.672631561756134)) {
        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
    } else {
        if ((input[9]) <= (-0.6195971071720123)) {
            if ((input[15]) <= (-0.9901959598064423)) {
                if ((input[42]) <= (0.14151907712221146)) {
                    if ((input[55]) <= (-0.47623735666275024)) {
                        if ((input[53]) <= (-0.045720212161540985)) {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[52]) <= (0.9897702038288116)) {
                                if ((input[77]) <= (-0.9814758896827698)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[21]) <= (-0.979185551404953)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[52]) <= (0.9835099875926971)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[11]) <= (-0.8218487799167633)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[68]) <= (0.2826182395219803)) {
                                        if ((input[37]) <= (-0.22368048876523972)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.16666666666666666, 0.8333333333333334, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.8888888888888888, 0.1111111111111111, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[14]) <= (0.827827662229538)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[51]) <= (-0.32872265577316284)) {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[28]) <= (-0.44547729194164276)) {
                                memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[69]) <= (-0.13042312860488892)) {
                                    if ((input[53]) <= (-0.10266462713479996)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[65]) <= (-0.2898670583963394)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[31]) <= (0.052435507997870445)) {
                                        if ((input[10]) <= (-0.5710022151470184)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[49]) <= (0.7762779891490936)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.10638297872340426, 0.8936170212765957, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((input[17]) <= (-0.9998199343681335)) {
                        if ((input[50]) <= (-0.12614959850907326)) {
                            if ((input[40]) <= (0.9005413353443146)) {
                                memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[42]) <= (0.2645617723464966)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[25]) <= (0.20703059434890747)) {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[77]) <= (-0.54796501994133)) {
                    if ((input[50]) <= (0.04391697980463505)) {
                        if ((input[50]) <= (-0.10524814948439598)) {
                            if ((input[42]) <= (0.2687055394053459)) {
                                if ((input[36]) <= (0.12127737328410149)) {
                                    if ((input[69]) <= (-0.8351827263832092)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[38]) <= (-0.10744214802980423)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[17]) <= (-0.9998255968093872)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[13]) <= (0.6475875079631805)) {
                                if ((input[32]) <= (-0.4902290105819702)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[25]) <= (-0.19358740001916885)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[53]) <= (0.08449874818325043)) {
                                    if ((input[19]) <= (-0.9956384599208832)) {
                                        if ((input[5]) <= (-0.98215052485466)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.711864406779661, 0.288135593220339, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[25]) <= (0.31863632798194885)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.9464285714285714, 0.05357142857142857, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.5, 0.5, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[12]) <= (0.8411809206008911)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[54]) <= (-0.15393975377082825)) {
                            if ((input[49]) <= (0.8606277108192444)) {
                                memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[55]) <= (0.5165783762931824)) {
                        if ((input[69]) <= (-0.2846555560827255)) {
                            if ((input[54]) <= (0.18658222258090973)) {
                                if ((input[73]) <= (-0.8187582790851593)) {
                                    if ((input[63]) <= (-0.9321855008602142)) {
                                        if ((input[53]) <= (-0.07964712008833885)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.109375, 0.890625, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.8666666666666667, 0.13333333333333333, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[47]) <= (-0.966072291135788)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.2, 0.8, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.8409090909090909, 0.1590909090909091, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[53]) <= (-0.06991609558463097)) {
                                        if ((input[54]) <= (-0.05805479921400547)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.10828025477707007, 0.89171974522293, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0029498525073746312, 0.9970501474926253, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[52]) <= (0.9865643382072449)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.8, 0.2, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.17391304347826086, 0.8260869565217391, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[5]) <= (-0.9883536696434021)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[53]) <= (-0.07904722914099693)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[15]) <= (-0.770277202129364)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[41]) <= (-0.10352395474910736)) {
                                if ((input[43]) <= (-0.9961114823818207)) {
                                    if ((input[54]) <= (-0.04346468485891819)) {
                                        if ((input[53]) <= (-0.27725638449192047)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.8, 0.2, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[6]) <= (-0.9967872500419617)) {
                                    if ((input[10]) <= (-0.5485038161277771)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[20]) <= (-0.9507497847080231)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[24]) <= (-0.34539205580949783)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[47]) <= (-0.8296669125556946)) {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if ((input[40]) <= (0.9234804511070251)) {
                if ((input[74]) <= (0.5633027255535126)) {
                    if ((input[9]) <= (0.18967047333717346)) {
                        if ((input[57]) <= (-0.8321554362773895)) {
                            if ((input[50]) <= (-0.10449685901403427)) {
                                if ((input[21]) <= (0.14485596120357513)) {
                                    if ((input[43]) <= (-0.9604900479316711)) {
                                        if ((input[50]) <= (-0.13987914472818375)) {
                                            memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.896551724137931, 0.0, 0.10344827586206896, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[69]) <= (-0.34829095005989075)) {
                                            memcpy(var17, (double[]){0.16666666666666666, 0.3333333333333333, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.9230769230769231, 0.0, 0.07692307692307693, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[31]) <= (0.3328423649072647)) {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[66]) <= (0.5449666082859039)) {
                                memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[15]) <= (0.07699470221996307)) {
                            if ((input[45]) <= (-0.9146005511283875)) {
                                if ((input[14]) <= (0.26342882215976715)) {
                                    if ((input[41]) <= (-0.330213725566864)) {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[20]) <= (-0.11007309891283512)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[41]) <= (-0.28941191732883453)) {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[27]) <= (-0.052123989909887314)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[58]) <= (-0.9896338880062103)) {
                                    if ((input[12]) <= (-0.033471216447651386)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[74]) <= (0.5185863673686981)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[71]) <= (0.042883314192295074)) {
                                if ((input[57]) <= (-0.851363480091095)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[34]) <= (0.32673001289367676)) {
                                        if ((input[14]) <= (0.452304944396019)) {
                                            memcpy(var17, (double[]){0.0, 0.02702702702702703, 0.972972972972973, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[14]) <= (0.2452019453048706)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[48]) <= (-0.9559919536113739)) {
                                    memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[14]) <= (0.026236378587782383)) {
                        if ((input[69]) <= (-0.5061469078063965)) {
                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[55]) <= (0.64151930809021)) {
                                if ((input[16]) <= (-0.663319855928421)) {
                                    if ((input[48]) <= (-0.9490486979484558)) {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[42]) <= (0.2931203842163086)) {
                            if ((input[24]) <= (0.4098626375198364)) {
                                if ((input[70]) <= (0.2198028266429901)) {
                                    if ((input[67]) <= (-0.6575023829936981)) {
                                        if ((input[49]) <= (0.824473649263382)) {
                                            memcpy(var17, (double[]){0.1, 0.9, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[16]) <= (-0.8829959332942963)) {
                                        if ((input[54]) <= (0.10514487139880657)) {
                                            memcpy(var17, (double[]){0.7, 0.0, 0.0, 0.3, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[22]) <= (0.15303263813257217)) {
                                            memcpy(var17, (double[]){0.2542372881355932, 0.7457627118644068, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.007029876977152899, 0.9806678383128296, 0.012302284710017574, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[59]) <= (-0.9562583863735199)) {
                                    memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[52]) <= (0.8413059413433075)) {
                                        if ((input[76]) <= (0.8922944664955139)) {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[78]) <= (-0.939676433801651)) {
                                memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[9]) <= (0.15941118448972702)) {
                    if ((input[70]) <= (0.4338049441576004)) {
                        if ((input[47]) <= (-0.7529476284980774)) {
                            if ((input[9]) <= (0.06414877250790596)) {
                                if ((input[37]) <= (-0.4211304187774658)) {
                                    if ((input[74]) <= (0.38310323655605316)) {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[51]) <= (0.003156051505357027)) {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[65]) <= (-0.6514283418655396)) {
                                        if ((input[41]) <= (-0.14699649438261986)) {
                                            memcpy(var17, (double[]){0.6666666666666666, 0.3333333333333333, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[74]) <= (0.7994349598884583)) {
                                            memcpy(var17, (double[]){0.9947984395318595, 0.005201560468140442, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[73]) <= (-0.4772534817457199)) {
                                    if ((input[2]) <= (-0.03594232560135424)) {
                                        if ((input[75]) <= (-0.5682216584682465)) {
                                            memcpy(var17, (double[]){0.0, 0.75, 0.25, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[12]) <= (-0.14268410950899124)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[52]) <= (0.9429840445518494)) {
                                            memcpy(var17, (double[]){0.16666666666666666, 0.0, 0.8333333333333334, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.9466666666666667, 0.02666666666666667, 0.02666666666666667, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[73]) <= (-0.3984348326921463)) {
                            if ((input[53]) <= (-0.16824138164520264)) {
                                if ((input[28]) <= (-0.2224678248167038)) {
                                    memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[39]) <= (0.5121320486068726)) {
                                        if ((input[68]) <= (0.6047239303588867)) {
                                            memcpy(var17, (double[]){0.3333333333333333, 0.6666666666666666, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[65]) <= (-0.7335180938243866)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[48]) <= (-0.9677432477474213)) {
                                memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[71]) <= (-0.5011522471904755)) {
                                    if ((input[28]) <= (-0.06853843480348587)) {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[70]) <= (0.49136053025722504)) {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[22]) <= (0.3807537406682968)) {
                        if ((input[3]) <= (0.0038956517819315195)) {
                            if ((input[72]) <= (0.5665315091609955)) {
                                if ((input[49]) <= (0.8805922269821167)) {
                                    if ((input[70]) <= (0.35921570658683777)) {
                                        if ((input[39]) <= (0.06395800039172173)) {
                                            memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.13333333333333333, 0.13333333333333333, 0.7333333333333333, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[44]) <= (-0.8078542053699493)) {
                                        if ((input[48]) <= (-0.9721225500106812)) {
                                            memcpy(var17, (double[]){0.7142857142857143, 0.0, 0.2857142857142857, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[56]) <= (0.8958000540733337)) {
                                    memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[49]) <= (0.9198629856109619)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[73]) <= (-0.7338809669017792)) {
                                memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[20]) <= (0.08358026295900345)) {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[17]) <= (-0.7060004770755768)) {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[70]) <= (0.36933979392051697)) {
                            if ((input[46]) <= (-0.9294942915439606)) {
                                if ((input[0]) <= (0.36518703401088715)) {
                                    if ((input[66]) <= (0.609027624130249)) {
                                        if ((input[53]) <= (-0.10026268288493156)) {
                                            memcpy(var17, (double[]){0.9466666666666667, 0.013333333333333334, 0.04, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[43]) <= (-0.9400073885917664)) {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[56]) <= (0.9132170975208282)) {
                                        if ((input[52]) <= (0.9323519170284271)) {
                                            memcpy(var17, (double[]){0.0, 0.6666666666666666, 0.3333333333333333, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.058823529411764705, 0.0, 0.9411764705882353, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[76]) <= (0.4845268130302429)) {
                                if ((input[53]) <= (-0.27429573237895966)) {
                                    memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[26]) <= (0.03343902761116624)) {
                                    if ((input[70]) <= (0.460183784365654)) {
                                        memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[73]) <= (-0.4312777817249298)) {
                                        if ((input[1]) <= (-0.0008310156408697367)) {
                                            memcpy(var17, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var17, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var17, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var4, var17, 6, var3);
    double var18[6];
    if ((input[20]) <= (-0.6449032425880432)) {
        if ((input[54]) <= (0.3991740047931671)) {
            if ((input[50]) <= (-0.108279038220644)) {
                if ((input[40]) <= (0.07987621426582336)) {
                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[17]) <= (-0.9446243047714233)) {
                        if ((input[6]) <= (-0.9994311630725861)) {
                            if ((input[58]) <= (-0.9882473051548004)) {
                                memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[20]) <= (-0.9942656457424164)) {
                                if ((input[42]) <= (0.2184135839343071)) {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[53]) <= (-0.07638822868466377)) {
                                    if ((input[11]) <= (-0.8095406889915466)) {
                                        if ((input[51]) <= (0.25857962667942047)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.019434628975265017, 0.980565371024735, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.2692307692307692, 0.7307692307692307, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[64]) <= (-0.9529254138469696)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.16379310344827586, 0.8362068965517241, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.018018018018018018, 0.9819819819819819, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[67]) <= (-0.2664852663874626)) {
                                        if ((input[74]) <= (0.666142076253891)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[35]) <= (0.39575713872909546)) {
                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[49]) <= (0.46200793981552124)) {
                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                } else {
                    if ((input[53]) <= (0.10581471398472786)) {
                        if ((input[40]) <= (0.9430939257144928)) {
                            if ((input[19]) <= (-0.9303242266178131)) {
                                if ((input[1]) <= (-0.04573618061840534)) {
                                    if ((input[73]) <= (-0.9474126100540161)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[41]) <= (0.009625714272260666)) {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[56]) <= (0.8608192801475525)) {
                                if ((input[11]) <= (-0.4647239148616791)) {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[16]) <= (-0.999992311000824)) {
                                    if ((input[52]) <= (0.9889901578426361)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[2]) <= (-0.09721249341964722)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[20]) <= (-0.9895508587360382)) {
                                        if ((input[38]) <= (-0.08785243704915047)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.7837837837837838, 0.21621621621621623, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[16]) <= (-0.9999604523181915)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.5403225806451613, 0.4596774193548387, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.7205882352941176, 0.27941176470588236, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[22]) <= (0.40035340189933777)) {
                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                }
            }
        } else {
            if ((input[40]) <= (0.06495714001357555)) {
                memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
            } else {
                memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
            }
        }
    } else {
        if ((input[3]) <= (0.02791380137205124)) {
            if ((input[73]) <= (-0.5544833540916443)) {
                if ((input[9]) <= (-0.4555814117193222)) {
                    if ((input[75]) <= (-0.8398149013519287)) {
                        if ((input[50]) <= (0.5197812914848328)) {
                            if ((input[52]) <= (0.22758661955595016)) {
                                memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            } else {
                                if ((input[41]) <= (-0.11993403732776642)) {
                                    if ((input[56]) <= (0.8818522691726685)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[34]) <= (0.1397913321852684)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[40]) <= (0.5435027629137039)) {
                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                        } else {
                            if ((input[38]) <= (-0.38288477063179016)) {
                                memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[38]) <= (0.3148501366376877)) {
                        if ((input[72]) <= (0.32198722660541534)) {
                            if ((input[42]) <= (-0.4728657454252243)) {
                                memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[22]) <= (0.08238724060356617)) {
                                    if ((input[61]) <= (-0.8406372368335724)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[37]) <= (-0.29957349598407745)) {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[27]) <= (0.06261762417852879)) {
                                if ((input[26]) <= (-0.013423971366137266)) {
                                    if ((input[27]) <= (-0.08308812044560909)) {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[42]) <= (-0.11422429420053959)) {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[9]) <= (0.4524979442358017)) {
                                        if ((input[57]) <= (-0.9738962948322296)) {
                                            memcpy(var18, (double[]){0.8333333333333334, 0.0, 0.16666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.01337295690936107, 0.9791976225854383, 0.007429420505200594, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[22]) <= (0.3702673316001892)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[7]) <= (-0.1243153065443039)) {
                                    if ((input[36]) <= (-0.22941457480192184)) {
                                        if ((input[35]) <= (0.2761155590415001)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[45]) <= (-0.13964687287807465)) {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[69]) <= (-0.41019460558891296)) {
                                        if ((input[66]) <= (0.5709122717380524)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.9156626506024096, 0.08433734939759036, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[62]) <= (-0.36549925804138184)) {
                                            memcpy(var18, (double[]){0.9047619047619048, 0.09523809523809523, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.09090909090909091, 0.36363636363636365, 0.5454545454545454, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[69]) <= (-0.3606107085943222)) {
                    if ((input[50]) <= (-0.2179737240076065)) {
                        if ((input[3]) <= (-0.41184455156326294)) {
                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[14]) <= (0.19340384006500244)) {
                                if ((input[61]) <= (-0.9433268308639526)) {
                                    if ((input[41]) <= (-0.259123720228672)) {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[65]) <= (-0.6405974328517914)) {
                                        if ((input[14]) <= (-0.02085895650088787)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[48]) <= (-0.8140799701213837)) {
                                    if ((input[77]) <= (0.9567556083202362)) {
                                        if ((input[4]) <= (-0.21667318791151047)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.018691588785046728, 0.9813084112149533, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[71]) <= (-0.4401598572731018)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[48]) <= (-0.9499641954898834)) {
                            if ((input[38]) <= (0.2381993532180786)) {
                                if ((input[3]) <= (-0.1892901435494423)) {
                                    if ((input[72]) <= (0.745661735534668)) {
                                        if ((input[56]) <= (0.6031956672668457)) {
                                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[20]) <= (-0.23694149404764175)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[74]) <= (0.5404194593429565)) {
                                if ((input[17]) <= (-0.7586120963096619)) {
                                    if ((input[37]) <= (-0.06369731947779655)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[52]) <= (0.20813411474227905)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[66]) <= (0.6460794806480408)) {
                        if ((input[37]) <= (-0.32786744832992554)) {
                            if ((input[69]) <= (0.05307813920080662)) {
                                if ((input[55]) <= (-0.2209315448999405)) {
                                    if ((input[22]) <= (0.4263988882303238)) {
                                        if ((input[8]) <= (-0.009073120541870594)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.2727272727272727, 0.0, 0.7272727272727273, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[1]) <= (-0.01574248308315873)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[8]) <= (0.03415454551577568)) {
                                        if ((input[53]) <= (-0.2739846706390381)) {
                                            memcpy(var18, (double[]){0.3617021276595745, 0.574468085106383, 0.06382978723404255, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.6470588235294118, 0.0, 0.35294117647058826, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[18]) <= (-0.45159812271595)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[26]) <= (-0.02653513941913843)) {
                                    if ((input[15]) <= (-0.10469891224056482)) {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[48]) <= (-0.8964639902114868)) {
                                if ((input[6]) <= (-0.20243827253580093)) {
                                    if ((input[43]) <= (-0.9553919732570648)) {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[78]) <= (-0.4662351906299591)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[22]) <= (0.4019095003604889)) {
                                        if ((input[45]) <= (-0.9460177421569824)) {
                                            memcpy(var18, (double[]){0.42857142857142855, 0.5714285714285714, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[43]) <= (-0.8941875696182251)) {
                                            memcpy(var18, (double[]){0.9571428571428572, 0.02857142857142857, 0.014285714285714285, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if ((input[16]) <= (-0.6255445778369904)) {
                                    if ((input[37]) <= (-0.26131971180438995)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[79]) <= (0.4554951339960098)) {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[45]) <= (-0.7480869889259338)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[18]) <= (-0.6999074220657349)) {
                            if ((input[50]) <= (-0.22655519098043442)) {
                                if ((input[42]) <= (-0.008823162410408258)) {
                                    if ((input[40]) <= (0.921241044998169)) {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[47]) <= (-0.9662270545959473)) {
                                            memcpy(var18, (double[]){0.9, 0.0, 0.1, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.1, 0.0, 0.9, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[12]) <= (0.46265098452568054)) {
                                    if ((input[47]) <= (-0.9787790775299072)) {
                                        if ((input[25]) <= (-0.14378615841269493)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[59]) <= (-0.9586380422115326)) {
                                if ((input[16]) <= (-0.5525852739810944)) {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[13]) <= (-0.20391079783439636)) {
                                    memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[55]) <= (-0.2968214601278305)) {
                if ((input[0]) <= (0.022596356458961964)) {
                    memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                } else {
                    if ((input[44]) <= (-0.7421064674854279)) {
                        if ((input[66]) <= (0.5885656177997589)) {
                            if ((input[22]) <= (0.5827559530735016)) {
                                if ((input[55]) <= (-0.30630895495414734)) {
                                    memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                }
            } else {
                if ((input[53]) <= (-0.28263044357299805)) {
                    if ((input[37]) <= (-0.6216334998607635)) {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[50]) <= (-0.30523279309272766)) {
                            memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[1]) <= (-0.014589323196560144)) {
                                memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[6]) <= (-0.09959402680397034)) {
                        memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[69]) <= (-0.13591449707746506)) {
                            if ((input[22]) <= (0.521859809756279)) {
                                if ((input[49]) <= (0.782291978597641)) {
                                    if ((input[23]) <= (0.1410316303372383)) {
                                        memcpy(var18, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[62]) <= (-0.9749467968940735)) {
                                        if ((input[10]) <= (-0.07612635754048824)) {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[55]) <= (-0.06129620596766472)) {
                                if ((input[10]) <= (0.2182077094912529)) {
                                    if ((input[27]) <= (-0.1160722840577364)) {
                                        if ((input[18]) <= (-0.7743439078330994)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[65]) <= (-0.29771605134010315)) {
                                            memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var18, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var18, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var3, var18, 6, var2);
    double var19[6];
    if ((input[19]) <= (-0.7327952682971954)) {
        if ((input[52]) <= (0.09597938368096948)) {
            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
        } else {
            if ((input[63]) <= (-0.9905836582183838)) {
                if ((input[50]) <= (-0.08861101791262627)) {
                    if ((input[6]) <= (-0.8117600083351135)) {
                        if ((input[53]) <= (-0.14035068452358246)) {
                            if ((input[0]) <= (0.23721272498369217)) {
                                if ((input[32]) <= (-0.10027381964027882)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[29]) <= (0.020130831748247147)) {
                                    if ((input[4]) <= (-0.9345767498016357)) {
                                        if ((input[75]) <= (-0.6807833611965179)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.48, 0.52, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0948905109489051, 0.9051094890510949, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[31]) <= (0.35070934891700745)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.005128205128205128, 0.9948717948717949, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.06451612903225806, 0.9354838709677419, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[41]) <= (-0.29727867245674133)) {
                                        if ((input[32]) <= (-0.4378078281879425)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0380952380952381, 0.9619047619047619, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[47]) <= (-0.9973325729370117)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.034482758620689655, 0.9655172413793104, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[4]) <= (-0.9906118512153625)) {
                                if ((input[46]) <= (-0.999146968126297)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[78]) <= (0.9614614546298981)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[0]) <= (0.2932271361351013)) {
                                    if ((input[46]) <= (-0.9453042447566986)) {
                                        if ((input[37]) <= (0.35816942155361176)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.09714285714285714, 0.9028571428571428, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.5185185185185185, 0.48148148148148145, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[47]) <= (-0.9861516356468201)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[69]) <= (-0.643789529800415)) {
                            if ((input[66]) <= (0.9165549874305725)) {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[37]) <= (-0.18034760653972626)) {
                                if ((input[54]) <= (-0.39041668176651)) {
                                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[57]) <= (-0.999756932258606)) {
                        if ((input[51]) <= (0.05685404688119888)) {
                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[17]) <= (-0.9990746974945068)) {
                                if ((input[73]) <= (-0.5735337436199188)) {
                                    if ((input[32]) <= (-0.3701252415776253)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[17]) <= (-0.9990565478801727)) {
                            if ((input[59]) <= (-0.9999261200428009)) {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[1]) <= (-0.004284226801246405)) {
                                    if ((input[49]) <= (0.8856978416442871)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[39]) <= (-0.7394291162490845)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.979381443298969, 0.020618556701030927, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[71]) <= (-0.468745693564415)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[47]) <= (-0.9859511256217957)) {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[61]) <= (-0.5940096080303192)) {
                                    if ((input[35]) <= (-0.049233464524149895)) {
                                        if ((input[77]) <= (0.48609569668769836)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.125, 0.875, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            } else {
                if ((input[55]) <= (-0.3020828664302826)) {
                    if ((input[41]) <= (-0.011671330779790878)) {
                        if ((input[78]) <= (0.7238752245903015)) {
                            if ((input[38]) <= (-0.11515765264630318)) {
                                if ((input[35]) <= (-0.2567295655608177)) {
                                    if ((input[73]) <= (-0.84498330950737)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[24]) <= (0.23891084641218185)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[1]) <= (0.015701147727668285)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        if ((input[41]) <= (0.07557438313961029)) {
                            if ((input[79]) <= (-0.8421732485294342)) {
                                if ((input[77]) <= (0.2981624901294708)) {
                                    if ((input[57]) <= (-0.9897510409355164)) {
                                        if ((input[1]) <= (-0.005489016883075237)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[39]) <= (-0.01857914449647069)) {
                                    if ((input[22]) <= (-0.4811710864305496)) {
                                        if ((input[74]) <= (0.41518382728099823)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.5882352941176471, 0.4117647058823529, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[1]) <= (-0.03537733945995569)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[6]) <= (-0.9985208213329315)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[29]) <= (-0.20120994001626968)) {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.6129032258064516, 0.3870967741935484, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.9391304347826087, 0.06086956521739131, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[42]) <= (-0.11381744034588337)) {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                } else {
                    if ((input[32]) <= (-0.471107080578804)) {
                        if ((input[7]) <= (-0.6069772392511368)) {
                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 1.0, 0.0}, 6 * sizeof(double));
                        }
                    } else {
                        memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if ((input[66]) <= (0.5750517845153809)) {
            if ((input[37]) <= (-0.3069303035736084)) {
                if ((input[15]) <= (0.05413838289678097)) {
                    if ((input[74]) <= (0.548814058303833)) {
                        if ((input[37]) <= (-0.5189917385578156)) {
                            if ((input[50]) <= (-0.34127482771873474)) {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[48]) <= (-0.9287704825401306)) {
                                if ((input[38]) <= (-0.4559789001941681)) {
                                    if ((input[28]) <= (-0.2749409154057503)) {
                                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    if ((input[12]) <= (0.18984317034482956)) {
                                        if ((input[45]) <= (-0.9700398147106171)) {
                                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.47619047619047616, 0.5238095238095238, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[9]) <= (0.1670171245932579)) {
                                    if ((input[70]) <= (0.1341216154396534)) {
                                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[54]) <= (0.023830548161640763)) {
                            if ((input[6]) <= (-0.07112282887101173)) {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[14]) <= (0.31122590601444244)) {
                        if ((input[16]) <= (-0.5778757631778717)) {
                            if ((input[72]) <= (0.26971473544836044)) {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[22]) <= (0.5737336277961731)) {
                                if ((input[69]) <= (-0.04299489501863718)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[3]) <= (0.059637367725372314)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            } else {
                                if ((input[70]) <= (0.2947626933455467)) {
                                    memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if ((input[52]) <= (0.9366927444934845)) {
                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[32]) <= (0.010091107338666916)) {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[47]) <= (-0.9444629848003387)) {
                    if ((input[16]) <= (-0.35857976973056793)) {
                        if ((input[40]) <= (0.8124156594276428)) {
                            if ((input[14]) <= (0.2119600772857666)) {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[74]) <= (0.5909854769706726)) {
                                    memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[0]) <= (0.10354185849428177)) {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[14]) <= (-0.5632963329553604)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[59]) <= (-0.9216761291027069)) {
                                        if ((input[62]) <= (-0.23552266508340836)) {
                                            memcpy(var19, (double[]){0.9899135446685879, 0.007204610951008645, 0.002881844380403458, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.5, 0.5, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    }
                } else {
                    if ((input[14]) <= (0.18102066218852997)) {
                        if ((input[28]) <= (-0.1523294299840927)) {
                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        } else {
                            if ((input[10]) <= (-0.2637074291706085)) {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    } else {
                        if ((input[41]) <= (-0.3136666417121887)) {
                            if ((input[61]) <= (-0.8333222568035126)) {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            if ((input[10]) <= (0.2907932251691818)) {
                                if ((input[6]) <= (0.09496092214249074)) {
                                    if ((input[15]) <= (0.05197950638830662)) {
                                        if ((input[73]) <= (-0.40471121668815613)) {
                                            memcpy(var19, (double[]){0.8888888888888888, 0.1111111111111111, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[66]) <= (0.5110573023557663)) {
                                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        } else {
            if ((input[69]) <= (-0.383921355009079)) {
                if ((input[74]) <= (0.533807784318924)) {
                    if ((input[38]) <= (-0.4422245919704437)) {
                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[42]) <= (0.03738521970808506)) {
                            if ((input[37]) <= (-0.5401048064231873)) {
                                if ((input[9]) <= (-0.005739192478358746)) {
                                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[40]) <= (0.9568197429180145)) {
                                    if ((input[41]) <= (-0.2502935901284218)) {
                                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[50]) <= (-0.22801347821950912)) {
                                            memcpy(var19, (double[]){0.3333333333333333, 0.0, 0.6666666666666666, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[19]) <= (-0.5548522472381592)) {
                                if ((input[47]) <= (-0.8755531013011932)) {
                                    memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[29]) <= (-0.43848279118537903)) {
                                    memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if ((input[57]) <= (-0.9798472225666046)) {
                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[50]) <= (0.313448004424572)) {
                            if ((input[38]) <= (-0.670435756444931)) {
                                if ((input[40]) <= (0.8353912234306335)) {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[53]) <= (-0.26525598764419556)) {
                                    if ((input[44]) <= (-0.79087233543396)) {
                                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[1]) <= (0.006556054577231407)) {
                                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[3]) <= (0.12863901257514954)) {
                                        if ((input[13]) <= (-0.21421553939580917)) {
                                            memcpy(var19, (double[]){0.0, 0.2857142857142857, 0.7142857142857143, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.05737704918032787, 0.9234972677595629, 0.01912568306010929, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        } else {
                            if ((input[30]) <= (-0.4528020918369293)) {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 1.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 0.0, 0.0, 0.0, 1.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            } else {
                if ((input[41]) <= (-0.30379535257816315)) {
                    if ((input[75]) <= (-0.4741455167531967)) {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                    } else {
                        if ((input[42]) <= (-0.12070706486701965)) {
                            if ((input[71]) <= (-0.3306810110807419)) {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        } else {
                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                        }
                    }
                } else {
                    if ((input[3]) <= (-0.11767339333891869)) {
                        if ((input[76]) <= (0.7185158729553223)) {
                            if ((input[67]) <= (-0.8107425570487976)) {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[9]) <= (0.15577072650194168)) {
                                    if ((input[17]) <= (-0.605429470539093)) {
                                        if ((input[5]) <= (-0.4376537352800369)) {
                                            memcpy(var19, (double[]){0.8936170212765957, 0.0, 0.10638297872340426, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.9753694581280788, 0.014778325123152709, 0.009852216748768473, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            }
                        } else {
                            if ((input[3]) <= (-0.4159203767776489)) {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                if ((input[54]) <= (0.05246889451518655)) {
                                    memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    if ((input[75]) <= (-0.7188778817653656)) {
                                        memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if ((input[71]) <= (0.000010438607205287553)) {
                            if ((input[61]) <= (-0.9853186905384064)) {
                                if ((input[58]) <= (-0.952572226524353)) {
                                    memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                } else {
                                    memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                }
                            } else {
                                if ((input[51]) <= (-0.36847788095474243)) {
                                    if ((input[73]) <= (-0.6124082207679749)) {
                                        memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                    } else {
                                        if ((input[39]) <= (0.1747119314968586)) {
                                            memcpy(var19, (double[]){0.0, 1.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if ((input[9]) <= (0.15317672491073608)) {
                                        if ((input[27]) <= (0.11995033733546734)) {
                                            memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0, 0.5, 0.5, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    } else {
                                        if ((input[16]) <= (-0.5504549145698547)) {
                                            memcpy(var19, (double[]){0.08823529411764706, 0.11764705882352941, 0.7941176470588235, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        } else {
                                            memcpy(var19, (double[]){0.0088339222614841, 0.0017667844522968198, 0.9893992932862191, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((input[57]) <= (-0.9749021828174591)) {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){1.0, 0.0, 0.0, 0.0, 0.0, 0.0}, 6 * sizeof(double));
                            }
                        }
                    }
                }
            }
        }
    }
    add_vectors(var2, var19, 6, var1);
    mul_vector_number(var1, 0.1, 6, var0);
    memcpy(output, var0, 6 * sizeof(double));
}


int main(void) {
    double input[5];
    double output[5];

    predict(input, output);
}
