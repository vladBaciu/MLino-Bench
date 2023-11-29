#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.450000047683716) {
                if (features[0] <= 4.950000047683716) {
                    if (features[2] <= 3.899999976158142) {
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
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[0] <= 5.950000047683716) {
                if (features[2] <= 4.8500001430511475) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 29; 
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
    
    if (features[3] <= 0.7000000029802322) {
        classes[0] = 43; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[1] <= 2.649999976158142) {
                if (features[2] <= 4.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 16; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 31; 
                classes[2] = 0; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 27; 
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
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 34; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.699999988079071) {
            if (features[1] <= 2.25) {
                if (features[3] <= 1.25) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                if (features[2] <= 5.349999904632568) {
                    if (features[3] <= 1.449999988079071) {
                        classes[0] = 0; 
                        classes[1] = 35; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 6.150000095367432) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 6.400000095367432) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        } else {
            if (features[0] <= 5.950000047683716) {
                if (features[2] <= 4.8500001430511475) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 26; 
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
    
    if (features[2] <= 2.599999964237213) {
        classes[0] = 41; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.550000011920929) {
            if (features[2] <= 5.25) {
                classes[0] = 0; 
                classes[1] = 40; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[0] <= 6.549999952316284) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 22; 
            } else {
                if (features[3] <= 1.75) {
                    if (features[3] <= 1.6500000357627869) {
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
                    classes[2] = 14; 
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

int predict_4(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.7000000029802322) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.550000011920929) {
            if (features[2] <= 4.950000047683716) {
                classes[0] = 0; 
                classes[1] = 41; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 6; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 35; 
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
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 42; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[3] <= 1.3499999642372131) {
                classes[0] = 0; 
                classes[1] = 13; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 5.049999952316284) {
                    if (features[0] <= 5.049999952316284) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 17; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[1] <= 2.75) {
                        if (features[0] <= 6.049999952316284) {
                            classes[0] = 0; 
                            classes[1] = 4; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                }
            }
        } else {
            if (features[0] <= 5.950000047683716) {
                if (features[1] <= 3.100000023841858) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 6; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 30; 
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
    
    if (features[3] <= 0.75) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.950000047683716) {
            if (features[2] <= 4.75) {
                if (features[2] <= 4.450000047683716) {
                    classes[0] = 0; 
                    classes[1] = 31; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.600000023841858) {
                        classes[0] = 0; 
                        classes[1] = 13; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                if (features[2] <= 4.8500001430511475) {
                    if (features[0] <= 6.049999952316284) {
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
                    classes[1] = 3; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[0] <= 6.049999952316284) {
                if (features[3] <= 1.699999988079071) {
                    if (features[1] <= 2.450000047683716) {
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
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 26; 
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
    
    if (features[0] <= 5.549999952316284) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 40; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.450000047683716) {
                classes[0] = 0; 
                classes[1] = 11; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 2.75) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                }
            }
        }
    } else {
        if (features[3] <= 1.699999988079071) {
            if (features[0] <= 7.099999904632568) {
                if (features[0] <= 6.3500001430511475) {
                    if (features[1] <= 2.850000023841858) {
                        if (features[3] <= 1.3499999642372131) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[3] <= 1.449999988079071) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            } else {
                                if (features[1] <= 2.75) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 10; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 12; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[0] <= 5.950000047683716) {
                if (features[2] <= 4.900000095367432) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 7; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 27; 
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

int predict_8(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 5.349999904632568) {
                if (features[2] <= 5.049999952316284) {
                    classes[0] = 0; 
                    classes[1] = 36; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.150000095367432) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 3; 
            }
        } else {
            if (features[2] <= 4.8500001430511475) {
                if (features[0] <= 6.049999952316284) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
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

int predict_9(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 38; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 5.049999952316284) {
            if (features[2] <= 4.75) {
                classes[0] = 0; 
                classes[1] = 35; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 3.049999952316284) {
                    if (features[0] <= 6.5) {
                        if (features[0] <= 6.25) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 6; 
                        } else {
                            if (features[1] <= 2.600000023841858) {
                                if (features[2] <= 4.950000047683716) {
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
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 6; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 30; 
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

