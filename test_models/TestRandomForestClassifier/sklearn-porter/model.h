#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 45; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.8500001430511475) {
            classes[0] = 0; 
            classes[1] = 34; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.75) {
                if (features[1] <= 2.899999976158142) {
                    if (features[2] <= 5.049999952316284) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        if (features[3] <= 1.550000011920929) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
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
    
    if (features[3] <= 0.75) {
        classes[0] = 39; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.950000047683716) {
            if (features[0] <= 5.0) {
                if (features[3] <= 1.350000023841858) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                if (features[2] <= 4.75) {
                    classes[0] = 0; 
                    classes[1] = 33; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 5.950000047683716) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.649999976158142) {
                            classes[0] = 0; 
                            classes[1] = 3; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[0] <= 6.949999809265137) {
                    if (features[1] <= 2.649999976158142) {
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
                classes[1] = 0; 
                classes[2] = 28; 
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
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 47; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.799999952316284) {
            classes[0] = 0; 
            classes[1] = 35; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.699999988079071) {
                if (features[2] <= 4.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                } else {
                    if (features[1] <= 2.450000047683716) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
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
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 33; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.049999952316284) {
            if (features[2] <= 4.8500001430511475) {
                if (features[3] <= 1.6500000357627869) {
                    classes[0] = 0; 
                    classes[1] = 29; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.75) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                }
            } else {
                if (features[0] <= 5.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 8; 
                } else {
                    if (features[3] <= 1.550000011920929) {
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
            if (features[2] <= 5.049999952316284) {
                if (features[1] <= 2.850000023841858) {
                    if (features[2] <= 4.700000047683716) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 6.25) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            if (features[2] <= 4.950000047683716) {
                                if (features[1] <= 2.600000023841858) {
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
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 28; 
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
    
    if (features[0] <= 5.450000047683716) {
        if (features[3] <= 0.75) {
            classes[0] = 39; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.200000047683716) {
                classes[0] = 0; 
                classes[1] = 6; 
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
        if (features[3] <= 1.75) {
            if (features[1] <= 2.25) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 2; 
            } else {
                if (features[1] <= 2.850000023841858) {
                    if (features[0] <= 6.049999952316284) {
                        classes[0] = 0; 
                        classes[1] = 10; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.3499999642372131) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 4.849999904632568) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 19; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[2] <= 4.8500001430511475) {
                if (features[0] <= 5.950000047683716) {
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

int predict_5(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.75) {
        classes[0] = 40; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[0] <= 6.1499998569488525) {
            if (features[2] <= 4.8500001430511475) {
                if (features[3] <= 1.6500000357627869) {
                    classes[0] = 0; 
                    classes[1] = 29; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.650000095367432) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[1] <= 3.100000023841858) {
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
                if (features[0] <= 5.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 8; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[2] <= 5.049999952316284) {
                if (features[3] <= 1.800000011920929) {
                    classes[0] = 0; 
                    classes[1] = 10; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 25; 
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
    
    if (features[0] <= 5.450000047683716) {
        if (features[3] <= 0.800000011920929) {
            classes[0] = 45; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[0] <= 4.950000047683716) {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            } else {
                classes[0] = 0; 
                classes[1] = 4; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[2] <= 4.75) {
            if (features[2] <= 2.600000023841858) {
                classes[0] = 2; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 21; 
                classes[2] = 0; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 4.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 3; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 6.5) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 6; 
                    } else {
                        if (features[0] <= 6.949999809265137) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 34; 
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
    
    if (features[2] <= 2.449999988079071) {
        classes[0] = 42; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000357627869) {
            if (features[0] <= 7.049999952316284) {
                if (features[1] <= 2.25) {
                    if (features[0] <= 5.5) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[0] <= 6.049999952316284) {
                        classes[0] = 0; 
                        classes[1] = 24; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 2.850000023841858) {
                            if (features[2] <= 5.0) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 8; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[0] <= 6.049999952316284) {
                if (features[1] <= 3.100000023841858) {
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

int predict_8(float features[]) {
    int classes[3];
    
    if (features[3] <= 0.800000011920929) {
        classes[0] = 36; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            classes[0] = 0; 
            classes[1] = 37; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 5.349999904632568) {
                    if (features[3] <= 1.550000011920929) {
                        if (features[1] <= 2.649999976158142) {
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
                        classes[1] = 3; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            } else {
                if (features[2] <= 4.8500001430511475) {
                    if (features[0] <= 5.950000047683716) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 4; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 34; 
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
    
    if (features[3] <= 0.75) {
        classes[0] = 39; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.6500000357627869) {
            if (features[2] <= 4.950000047683716) {
                classes[0] = 0; 
                classes[1] = 39; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.550000011920929) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 3; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 1; 
                    classes[2] = 0; 
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 38; 
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

