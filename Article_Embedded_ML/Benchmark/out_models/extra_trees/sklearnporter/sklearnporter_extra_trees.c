#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict_0(float features[]) {
    int classes[3];
    
    if (features[1] <= 2.9762414784553357) {
        if (features[3] <= 0.46361955033489904) {
            classes[0] = 2; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 5.2642057791184795) {
                if (features[2] <= 4.812197740692534) {
                    if (features[0] <= 5.534586664678685) {
                        if (features[0] <= 5.487324405235205) {
                            if (features[0] <= 5.0652411885332125) {
                                if (features[2] <= 3.9574247494142836) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 5; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[3] <= 1.7239588253466522) {
                            classes[0] = 0; 
                            classes[1] = 22; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    }
                } else {
                    if (features[1] <= 2.6996311307693186) {
                        if (features[2] <= 4.982208162602003) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 3; 
                        }
                    } else {
                        if (features[1] <= 2.7286744645346945) {
                            if (features[0] <= 5.895546222382945) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            } else {
                                if (features[3] <= 1.7485372398383519) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
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
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 10; 
            }
        }
    } else {
        if (features[0] <= 6.036336895338291) {
            if (features[3] <= 0.585192895795289) {
                classes[0] = 47; 
                classes[1] = 0; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 2.036083860108473) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    if (features[2] <= 4.261333540157104) {
                        classes[0] = 0; 
                        classes[1] = 3; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.542368663931512) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 4.928098519008505) {
                                if (features[3] <= 1.7781560595865695) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 5.913030597905878) {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
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
                                classes[2] = 1; 
                            }
                        }
                    }
                }
            }
        } else {
            if (features[3] <= 1.9805341849111775) {
                if (features[3] <= 1.525563147688972) {
                    classes[0] = 0; 
                    classes[1] = 7; 
                    classes[2] = 0; 
                } else {
                    if (features[0] <= 7.082294567719508) {
                        if (features[1] <= 3.2747089614660334) {
                            if (features[3] <= 1.7437449295325864) {
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
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 22; 
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
    
    if (features[3] <= 1.4773350795455689) {
        if (features[2] <= 3.9256819870645314) {
            if (features[1] <= 2.564757110531145) {
                if (features[3] <= 0.44472371636698127) {
                    classes[0] = 1; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 7; 
                    classes[2] = 0; 
                }
            } else {
                if (features[2] <= 3.1585043223544784) {
                    classes[0] = 49; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[2] <= 5.272805439659255) {
                classes[0] = 0; 
                classes[1] = 24; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        }
    } else {
        if (features[3] <= 2.4504814510934434) {
            if (features[2] <= 4.876559418175109) {
                if (features[2] <= 4.676528173822991) {
                    if (features[0] <= 5.169921578895287) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 8; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[2] <= 4.720960645671691) {
                        classes[0] = 0; 
                        classes[1] = 2; 
                        classes[2] = 0; 
                    } else {
                        if (features[1] <= 3.0282404146563864) {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        }
                    }
                }
            } else {
                if (features[0] <= 6.002508519861864) {
                    if (features[3] <= 1.8519613178180094) {
                        if (features[3] <= 1.627624152305182) {
                            if (features[2] <= 5.090681809314601) {
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
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    }
                } else {
                    if (features[0] <= 6.353905319530278) {
                        if (features[2] <= 5.595854703346915) {
                            if (features[1] <= 2.560884590407605) {
                                if (features[2] <= 4.961990289346293) {
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
                                classes[2] = 4; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    } else {
                        if (features[3] <= 2.1677732293602383) {
                            if (features[0] <= 7.446874344743264) {
                                if (features[0] <= 6.64340134116048) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 6; 
                                } else {
                                    if (features[3] <= 2.0156945640649284) {
                                        if (features[3] <= 1.5381736561432227) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        } else {
                                            if (features[0] <= 6.7725668073006124) {
                                                if (features[3] <= 1.780107757458166) {
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
                                                classes[2] = 4; 
                                            }
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
                                classes[2] = 3; 
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 11; 
                        }
                    }
                }
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 3; 
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
    
    if (features[0] <= 5.434902965729844) {
        if (features[2] <= 1.9421591963349651) {
            classes[0] = 45; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.1798950291685601) {
                classes[0] = 0; 
                classes[1] = 4; 
                classes[2] = 0; 
            } else {
                if (features[0] <= 4.904656300090559) {
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
        if (features[2] <= 4.135717732401391) {
            if (features[1] <= 4.113717222953472) {
                if (features[3] <= 1.016078445035265) {
                    if (features[2] <= 3.3958917737392698) {
                        classes[0] = 3; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 4; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 10; 
                    classes[2] = 0; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        } else {
            if (features[2] <= 4.654678704319231) {
                classes[0] = 0; 
                classes[1] = 19; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 1.9661518551488226) {
                    if (features[1] <= 2.2766371651590793) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    } else {
                        if (features[1] <= 3.180401602009773) {
                            if (features[0] <= 6.427295550859293) {
                                if (features[0] <= 6.2624171079248585) {
                                    if (features[2] <= 5.363552132602107) {
                                        if (features[3] <= 1.8518723123299228) {
                                            if (features[3] <= 1.5512005494324228) {
                                                classes[0] = 0; 
                                                classes[1] = 2; 
                                                classes[2] = 0; 
                                            } else {
                                                if (features[1] <= 2.7874081392083823) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                    classes[2] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 4; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                } else {
                                    if (features[3] <= 1.7699861929340992) {
                                        if (features[2] <= 4.97276752583912) {
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
                                        classes[2] = 5; 
                                    }
                                }
                            } else {
                                if (features[2] <= 5.371714765853104) {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 5; 
                                }
                            }
                        } else {
                            if (features[0] <= 6.901424294343608) {
                                classes[0] = 0; 
                                classes[1] = 2; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= 4.7450206079194475) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 29; 
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
    
    if (features[0] <= 5.176208829800445) {
        if (features[3] <= 0.4876446897264638) {
            classes[0] = 34; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[1] <= 2.5655671174477632) {
                if (features[3] <= 1.5517024900568135) {
                    classes[0] = 0; 
                    classes[1] = 4; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                classes[0] = 2; 
                classes[1] = 0; 
                classes[2] = 0; 
            }
        }
    } else {
        if (features[3] <= 1.3483198614716032) {
            if (features[1] <= 2.8657271988933437) {
                classes[0] = 0; 
                classes[1] = 17; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 3.9972839074196687) {
                    if (features[1] <= 3.4480216640737007) {
                        if (features[1] <= 3.1275838025508373) {
                            classes[0] = 0; 
                            classes[1] = 7; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 3; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        classes[0] = 7; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    }
                } else {
                    classes[0] = 4; 
                    classes[1] = 0; 
                    classes[2] = 0; 
                }
            }
        } else {
            if (features[3] <= 1.5681905285905562) {
                if (features[1] <= 2.5707678880406393) {
                    if (features[0] <= 6.29974539775954) {
                        if (features[2] <= 4.719788991017169) {
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
                        classes[1] = 1; 
                        classes[2] = 0; 
                    }
                } else {
                    if (features[2] <= 4.13866926922157) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[2] <= 4.862291408863889) {
                            classes[0] = 0; 
                            classes[1] = 13; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 5.261545820071171) {
                                if (features[2] <= 4.94405419734361) {
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
                }
            } else {
                if (features[0] <= 5.851732360237276) {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 5; 
                } else {
                    if (features[0] <= 6.098221452067709) {
                        if (features[3] <= 1.7498728340712904) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[0] <= 5.967272658084022) {
                                if (features[2] <= 4.819765550335995) {
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
                        if (features[3] <= 2.1372880820518203) {
                            if (features[3] <= 1.6614483825861854) {
                                if (features[1] <= 3.1774468971457783) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[2] <= 6.138265772505839) {
                                    if (features[2] <= 5.197110675562427) {
                                        if (features[2] <= 4.971128264535451) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
                                        } else {
                                            if (features[2] <= 5.049209364814839) {
                                                if (features[3] <= 1.8003674971955543) {
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
                                        classes[1] = 0; 
                                        classes[2] = 13; 
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
                            classes[2] = 16; 
                        }
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

int predict_4(float features[]) {
    int classes[3];
    
    if (features[0] <= 6.909450328983706) {
        if (features[3] <= 0.8922012454531775) {
            classes[0] = 50; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.2939305330132742) {
                classes[0] = 0; 
                classes[1] = 15; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 4.701099061528946) {
                    if (features[3] <= 1.6847561894822412) {
                        classes[0] = 0; 
                        classes[1] = 28; 
                        classes[2] = 0; 
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 1; 
                    }
                } else {
                    if (features[3] <= 1.950224374169795) {
                        if (features[2] <= 5.648694219928558) {
                            if (features[3] <= 1.7387363041465806) {
                                if (features[3] <= 1.5489603806830334) {
                                    if (features[1] <= 2.827335327163739) {
                                        if (features[1] <= 2.643214272502531) {
                                            if (features[0] <= 6.203980872689601) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 2; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                                classes[2] = 0; 
                                            }
                                        } else {
                                            if (features[0] <= 6.774165792378674) {
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
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[0] <= 6.126048006788569) {
                                    if (features[1] <= 2.8287874083634406) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 2; 
                                    } else {
                                        if (features[1] <= 3.1169646254753873) {
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
                                    classes[2] = 7; 
                                }
                            }
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 21; 
                    }
                }
            }
        }
    } else {
        if (features[1] <= 3.590685913492563) {
            if (features[2] <= 5.148799367708275) {
                classes[0] = 0; 
                classes[1] = 1; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 9; 
            }
        } else {
            classes[0] = 0; 
            classes[1] = 0; 
            classes[2] = 3; 
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
    
    if (features[2] <= 3.2221599311835476) {
        if (features[3] <= 1.08375023873698) {
            classes[0] = 50; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
            classes[2] = 0; 
        }
    } else {
        if (features[0] <= 6.367416463078659) {
            if (features[2] <= 5.5458884348269955) {
                if (features[2] <= 5.162444386822842) {
                    if (features[3] <= 2.3711781955114315) {
                        if (features[0] <= 6.1191262649185285) {
                            if (features[2] <= 4.925025543933326) {
                                if (features[3] <= 1.7815602690826915) {
                                    if (features[0] <= 5.91038366618228) {
                                        if (features[1] <= 2.782207295197159) {
                                            if (features[0] <= 5.079413867139262) {
                                                if (features[2] <= 4.249241908616954) {
                                                    classes[0] = 0; 
                                                    classes[1] = 3; 
                                                    classes[2] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 1; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 12; 
                                                classes[2] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 9; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 7; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    if (features[1] <= 3.1885274109032653) {
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
                                if (features[1] <= 2.5545153627994246) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                } else {
                                    if (features[0] <= 5.947517959508504) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 1.8125463705741982) {
                                if (features[3] <= 1.7954770738703558) {
                                    if (features[3] <= 1.4672603058184222) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        if (features[1] <= 2.8402847470859554) {
                                            if (features[1] <= 2.2694084752248576) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                                classes[2] = 0; 
                                            } else {
                                                if (features[1] <= 2.6834444767645187) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
                                                    classes[2] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 1; 
                                                }
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
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
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 4; 
            }
        } else {
            if (features[2] <= 5.219200646464939) {
                if (features[3] <= 2.145512661359046) {
                    if (features[3] <= 1.5068366818894137) {
                        classes[0] = 0; 
                        classes[1] = 10; 
                        classes[2] = 0; 
                    } else {
                        if (features[3] <= 1.8963987589157005) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 2; 
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
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

int predict_6(float features[]) {
    int classes[3];
    
    if (features[0] <= 6.307721745311595) {
        if (features[3] <= 0.47457534068969154) {
            classes[0] = 48; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[3] <= 1.7792052520807857) {
                if (features[2] <= 5.224760219287175) {
                    if (features[0] <= 5.766061987987969) {
                        if (features[1] <= 3.2807873598210455) {
                            if (features[3] <= 1.490920414172839) {
                                classes[0] = 0; 
                                classes[1] = 19; 
                                classes[2] = 0; 
                            } else {
                                if (features[0] <= 5.582959263424469) {
                                    if (features[3] <= 1.667039775890943) {
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
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            classes[0] = 2; 
                            classes[1] = 0; 
                            classes[2] = 0; 
                        }
                    } else {
                        if (features[2] <= 4.68776651839576) {
                            classes[0] = 0; 
                            classes[1] = 12; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 4.705394845254558) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= 4.970690919317186) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[2] <= 5.077194317608644) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        if (features[3] <= 1.5764598544332646) {
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
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
            } else {
                if (features[0] <= 5.971198879078826) {
                    if (features[0] <= 5.863891560939949) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                    } else {
                        if (features[2] <= 5.021397035522492) {
                            classes[0] = 0; 
                            classes[1] = 1; 
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
                    classes[2] = 9; 
                }
            }
        }
    } else {
        if (features[2] <= 5.145973846506922) {
            if (features[3] <= 1.6344038440540452) {
                classes[0] = 0; 
                classes[1] = 10; 
                classes[2] = 0; 
            } else {
                if (features[1] <= 3.191992060976058) {
                    if (features[1] <= 3.023199056513368) {
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
            classes[1] = 0; 
            classes[2] = 29; 
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
    
    if (features[1] <= 3.990467018933802) {
        if (features[0] <= 4.693100396930271) {
            classes[0] = 9; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 5.213396162499536) {
                if (features[0] <= 6.201073818338454) {
                    if (features[2] <= 2.3747042229604705) {
                        classes[0] = 37; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                    } else {
                        if (features[0] <= 4.923353540704657) {
                            if (features[3] <= 1.4761246125336498) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 1; 
                            }
                        } else {
                            if (features[3] <= 1.0750436216838903) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            } else {
                                if (features[3] <= 2.018160410599008) {
                                    if (features[3] <= 1.5401180557451637) {
                                        if (features[1] <= 2.7064744668443432) {
                                            if (features[1] <= 2.3019590760124657) {
                                                if (features[0] <= 6.10364942475334) {
                                                    if (features[2] <= 4.4928843730561825) {
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
                                                    classes[1] = 1; 
                                                    classes[2] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 9; 
                                                classes[2] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 15; 
                                            classes[2] = 0; 
                                        }
                                    } else {
                                        if (features[1] <= 3.372309194957414) {
                                            if (features[3] <= 1.777830744821344) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                                classes[2] = 0; 
                                            } else {
                                                if (features[1] <= 3.0444898338036466) {
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
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                }
                            }
                        }
                    }
                } else {
                    if (features[1] <= 2.383185325229161) {
                        classes[0] = 0; 
                        classes[1] = 1; 
                        classes[2] = 0; 
                    } else {
                        if (features[2] <= 4.975139091419265) {
                            if (features[3] <= 1.4969654934000995) {
                                classes[0] = 0; 
                                classes[1] = 6; 
                                classes[2] = 0; 
                            } else {
                                if (features[0] <= 6.384080639288117) {
                                    if (features[1] <= 3.0089142364300265) {
                                        if (features[1] <= 2.585030380739167) {
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
                                        classes[1] = 1; 
                                        classes[2] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 4; 
                                    classes[2] = 0; 
                                }
                            }
                        } else {
                            if (features[2] <= 5.067270647965769) {
                                if (features[3] <= 1.867641535596425) {
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
                                classes[2] = 5; 
                            }
                        }
                    }
                }
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 32; 
            }
        }
    } else {
        classes[0] = 4; 
        classes[1] = 0; 
        classes[2] = 0; 
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
    
    if (features[1] <= 2.9561711870829774) {
        if (features[3] <= 0.33565583330082926) {
            classes[0] = 2; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.026840972830148) {
                classes[0] = 0; 
                classes[1] = 16; 
                classes[2] = 0; 
            } else {
                if (features[3] <= 2.284105336540546) {
                    if (features[1] <= 2.47682407511036) {
                        if (features[2] <= 4.945847479547332) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            classes[0] = 0; 
                            classes[1] = 0; 
                            classes[2] = 1; 
                        }
                    } else {
                        if (features[2] <= 4.1276368585651255) {
                            classes[0] = 0; 
                            classes[1] = 2; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 5.086661610001075) {
                                if (features[1] <= 2.8167479856366655) {
                                    if (features[3] <= 1.8486988779228384) {
                                        if (features[2] <= 4.735624381415905) {
                                            if (features[1] <= 2.6172806017033268) {
                                                if (features[0] <= 5.26189455382304) {
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
                                                classes[1] = 4; 
                                                classes[2] = 0; 
                                            }
                                        } else {
                                            if (features[3] <= 1.7077075433550108) {
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
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 6; 
                                    classes[2] = 0; 
                                }
                            } else {
                                if (features[2] <= 5.770136576002761) {
                                    if (features[2] <= 5.200239962479212) {
                                        if (features[0] <= 6.0923490586189315) {
                                            if (features[3] <= 1.6999113395329768) {
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
                                            classes[2] = 1; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 5; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 2; 
                }
            }
        }
    } else {
        if (features[3] <= 0.6078321012811375) {
            classes[0] = 48; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 4.590604865013635) {
                classes[0] = 0; 
                classes[1] = 9; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 5.6257457661401) {
                    if (features[1] <= 3.384090427606526) {
                        if (features[1] <= 3.1533199968375665) {
                            if (features[2] <= 4.975615987729102) {
                                if (features[3] <= 1.6041017828877404) {
                                    classes[0] = 0; 
                                    classes[1] = 3; 
                                    classes[2] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                }
                            } else {
                                if (features[1] <= 3.0332642094269855) {
                                    if (features[0] <= 6.214849171722539) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    } else {
                                        if (features[2] <= 5.453674105905776) {
                                            if (features[2] <= 5.050678878212458) {
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
                                            classes[2] = 2; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                }
                            }
                        } else {
                            if (features[2] <= 4.823691850716458) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 2; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 2; 
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

int predict_9(float features[]) {
    int classes[3];
    
    if (features[2] <= 3.158498681655159) {
        if (features[2] <= 2.225410813105018) {
            classes[0] = 50; 
            classes[1] = 0; 
            classes[2] = 0; 
        } else {
            classes[0] = 0; 
            classes[1] = 1; 
            classes[2] = 0; 
        }
    } else {
        if (features[3] <= 1.0946341113162386) {
            classes[0] = 0; 
            classes[1] = 7; 
            classes[2] = 0; 
        } else {
            if (features[2] <= 3.865610676833214) {
                classes[0] = 0; 
                classes[1] = 2; 
                classes[2] = 0; 
            } else {
                if (features[2] <= 6.015069171839892) {
                    if (features[0] <= 6.651612127312771) {
                        if (features[3] <= 1.5662878567415641) {
                            if (features[1] <= 2.7586160444461814) {
                                if (features[2] <= 4.801563327516352) {
                                    classes[0] = 0; 
                                    classes[1] = 10; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[1] <= 2.540607007385403) {
                                        if (features[1] <= 2.329036569308752) {
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
                                        classes[2] = 1; 
                                    }
                                }
                            } else {
                                if (features[2] <= 4.699227657362697) {
                                    classes[0] = 0; 
                                    classes[1] = 17; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[0] <= 6.120946153797084) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                    }
                                }
                            }
                        } else {
                            if (features[3] <= 1.6758466189545662) {
                                classes[0] = 0; 
                                classes[1] = 3; 
                                classes[2] = 0; 
                            } else {
                                if (features[2] <= 5.442204984110876) {
                                    if (features[2] <= 4.986529018217185) {
                                        if (features[0] <= 6.039893825394125) {
                                            if (features[1] <= 3.071970765545553) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 3; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
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
                                        classes[2] = 11; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 8; 
                                }
                            }
                        }
                    } else {
                        if (features[2] <= 4.597986112747236) {
                            classes[0] = 0; 
                            classes[1] = 1; 
                            classes[2] = 0; 
                        } else {
                            if (features[2] <= 5.624394516590886) {
                                if (features[1] <= 2.9519080910500404) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                } else {
                                    if (features[3] <= 2.257371723346651) {
                                        if (features[3] <= 1.5068104427166005) {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                        } else {
                                            if (features[2] <= 5.042223518268309) {
                                                classes[0] = 0; 
                                                classes[1] = 1; 
                                                classes[2] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 2; 
                                            }
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                    }
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 8; 
                            }
                        }
                    }
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 9; 
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

int main(int argc, const char * argv[]) {
    float features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }
    printf("%d", predict(features));
    return 0;
}