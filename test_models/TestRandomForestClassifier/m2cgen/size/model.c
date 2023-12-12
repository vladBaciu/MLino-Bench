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
    double var0[3];
    double var1[3];
    double var2[3];
    double var3[3];
    double var4[3];
    double var5[3];
    double var6[3];
    double var7[3];
    double var8[3];
    double var9[3];
    double var10[3];
    if ((input[3]) <= (0.75)) {
        memcpy(var10, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[3]) <= (1.75)) {
            if ((input[0]) <= (7.099999904632568)) {
                memcpy(var10, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                memcpy(var10, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        } else {
            memcpy(var10, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
        }
    }
    double var11[3];
    if ((input[3]) <= (0.75)) {
        memcpy(var11, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[2]) <= (4.950000047683716)) {
            if ((input[3]) <= (1.600000023841858)) {
                memcpy(var11, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if ((input[1]) <= (3.100000023841858)) {
                    memcpy(var11, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    memcpy(var11, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            memcpy(var11, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
        }
    }
    add_vectors(var10, var11, 3, var9);
    double var12[3];
    if ((input[0]) <= (5.450000047683716)) {
        if ((input[2]) <= (2.449999988079071)) {
            memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
        } else {
            if ((input[3]) <= (1.550000011920929)) {
                memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    } else {
        if ((input[2]) <= (4.75)) {
            if ((input[1]) <= (3.600000023841858)) {
                memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                memcpy(var12, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[2]) <= (5.200000047683716)) {
                if ((input[1]) <= (3.049999952316284)) {
                    if ((input[2]) <= (5.049999952316284)) {
                        memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        if ((input[0]) <= (5.900000095367432)) {
                            memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var12, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var12, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var9, var12, 3, var8);
    double var13[3];
    if ((input[3]) <= (0.800000011920929)) {
        memcpy(var13, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[3]) <= (1.6500000357627869)) {
            if ((input[0]) <= (6.949999809265137)) {
                if ((input[3]) <= (1.449999988079071)) {
                    memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if ((input[1]) <= (2.350000023841858)) {
                        memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[2]) <= (5.049999952316284)) {
                if ((input[0]) <= (6.5)) {
                    if ((input[0]) <= (5.75)) {
                        memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        if ((input[1]) <= (3.100000023841858)) {
                            memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    }
                } else {
                    memcpy(var13, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var13, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var8, var13, 3, var7);
    double var14[3];
    if ((input[2]) <= (2.599999964237213)) {
        memcpy(var14, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[2]) <= (4.799999952316284)) {
            memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        } else {
            if ((input[3]) <= (1.75)) {
                if ((input[2]) <= (4.950000047683716)) {
                    memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if ((input[2]) <= (5.349999904632568)) {
                        if ((input[0]) <= (6.5)) {
                            if ((input[0]) <= (6.150000095367432)) {
                                if ((input[3]) <= (1.550000011920929)) {
                                    memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        } else {
                            memcpy(var14, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var14, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var7, var14, 3, var6);
    double var15[3];
    if ((input[3]) <= (0.800000011920929)) {
        memcpy(var15, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[3]) <= (1.449999988079071)) {
            if ((input[3]) <= (1.3499999642372131)) {
                memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if ((input[1]) <= (2.75)) {
                    memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if ((input[2]) <= (4.75)) {
                if ((input[1]) <= (2.649999976158142)) {
                    memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if ((input[3]) <= (1.75)) {
                    if ((input[1]) <= (2.450000047683716)) {
                        memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        if ((input[2]) <= (5.049999952316284)) {
                            memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if ((input[1]) <= (2.75)) {
                                memcpy(var15, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        }
                    }
                } else {
                    memcpy(var15, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var6, var15, 3, var5);
    double var16[3];
    if ((input[2]) <= (2.5)) {
        memcpy(var16, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[2]) <= (4.8500001430511475)) {
            if ((input[3]) <= (1.6500000357627869)) {
                memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                if ((input[2]) <= (4.650000095367432)) {
                    memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if ((input[0]) <= (5.950000047683716)) {
                        memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if ((input[2]) <= (5.200000047683716)) {
                if ((input[1]) <= (2.9499999284744263)) {
                    if ((input[3]) <= (1.699999988079071)) {
                        if ((input[3]) <= (1.550000011920929)) {
                            memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var16, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var16, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var5, var16, 3, var4);
    double var17[3];
    if ((input[3]) <= (0.800000011920929)) {
        memcpy(var17, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[3]) <= (1.75)) {
            if ((input[2]) <= (5.049999952316284)) {
                if ((input[0]) <= (4.950000047683716)) {
                    if ((input[1]) <= (2.450000047683716)) {
                        memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var17, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[0]) <= (5.950000047683716)) {
                if ((input[3]) <= (1.8499999642372131)) {
                    memcpy(var17, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var17, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var17, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var4, var17, 3, var3);
    double var18[3];
    if ((input[3]) <= (0.75)) {
        memcpy(var18, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[2]) <= (4.75)) {
            if ((input[0]) <= (4.950000047683716)) {
                if ((input[1]) <= (2.450000047683716)) {
                    memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            } else {
                memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[0]) <= (6.049999952316284)) {
                if ((input[0]) <= (5.8500001430511475)) {
                    memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                } else {
                    if ((input[3]) <= (1.699999988079071)) {
                        memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    } else {
                        if ((input[1]) <= (3.100000023841858)) {
                            memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    }
                }
            } else {
                if ((input[3]) <= (1.550000011920929)) {
                    if ((input[0]) <= (6.6000001430511475)) {
                        memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var18, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var18, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            }
        }
    }
    add_vectors(var3, var18, 3, var2);
    double var19[3];
    if ((input[2]) <= (2.599999964237213)) {
        memcpy(var19, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
    } else {
        if ((input[0]) <= (6.1499998569488525)) {
            if ((input[0]) <= (6.049999952316284)) {
                if ((input[2]) <= (4.349999904632568)) {
                    memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                } else {
                    if ((input[1]) <= (3.200000047683716)) {
                        if ((input[1]) <= (2.899999976158142)) {
                            memcpy(var19, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            if ((input[3]) <= (1.649999976158142)) {
                                memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var19, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if ((input[2]) <= (4.75)) {
                memcpy(var19, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
            } else {
                memcpy(var19, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var2, var19, 3, var1);
    mul_vector_number(var1, 0.1, 3, var0);
    memcpy(output, var0, 3 * sizeof(double));
}


int main(void) {
    double input[5];
    double output[5];

    predict(input, output);
}
