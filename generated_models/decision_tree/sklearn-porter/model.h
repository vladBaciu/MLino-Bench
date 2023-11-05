#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict(float features[80]) {

    int classes[6];
        
    if (features[52] <= -1.1448994874954224) {
        classes[0] = 0; 
        classes[1] = 0; 
        classes[2] = 0; 
        classes[3] = 0; 
        classes[4] = 0; 
        classes[5] = 1407; 
    } else {
        if (features[3] <= -0.2530105635523796) {
            if (features[41] <= -0.25651438534259796) {
                if (features[50] <= -0.3319179117679596) {
                    if (features[42] <= 0.4937492311000824) {
                        if (features[54] <= -0.398377925157547) {
                            if (features[52] <= 0.5735836029052734) {
                                if (features[53] <= -0.4250881224870682) {
                                    if (features[54] <= -0.6117524206638336) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 281; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[51] <= -0.6018036305904388) {
                                            if (features[41] <= -0.924891322851181) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 5; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 14; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            }
                                        } else {
                                            if (features[2] <= -2.0562678575515747) {
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
                                                classes[4] = 77; 
                                                classes[5] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[53] <= -0.3345671147108078) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 8; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[52] <= 0.46060997247695923) {
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
                                            classes[4] = 31; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[69] <= -0.6625882983207703) {
                                    if (features[41] <= -0.5895079970359802) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 4; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[2] <= -0.4710530638694763) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 2; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[19] <= -0.8458811342716217) {
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
                                                classes[4] = 22; 
                                                classes[5] = 0; 
                                            }
                                        }
                                    }
                                } else {
                                    if (features[41] <= -0.3441322296857834) {
                                        if (features[35] <= 1.6062871813774109) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 26; 
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
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 2; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        } else {
                            if (features[54] <= -0.3503991812467575) {
                                if (features[54] <= -0.3523709326982498) {
                                    if (features[24] <= -1.5195624232292175) {
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
                                        classes[4] = 34; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 1; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 640; 
                                classes[5] = 0; 
                            }
                        }
                    } else {
                        if (features[51] <= 0.5961973071098328) {
                            if (features[23] <= -0.8535377681255341) {
                                if (features[77] <= -1.5880536437034607) {
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
                                    classes[3] = 22; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
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
                            classes[1] = 0; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 31; 
                            classes[5] = 0; 
                        }
                    }
                } else {
                    if (features[42] <= -0.24073535203933716) {
                        if (features[35] <= 0.542965829372406) {
                            if (features[1] <= 0.5860861837863922) {
                                if (features[43] <= -0.40149450302124023) {
                                    if (features[37] <= 0.313579561188817) {
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
                                        classes[3] = 4; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[55] <= 0.35368990572169423) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 16; 
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
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 4; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        } else {
                            if (features[30] <= -0.6868606507778168) {
                                if (features[40] <= 0.447173610329628) {
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
                                    classes[4] = 3; 
                                    classes[5] = 0; 
                                }
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 18; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            }
                        }
                    } else {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 0; 
                        classes[3] = 0; 
                        classes[4] = 36; 
                        classes[5] = 0; 
                    }
                }
            } else {
                if (features[57] <= -0.6165238320827484) {
                    if (features[42] <= -0.08920922875404358) {
                        if (features[54] <= -0.8090329170227051) {
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
                            classes[4] = 43; 
                            classes[5] = 0; 
                        }
                    } else {
                        if (features[15] <= -0.8823129534721375) {
                            if (features[28] <= -1.236903190612793) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 3; 
                                classes[5] = 0; 
                            } else {
                                if (features[14] <= 0.8532730340957642) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 31; 
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
                            if (features[3] <= -0.7846574783325195) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 15; 
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
                    if (features[49] <= 0.5237812399864197) {
                        if (features[33] <= -2.0619254112243652) {
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
                            classes[3] = 695; 
                            classes[4] = 0; 
                            classes[5] = 0; 
                        }
                    } else {
                        if (features[51] <= -0.730522871017456) {
                            if (features[36] <= -0.9414587616920471) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 3; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 22; 
                                classes[5] = 0; 
                            }
                        } else {
                            if (features[50] <= 0.12040220573544502) {
                                if (features[51] <= -0.10973525419831276) {
                                    if (features[49] <= 0.5616772770881653) {
                                        if (features[79] <= 0.881563812494278) {
                                            if (features[50] <= 0.08417623862624168) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 2; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 23; 
                                                classes[5] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 15; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[40] <= 0.6089861690998077) {
                                            if (features[65] <= 0.1336098462343216) {
                                                if (features[56] <= 0.7009038925170898) {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 15; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                } else {
                                                    if (features[51] <= -0.38544516265392303) {
                                                        classes[0] = 0; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 2; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    } else {
                                                        classes[0] = 0; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 6; 
                                                        classes[5] = 0; 
                                                    }
                                                }
                                            } else {
                                                if (features[52] <= 0.626341700553894) {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 149; 
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
                                            if (features[66] <= 1.6055975556373596) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 3; 
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
                                    if (features[52] <= 0.5999184548854828) {
                                        if (features[38] <= -1.0261239409446716) {
                                            if (features[57] <= -0.6097049415111542) {
                                                if (features[37] <= 1.3146119117736816) {
                                                    if (features[69] <= 0.4512985795736313) {
                                                        classes[0] = 0; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 15; 
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
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 1; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                }
                                            } else {
                                                if (features[12] <= 0.6452713310718536) {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 0; 
                                                    classes[4] = 2; 
                                                    classes[5] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 17; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                }
                                            }
                                        } else {
                                            if (features[28] <= -1.1484031677246094) {
                                                if (features[52] <= 0.5806469917297363) {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 0; 
                                                    classes[4] = 5; 
                                                    classes[5] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 5; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                }
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 58; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            }
                                        }
                                    } else {
                                        if (features[61] <= -0.13611166924238205) {
                                            if (features[24] <= 0.6300748586654663) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 44; 
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
                                            if (features[9] <= -0.8040772080421448) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 10; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 3; 
                                                classes[5] = 0; 
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (features[42] <= -0.5195559859275818) {
                                    if (features[70] <= 1.764320194721222) {
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
                                        classes[3] = 3; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 162; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        }
                    }
                }
            }
        } else {
            if (features[9] <= 1.4052988290786743) {
                if (features[74] <= 0.41294410824775696) {
                    if (features[37] <= -0.4429378807544708) {
                        if (features[39] <= 0.6005273163318634) {
                            if (features[53] <= -0.6974642872810364) {
                                if (features[6] <= 1.5865219235420227) {
                                    if (features[20] <= 0.824876993894577) {
                                        if (features[6] <= 0.9454285502433777) {
                                            classes[0] = 0; 
                                            classes[1] = 6; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[28] <= 1.1725193858146667) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 5; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                if (features[35] <= -0.5410102307796478) {
                                                    classes[0] = 0; 
                                                    classes[1] = 1; 
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
                                        if (features[76] <= 0.6386998295783997) {
                                            if (features[45] <= -0.44496387243270874) {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 0; 
                                                classes[1] = 64; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            }
                                        } else {
                                            classes[0] = 2; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 5; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            } else {
                                if (features[22] <= 1.3552134037017822) {
                                    if (features[43] <= -0.2466316893696785) {
                                        if (features[57] <= -0.5783773362636566) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 5; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[71] <= -0.9734428226947784) {
                                            classes[0] = 0; 
                                            classes[1] = 2; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[39] <= 0.564351499080658) {
                                                if (features[11] <= 3.0724653005599976) {
                                                    if (features[78] <= 1.3201751708984375) {
                                                        classes[0] = 0; 
                                                        classes[1] = 0; 
                                                        classes[2] = 83; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    } else {
                                                        if (features[35] <= -1.2225584089756012) {
                                                            classes[0] = 1; 
                                                            classes[1] = 0; 
                                                            classes[2] = 0; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 0; 
                                                            classes[2] = 1; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 0; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                }
                                            } else {
                                                if (features[10] <= 0.4356780368834734) {
                                                    classes[0] = 0; 
                                                    classes[1] = 0; 
                                                    classes[2] = 1; 
                                                    classes[3] = 0; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                } else {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
                                                    classes[2] = 0; 
                                                    classes[3] = 0; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (features[9] <= 1.2437182664871216) {
                                        classes[0] = 8; 
                                        classes[1] = 0; 
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
                            }
                        } else {
                            if (features[70] <= -0.033014530315995216) {
                                if (features[38] <= -1.056739330291748) {
                                    if (features[68] <= -0.6419456005096436) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 7; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[30] <= 2.3864760398864746) {
                                        if (features[37] <= -1.10626620054245) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[14] <= -3.7575135231018066) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 1; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 112; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
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
                                if (features[41] <= -0.6315991282463074) {
                                    classes[0] = 0; 
                                    classes[1] = 11; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 3; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        }
                    } else {
                        if (features[71] <= -0.562141627073288) {
                            if (features[37] <= -0.03474998660385609) {
                                if (features[79] <= 1.166591763496399) {
                                    classes[0] = 0; 
                                    classes[1] = 21; 
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
                            } else {
                                if (features[17] <= 0.7850083410739899) {
                                    classes[0] = 8; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 2; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[16] <= 0.8771871328353882) {
                                if (features[65] <= -0.7626462876796722) {
                                    if (features[57] <= -0.26993460208177567) {
                                        if (features[7] <= 0.6542237102985382) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
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
                                        classes[1] = 4; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[59] <= 1.0509111881256104) {
                                        if (features[0] <= 2.3271806240081787) {
                                            if (features[69] <= -0.38246285915374756) {
                                                if (features[79] <= 0.02008126676082611) {
                                                    classes[0] = 0; 
                                                    classes[1] = 2; 
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
                                                if (features[3] <= 1.0564917922019958) {
                                                    if (features[20] <= 1.6665027141571045) {
                                                        classes[0] = 828; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    } else {
                                                        if (features[20] <= 1.670247495174408) {
                                                            classes[0] = 0; 
                                                            classes[1] = 1; 
                                                            classes[2] = 0; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        } else {
                                                            classes[0] = 36; 
                                                            classes[1] = 0; 
                                                            classes[2] = 0; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        }
                                                    }
                                                } else {
                                                    if (features[19] <= 1.0347667336463928) {
                                                        classes[0] = 0; 
                                                        classes[1] = 2; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    } else {
                                                        classes[0] = 16; 
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
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        if (features[55] <= 0.3299262225627899) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 2; 
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
                            } else {
                                if (features[53] <= -0.8246240317821503) {
                                    classes[0] = 0; 
                                    classes[1] = 14; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[22] <= 0.9893795847892761) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 9; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[6] <= 1.1209684014320374) {
                                            if (features[38] <= 0.9089601337909698) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 2; 
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
                                        } else {
                                            if (features[12] <= -1.9694443345069885) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 1; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            } else {
                                                classes[0] = 32; 
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
                    }
                } else {
                    if (features[52] <= 0.5355279743671417) {
                        if (features[57] <= -0.5573234260082245) {
                            if (features[39] <= -0.1198107935488224) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 18; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[74] <= 1.4888494908809662) {
                                    classes[0] = 7; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 2; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[71] <= 0.18643233180046082) {
                                if (features[9] <= 0.14956779032945633) {
                                    if (features[75] <= -0.8308651745319366) {
                                        if (features[59] <= 0.16828106343746185) {
                                            classes[0] = 0; 
                                            classes[1] = 5; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[69] <= -1.097521811723709) {
                                                classes[0] = 0; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 2; 
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
                                    } else {
                                        classes[0] = 6; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[37] <= -1.538374125957489) {
                                        if (features[38] <= -0.10972914099693298) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 5; 
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
                                    } else {
                                        if (features[38] <= 1.4642212390899658) {
                                            if (features[23] <= 1.6610061526298523) {
                                                if (features[26] <= -0.9672228097915649) {
                                                    if (features[73] <= -0.6880894005298615) {
                                                        classes[0] = 0; 
                                                        classes[1] = 22; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    } else {
                                                        classes[0] = 4; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
                                                        classes[5] = 0; 
                                                    }
                                                } else {
                                                    if (features[32] <= 2.183160424232483) {
                                                        if (features[59] <= -0.324516624212265) {
                                                            if (features[25] <= -0.7306794822216034) {
                                                                classes[0] = 0; 
                                                                classes[1] = 3; 
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
                                                        } else {
                                                            if (features[14] <= 0.24800537526607513) {
                                                                if (features[22] <= 0.5308520793914795) {
                                                                    if (features[72] <= -0.011857487261295319) {
                                                                        classes[0] = 1; 
                                                                        classes[1] = 0; 
                                                                        classes[2] = 0; 
                                                                        classes[3] = 0; 
                                                                        classes[4] = 0; 
                                                                        classes[5] = 0; 
                                                                    } else {
                                                                        if (features[55] <= 1.5390410423278809) {
                                                                            classes[0] = 0; 
                                                                            classes[1] = 53; 
                                                                            classes[2] = 0; 
                                                                            classes[3] = 0; 
                                                                            classes[4] = 0; 
                                                                            classes[5] = 0; 
                                                                        } else {
                                                                            if (features[13] <= -1.1614781618118286) {
                                                                                classes[0] = 0; 
                                                                                classes[1] = 2; 
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
                                                                    classes[1] = 696; 
                                                                    classes[2] = 0; 
                                                                    classes[3] = 0; 
                                                                    classes[4] = 0; 
                                                                    classes[5] = 0; 
                                                                }
                                                            } else {
                                                                if (features[45] <= 0.2020397111773491) {
                                                                    classes[0] = 0; 
                                                                    classes[1] = 6; 
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
                                                        if (features[26] <= 0.05871865153312683) {
                                                            classes[0] = 0; 
                                                            classes[1] = 0; 
                                                            classes[2] = 1; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 2; 
                                                            classes[2] = 0; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        }
                                                    }
                                                }
                                            } else {
                                                classes[0] = 1; 
                                                classes[1] = 0; 
                                                classes[2] = 0; 
                                                classes[3] = 0; 
                                                classes[4] = 0; 
                                                classes[5] = 0; 
                                            }
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 1; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                }
                            } else {
                                if (features[37] <= -0.45470479130744934) {
                                    if (features[55] <= -0.1331251636147499) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 1; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 23; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[41] <= -0.5924005508422852) {
                                        if (features[3] <= 0.8310196101665497) {
                                            classes[0] = 22; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            classes[0] = 0; 
                                            classes[1] = 3; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 9; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[69] <= -0.372067466378212) {
                            if (features[53] <= -0.5295796990394592) {
                                if (features[54] <= -0.18019048124551773) {
                                    classes[0] = 0; 
                                    classes[1] = 26; 
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
                            } else {
                                if (features[15] <= 0.6006066203117371) {
                                    classes[0] = 6; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 4; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[37] <= -0.6284270584583282) {
                                classes[0] = 0; 
                                classes[1] = 0; 
                                classes[2] = 4; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[33] <= -2.0462145805358887) {
                                    classes[0] = 0; 
                                    classes[1] = 1; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 63; 
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
            } else {
                if (features[74] <= 0.9026598036289215) {
                    if (features[22] <= 1.1855065822601318) {
                        if (features[6] <= 1.353245735168457) {
                            if (features[53] <= -0.8434746265411377) {
                                if (features[58] <= -0.5500651597976685) {
                                    classes[0] = 0; 
                                    classes[1] = 21; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    if (features[20] <= 1.4135280847549438) {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 3; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[44] <= 0.2583625912666321) {
                                            classes[0] = 1; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
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
                            } else {
                                if (features[37] <= -0.16017472743988037) {
                                    if (features[67] <= 0.4565398842096329) {
                                        if (features[75] <= -0.9900213479995728) {
                                            classes[0] = 0; 
                                            classes[1] = 1; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        } else {
                                            if (features[70] <= 0.6378104388713837) {
                                                if (features[28] <= -1.2358892560005188) {
                                                    classes[0] = 1; 
                                                    classes[1] = 0; 
                                                    classes[2] = 0; 
                                                    classes[3] = 0; 
                                                    classes[4] = 0; 
                                                    classes[5] = 0; 
                                                } else {
                                                    if (features[73] <= 2.047876238822937) {
                                                        if (features[79] <= -1.4326292276382446) {
                                                            if (features[62] <= 0.07546734809875488) {
                                                                classes[0] = 0; 
                                                                classes[1] = 0; 
                                                                classes[2] = 1; 
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
                                                        } else {
                                                            classes[0] = 0; 
                                                            classes[1] = 0; 
                                                            classes[2] = 132; 
                                                            classes[3] = 0; 
                                                            classes[4] = 0; 
                                                            classes[5] = 0; 
                                                        }
                                                    } else {
                                                        classes[0] = 1; 
                                                        classes[1] = 0; 
                                                        classes[2] = 0; 
                                                        classes[3] = 0; 
                                                        classes[4] = 0; 
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
                                        if (features[69] <= 0.7987248003482819) {
                                            if (features[60] <= -0.17419714480638504) {
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
                                        } else {
                                            classes[0] = 4; 
                                            classes[1] = 0; 
                                            classes[2] = 0; 
                                            classes[3] = 0; 
                                            classes[4] = 0; 
                                            classes[5] = 0; 
                                        }
                                    }
                                } else {
                                    if (features[50] <= -0.36517754197120667) {
                                        classes[0] = 14; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[70] <= 0.15595483779907227) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 3; 
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
                            }
                        } else {
                            if (features[41] <= -1.0781124234199524) {
                                classes[0] = 0; 
                                classes[1] = 1; 
                                classes[2] = 0; 
                                classes[3] = 0; 
                                classes[4] = 0; 
                                classes[5] = 0; 
                            } else {
                                if (features[47] <= -0.34530965983867645) {
                                    if (features[1] <= -0.626342236995697) {
                                        classes[0] = 1; 
                                        classes[1] = 0; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 10; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                } else {
                                    if (features[79] <= -1.4062732458114624) {
                                        if (features[40] <= 0.5734636187553406) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 11; 
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
                                    } else {
                                        classes[0] = 0; 
                                        classes[1] = 0; 
                                        classes[2] = 612; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    }
                                }
                            }
                        }
                    } else {
                        if (features[50] <= -0.7334600985050201) {
                            if (features[65] <= 0.1956670731306076) {
                                if (features[47] <= 0.7949998378753662) {
                                    classes[0] = 0; 
                                    classes[1] = 20; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
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
                                if (features[74] <= 0.22591454535722733) {
                                    classes[0] = 4; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 1; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            }
                        } else {
                            if (features[37] <= -0.3219674974679947) {
                                if (features[67] <= 0.3403523415327072) {
                                    if (features[15] <= 0.8587400317192078) {
                                        classes[0] = 0; 
                                        classes[1] = 2; 
                                        classes[2] = 0; 
                                        classes[3] = 0; 
                                        classes[4] = 0; 
                                        classes[5] = 0; 
                                    } else {
                                        if (features[12] <= -1.0597578883171082) {
                                            classes[0] = 0; 
                                            classes[1] = 0; 
                                            classes[2] = 40; 
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
                                } else {
                                    classes[0] = 5; 
                                    classes[1] = 0; 
                                    classes[2] = 0; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                }
                            } else {
                                if (features[55] <= -1.5977954864501953) {
                                    classes[0] = 0; 
                                    classes[1] = 0; 
                                    classes[2] = 2; 
                                    classes[3] = 0; 
                                    classes[4] = 0; 
                                    classes[5] = 0; 
                                } else {
                                    classes[0] = 17; 
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
                    if (features[24] <= 1.3799017667770386) {
                        if (features[73] <= -0.7755891680717468) {
                            classes[0] = 0; 
                            classes[1] = 37; 
                            classes[2] = 0; 
                            classes[3] = 0; 
                            classes[4] = 0; 
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
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 5; 
                        classes[3] = 0; 
                        classes[4] = 0; 
                        classes[5] = 0; 
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

