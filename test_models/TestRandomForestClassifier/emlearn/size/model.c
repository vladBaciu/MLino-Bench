#include <stdlib.h>
#include <stdint.h>
#include <math.h>

    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode model_nodes[76] = {
  { 2, 2.599999964237213, 1, 2 },
  { -1, 0, -1, -1 },
  { 3, 1.75, 3, 8 },
  { 1, 2.25, 4, 7 },
  { 0, 5.5, 5, 6 },
  { -1, 1, -1, -1 },
  { -1, 2, -1, -1 },
  { 2, 5.049999952316284, 5, 6 },
  { 0, 6.049999952316284, 9, 6 },
  { 2, 4.8500001430511475, 5, 6 },
  { 2, 2.449999988079071, 1, 11 },
  { 2, 4.75, 12, 14 },
  { 0, 4.950000047683716, 13, 5 },
  { 3, 1.350000023841858, 5, 6 },
  { 0, 6.049999952316284, 15, 6 },
  { 0, 5.8500001430511475, 6, 5 },
  { 2, 2.599999964237213, 1, 17 },
  { 3, 1.6500000357627869, 18, 6 },
  { 0, 5.950000047683716, 5, 19 },
  { 1, 2.25, 6, 20 },
  { 1, 2.850000023841858, 21, 23 },
  { 2, 5.0, 5, 22 },
  { 0, 6.049999952316284, 5, 6 },
  { 2, 5.3500001430511475, 5, 6 },
  { 2, 2.449999988079071, 1, 25 },
  { 3, 1.75, 26, 6 },
  { 0, 7.049999952316284, 27, 6 },
  { 2, 4.950000047683716, 5, 28 },
  { 1, 2.899999976158142, 29, 5 },
  { 3, 1.550000011920929, 6, 5 },
  { 3, 0.7000000029802322, 1, 31 },
  { 2, 4.8500001430511475, 32, 34 },
  { 3, 1.649999976158142, 5, 33 },
  { 1, 3.100000023841858, 6, 5 },
  { 3, 1.75, 35, 6 },
  { 2, 5.349999904632568, 36, 6 },
  { 1, 2.350000023841858, 6, 5 },
  { 0, 5.450000047683716, 38, 39 },
  { 2, 2.600000023841858, 1, 5 },
  { 3, 1.75, 40, 6 },
  { 3, 1.3499999642372131, 41, 42 },
  { 1, 3.5999999046325684, 5, 1 },
  { 2, 5.349999904632568, 43, 6 },
  { 3, 1.550000011920929, 44, 5 },
  { 2, 4.950000047683716, 5, 6 },
  { 3, 0.800000011920929, 1, 46 },
  { 3, 1.75, 47, 6 },
  { 2, 4.950000047683716, 48, 50 },
  { 2, 4.450000047683716, 5, 49 },
  { 0, 5.150000095367432, 6, 5 },
  { 3, 1.550000011920929, 6, 5 },
  { 3, 0.800000011920929, 1, 52 },
  { 3, 1.75, 53, 57 },
  { 2, 5.049999952316284, 54, 56 },
  { 1, 2.549999952316284, 55, 5 },
  { 0, 4.950000047683716, 6, 5 },
  { 3, 1.550000011920929, 6, 5 },
  { 2, 4.900000095367432, 58, 6 },
  { 0, 5.950000047683716, 5, 6 },
  { 3, 0.800000011920929, 1, 60 },
  { 2, 4.75, 61, 63 },
  { 1, 2.549999952316284, 62, 5 },
  { 3, 1.5, 5, 6 },
  { 2, 4.950000047683716, 64, 6 },
  { 3, 1.649999976158142, 5, 6 },
  { 3, 0.800000011920929, 1, 66 },
  { 0, 6.25, 67, 72 },
  { 3, 1.6500000357627869, 68, 70 },
  { 3, 1.3499999642372131, 5, 69 },
  { 1, 2.75, 6, 5 },
  { 0, 5.8500001430511475, 6, 71 },
  { 1, 3.100000023841858, 6, 5 },
  { 2, 4.799999952316284, 5, 73 },
  { 0, 6.599999904632568, 6, 74 },
  { 3, 1.75, 75, 6 },
  { 2, 5.400000095367432, 5, 6 } 
};

int32_t model_tree_roots[10] = { 0, 10, 16, 24, 30, 37, 45, 51, 59, 65 };

EmlTrees model = {
        76,
        model_nodes,	  
        10,
        model_tree_roots,
    };

