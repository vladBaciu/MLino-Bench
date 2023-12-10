#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[1] <= -0.026085466146469116) {
        if (features[3] <= 0.6229301393032074) {
            if (features[2] <= -0.8175609409809113) {
                classes[0] = 4; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 1.3296920955181122) {
                    if (features[2] <= 0.9302620887756348) {
                        if (features[1] <= -1.8148032426834106) {
                            if (features[3] <= 0.08899002522230148) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 31; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            }
        } else {
            if (features[3] <= 0.7564151883125305) {
                if (features[2] <= 0.586428090929985) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 13; 
            }
        }
    } else {
        if (features[3] <= -0.3114650696516037) {
            classes[0] = 50; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 0.7869979441165924) {
                classes[0] = 0; 
                classes[1] = 5; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 8; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_1(float features[]) {
    int classes[3];
    
    if (features[2] <= -0.645643949508667) {
        classes[0] = 44; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 0.48944512009620667) {
            classes[0] = 0; 
            classes[1] = 34; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 0.6437337398529053) {
                if (features[0] <= -0.49876153096556664) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            } else {
                if (features[3] <= 0.7564151883125305) {
                    if (features[0] <= 1.3906405568122864) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 35; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_2(float features[]) {
    int classes[3];
    
    if (features[2] <= -0.645643949508667) {
        classes[0] = 41; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 0.557775229215622) {
            classes[0] = 0; 
            classes[1] = 34; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 0.2935683876276016) {
                if (features[3] <= 0.6896726787090302) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 0.6437337398529053) {
                        if (features[0] <= 0.17167148366570473) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 7; 
                    }
                }
            } else {
                if (features[2] <= 0.7010394334793091) {
                    if (features[1] <= -0.3614700436592102) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 31; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_3(float features[]) {
    int classes[3];
    
    if (features[3] <= -0.578435130417347) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 0.6150809228420258) {
            if (features[0] <= -1.04729762673378) {
                if (features[2] <= 0.09932984411716461) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 39; 
                classes[2] = 0; 
            }
        } else {
            if (features[1] <= 0.19750425219535828) {
                if (features[3] <= 0.7564151883125305) {
                    if (features[2] <= 0.9302620887756348) {
                        if (features[1] <= -0.3614700436592102) {
                            if (features[1] <= -0.6968546211719513) {
                                if (features[2] <= 0.7583450973033905) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 18; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 10; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_4(float features[]) {
    int classes[3];
    
    if (features[2] <= -0.7316024601459503) {
        classes[0] = 37; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= -0.31591615080833435) {
            classes[0] = 0; 
            classes[1] = 18; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 0.7564151883125305) {
                if (features[2] <= 0.7010394334793091) {
                    classes[0] = 0; 
                    classes[1] = 22; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 0.8421044647693634) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    } else {
                        if (features[3] <= 0.6229301393032074) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 37; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_5(float features[]) {
    int classes[3];
    
    if (features[3] <= -0.5116926208138466) {
        classes[0] = 37; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 0.5864280760288239) {
            if (features[3] <= 0.6229301393032074) {
                classes[0] = 0; 
                classes[1] = 35; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[2] <= 0.7010394334793091) {
                if (features[3] <= 0.6229301691055298) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 0.6437337398529053) {
                        if (features[0] <= 0.17167148366570473) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 4; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                if (features[2] <= 0.8443036079406738) {
                    if (features[3] <= 0.7564151883125305) {
                        if (features[1] <= -1.3676237761974335) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 28; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_6(float features[]) {
    int classes[3];
    
    if (features[3] <= -0.5116926208138466) {
        classes[0] = 35; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 0.4154652953147888) {
            if (features[2] <= 0.7010394036769867) {
                classes[0] = 0; 
                classes[1] = 29; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 0.6896726787090302) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[2] <= 0.5864280760288239) {
                classes[0] = 0; 
                classes[1] = 12; 
                classes[2] = 0; 
            } else {
                if (features[1] <= -1.0322392284870148) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 0.7296922504901886) {
                        if (features[1] <= -0.2496751844882965) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 33; 
                    }
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_7(float features[]) {
    int classes[3];
    
    if (features[3] <= -0.5116926208138466) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 0.7564151883125305) {
            if (features[2] <= 0.6437337696552277) {
                classes[0] = 0; 
                classes[1] = 42; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 0.7583450973033905) {
                    if (features[0] <= 0.6592591106891632) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 34; 
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_8(float features[]) {
    int classes[3];
    
    if (features[0] <= -0.43781305849552155) {
        if (features[1] <= -0.5850597620010376) {
            classes[0] = 0; 
            classes[1] = 7; 
            classes[2] = 0; 
        } else {
            classes[0] = 36; 
            classes[1] = 0; 
            classes[2] = 0; 
        }
    } else {
        if (features[2] <= 0.5864280760288239) {
            if (features[1] <= 1.6508374214172363) {
                classes[0] = 0; 
                classes[1] = 34; 
                classes[2] = 0; 
            } else {
                classes[0] = 3; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[1] <= -0.6968546211719513) {
                if (features[3] <= 0.7564151883125305) {
                    if (features[2] <= 0.7583450973033905) {
                        if (features[0] <= 0.4154652953147888) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 4; 
                }
            } else {
                if (features[2] <= 0.7583450973033905) {
                    if (features[3] <= 0.7564151883125305) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 0.08570939302444458) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 5; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 25; 
                }
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict_9(float features[]) {
    int classes[3];
    
    if (features[2] <= -0.7316024601459503) {
        classes[0] = 46; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 0.5864280760288239) {
            classes[0] = 0; 
            classes[1] = 38; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 0.6437337398529053) {
                if (features[0] <= 0.17167148366570473) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 32; 
            }
        }
    }
    int class_idx = 0;
    int class_val = classes[0];
    int i;
    for (i = 1; i < 3; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
}

int predict (float features[]) {
    int n_classes = 3;
    int classes[n_classes];
    int i;
    for (i = 0; i < n_classes; i++) {
        classes[i] = 0;
    }

    classes[predict_0(features)]++;
    classes[predict_1(features)]++;
    classes[predict_2(features)]++;
    classes[predict_3(features)]++;
    classes[predict_4(features)]++;
    classes[predict_5(features)]++;
    classes[predict_6(features)]++;
    classes[predict_7(features)]++;
    classes[predict_8(features)]++;
    classes[predict_9(features)]++;

    int class_idx = 0;
    int class_val = classes[0];
    for (i = 1; i < n_classes; i++) {
        if (classes[i] > class_val) {
            class_idx = i;
            class_val = classes[i];
        }
    }
    return class_idx;
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