static inline int32_t model_predict_tree_0(const float *features, int32_t features_length) {
          if (features[2] < 2.599999964237213) {
              return 0;
          } else {
              if (features[3] < 1.75) {
                  if (features[1] < 2.25) {
                      if (features[0] < 5.5) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      if (features[2] < 5.049999952316284) {
                          return 1;
                      } else {
                          return 2;
                      }
                  }
              } else {
                  if (features[0] < 6.049999952316284) {
                      if (features[2] < 4.8500001430511475) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_1(const float *features, int32_t features_length) {
          if (features[2] < 2.449999988079071) {
              return 0;
          } else {
              if (features[2] < 4.75) {
                  if (features[0] < 4.950000047683716) {
                      if (features[3] < 1.350000023841858) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[0] < 6.049999952316284) {
                      if (features[0] < 5.8500001430511475) {
                          return 2;
                      } else {
                          return 1;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_2(const float *features, int32_t features_length) {
          if (features[2] < 2.599999964237213) {
              return 0;
          } else {
              if (features[3] < 1.6500000357627869) {
                  if (features[0] < 5.950000047683716) {
                      return 1;
                  } else {
                      if (features[1] < 2.25) {
                          return 2;
                      } else {
                          if (features[1] < 2.850000023841858) {
                              if (features[2] < 5.0) {
                                  return 1;
                              } else {
                                  if (features[0] < 6.049999952316284) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
                              }
                          } else {
                              if (features[2] < 5.3500001430511475) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          }
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_3(const float *features, int32_t features_length) {
          if (features[2] < 2.449999988079071) {
              return 0;
          } else {
              if (features[3] < 1.75) {
                  if (features[0] < 7.049999952316284) {
                      if (features[2] < 4.950000047683716) {
                          return 1;
                      } else {
                          if (features[1] < 2.899999976158142) {
                              if (features[3] < 1.550000011920929) {
                                  return 2;
                              } else {
                                  return 1;
                              }
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      return 2;
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_4(const float *features, int32_t features_length) {
          if (features[3] < 0.7000000029802322) {
              return 0;
          } else {
              if (features[2] < 4.8500001430511475) {
                  if (features[3] < 1.649999976158142) {
                      return 1;
                  } else {
                      if (features[1] < 3.100000023841858) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  if (features[3] < 1.75) {
                      if (features[2] < 5.349999904632568) {
                          if (features[1] < 2.350000023841858) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_5(const float *features, int32_t features_length) {
          if (features[0] < 5.450000047683716) {
              if (features[2] < 2.600000023841858) {
                  return 0;
              } else {
                  return 1;
              }
          } else {
              if (features[3] < 1.75) {
                  if (features[3] < 1.3499999642372131) {
                      if (features[1] < 3.5999999046325684) {
                          return 1;
                      } else {
                          return 0;
                      }
                  } else {
                      if (features[2] < 5.349999904632568) {
                          if (features[3] < 1.550000011920929) {
                              if (features[2] < 4.950000047683716) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              return 1;
                          }
                      } else {
                          return 2;
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_6(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.75) {
                  if (features[2] < 4.950000047683716) {
                      if (features[2] < 4.450000047683716) {
                          return 1;
                      } else {
                          if (features[0] < 5.150000095367432) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      if (features[3] < 1.550000011920929) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_7(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.75) {
                  if (features[2] < 5.049999952316284) {
                      if (features[1] < 2.549999952316284) {
                          if (features[0] < 4.950000047683716) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 1;
                      }
                  } else {
                      if (features[3] < 1.550000011920929) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  if (features[2] < 4.900000095367432) {
                      if (features[0] < 5.950000047683716) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_8(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[2] < 4.75) {
                  if (features[1] < 2.549999952316284) {
                      if (features[3] < 1.5) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[2] < 4.950000047683716) {
                      if (features[3] < 1.649999976158142) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_9(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[0] < 6.25) {
                  if (features[3] < 1.6500000357627869) {
                      if (features[3] < 1.3499999642372131) {
                          return 1;
                      } else {
                          if (features[1] < 2.75) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      if (features[0] < 5.8500001430511475) {
                          return 2;
                      } else {
                          if (features[1] < 3.100000023841858) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  }
              } else {
                  if (features[2] < 4.799999952316284) {
                      return 1;
                  } else {
                      if (features[0] < 6.599999904632568) {
                          return 2;
                      } else {
                          if (features[3] < 1.75) {
                              if (features[2] < 5.400000095367432) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              return 2;
                          }
                      }
                  }
              }
          }
        }
        

int32_t model_predict(const float *features, int32_t features_length) {

        int32_t votes[3] = {0,};
        int32_t _class = -1;

        _class = model_predict_tree_0(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_1(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_2(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_3(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_4(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_5(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_6(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_7(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_8(features, features_length); votes[_class] += 1;
    _class = model_predict_tree_9(features, features_length); votes[_class] += 1;
    
        int32_t most_voted_class = -1;
        int32_t most_voted_votes = 0;
        for (int32_t i=0; i<3; i++) {

            if (votes[i] > most_voted_votes) {
                most_voted_class = i;
                most_voted_votes = votes[i];
            }
        }
        return most_voted_class;
    }
    
int main(void) {
    float features[1];
    int result = model_predict(features, 1);
    return result;
}
