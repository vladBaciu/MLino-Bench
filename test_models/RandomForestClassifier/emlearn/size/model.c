#include <stdlib.h>
#include <stdint.h>
#include <math.h>

    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode model_nodes[93] = {
  { 3, 1.699999988079071, 1, 11 },
  { 1, 3.25, 2, 10 },
  { 3, 0.6500000059604645, 3, 4 },
  { -1, 0, -1, -1 },
  { 0, 7.099999904632568, 5, 8 },
  { 1, 2.25, 6, 9 },
  { 2, 4.5, 7, 8 },
  { -1, 1, -1, -1 },
  { -1, 2, -1, -1 },
  { 2, 5.349999904632568, 7, 8 },
  { 0, 5.900000095367432, 3, 7 },
  { 3, 1.8499999642372131, 12, 8 },
  { 0, 5.950000047683716, 13, 8 },
  { 2, 4.950000047683716, 7, 8 },
  { 2, 2.600000023841858, 3, 15 },
  { 2, 4.75, 16, 17 },
  { 3, 1.6500000357627869, 7, 8 },
  { 2, 5.1499998569488525, 18, 8 },
  { 0, 5.8500001430511475, 8, 19 },
  { 1, 3.100000023841858, 20, 7 },
  { 2, 5.049999952316284, 21, 7 },
  { 3, 1.75, 7, 8 },
  { 3, 0.800000011920929, 3, 23 },
  { 0, 6.1499998569488525, 24, 29 },
  { 2, 4.950000047683716, 25, 27 },
  { 3, 1.6500000357627869, 7, 26 },
  { 3, 1.75, 8, 7 },
  { 3, 1.699999988079071, 28, 8 },
  { 1, 2.649999976158142, 8, 7 },
  { 3, 1.649999976158142, 7, 8 },
  { 3, 0.75, 3, 31 },
  { 2, 4.950000047683716, 32, 35 },
  { 3, 1.6500000357627869, 7, 33 },
  { 0, 5.400000095367432, 8, 34 },
  { 1, 2.950000047683716, 8, 7 },
  { 3, 1.75, 36, 8 },
  { 1, 2.799999952316284, 8, 37 },
  { 0, 6.949999809265137, 7, 8 },
  { 3, 0.800000011920929, 3, 39 },
  { 3, 1.550000011920929, 40, 43 },
  { 1, 2.25, 41, 42 },
  { 3, 1.25, 7, 8 },
  { 2, 5.0, 7, 8 },
  { 2, 5.1499998569488525, 44, 8 },
  { 2, 4.950000047683716, 8, 45 },
  { 0, 6.5, 46, 7 },
  { 3, 1.75, 7, 8 },
  { 0, 5.3500001430511475, 48, 49 },
  { 2, 2.449999988079071, 3, 7 },
  { 2, 4.8500001430511475, 50, 55 },
  { 3, 0.7000000029802322, 3, 51 },
  { 1, 2.950000047683716, 7, 52 },
  { 0, 5.950000047683716, 7, 53 },
  { 0, 6.049999952316284, 54, 7 },
  { 3, 1.699999988079071, 7, 8 },
  { 2, 5.1499998569488525, 56, 8 },
  { 3, 1.75, 57, 8 },
  { 0, 6.150000095367432, 7, 58 },
  { 2, 5.049999952316284, 7, 8 },
  { 2, 2.449999988079071, 3, 60 },
  { 2, 4.8500001430511475, 61, 63 },
  { 3, 1.600000023841858, 7, 62 },
  { 0, 5.400000095367432, 8, 7 },
  { 3, 1.550000011920929, 64, 8 },
  { 2, 4.950000047683716, 7, 8 },
  { 3, 0.800000011920929, 3, 66 },
  { 3, 1.6500000357627869, 67, 70 },
  { 0, 7.099999904632568, 68, 8 },
  { 2, 4.950000047683716, 7, 69 },
  { 3, 1.550000011920929, 8, 7 },
  { 1, 2.950000047683716, 8, 71 },
  { 2, 5.099999904632568, 72, 8 },
  { 0, 5.950000047683716, 7, 73 },
  { 3, 1.75, 7, 8 },
  { 3, 0.75, 3, 75 },
  { 2, 4.75, 76, 77 },
  { 0, 5.049999952316284, 8, 7 },
  { 2, 5.049999952316284, 78, 80 },
  { 0, 6.349999904632568, 79, 7 },
  { 1, 3.100000023841858, 8, 7 },
  { 2, 5.1499998569488525, 81, 8 },
  { 3, 1.75, 82, 8 },
  { 3, 1.550000011920929, 8, 7 },
  { 0, 5.349999904632568, 84, 86 },
  { 3, 0.800000011920929, 3, 85 },
  { 2, 4.200000047683716, 7, 8 },
  { 3, 1.75, 87, 92 },
  { 2, 2.5, 3, 88 },
  { 1, 2.3000000715255737, 8, 89 },
  { 0, 6.049999952316284, 7, 90 },
  { 0, 6.1499998569488525, 91, 7 },
  { 1, 2.75, 8, 7 },
  { 2, 4.8500001430511475, 7, 8 } 
};

int32_t model_tree_roots[10] = { 0, 14, 22, 30, 38, 47, 59, 65, 74, 83 };

EmlTrees model = {
        93,
        model_nodes,	  
        10,
        model_tree_roots,
    };

static inline int32_t model_predict_tree_0(const float *features, int32_t features_length) {
          if (features[3] < 1.699999988079071) {
              if (features[1] < 3.25) {
                  if (features[3] < 0.6500000059604645) {
                      return 0;
                  } else {
                      if (features[0] < 7.099999904632568) {
                          if (features[1] < 2.25) {
                              if (features[2] < 4.5) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              if (features[2] < 5.349999904632568) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          }
                      } else {
                          return 2;
                      }
                  }
              } else {
                  if (features[0] < 5.900000095367432) {
                      return 0;
                  } else {
                      return 1;
                  }
              }
          } else {
              if (features[3] < 1.8499999642372131) {
                  if (features[0] < 5.950000047683716) {
                      if (features[2] < 4.950000047683716) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_1(const float *features, int32_t features_length) {
          if (features[2] < 2.600000023841858) {
              return 0;
          } else {
              if (features[2] < 4.75) {
                  if (features[3] < 1.6500000357627869) {
                      return 1;
                  } else {
                      return 2;
                  }
              } else {
                  if (features[2] < 5.1499998569488525) {
                      if (features[0] < 5.8500001430511475) {
                          return 2;
                      } else {
                          if (features[1] < 3.100000023841858) {
                              if (features[2] < 5.049999952316284) {
                                  if (features[3] < 1.75) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
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
              }
          }
        }
        

static inline int32_t model_predict_tree_2(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[0] < 6.1499998569488525) {
                  if (features[2] < 4.950000047683716) {
                      if (features[3] < 1.6500000357627869) {
                          return 1;
                      } else {
                          if (features[3] < 1.75) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      if (features[3] < 1.699999988079071) {
                          if (features[1] < 2.649999976158142) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 2;
                      }
                  }
              } else {
                  if (features[3] < 1.649999976158142) {
                      return 1;
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_3(const float *features, int32_t features_length) {
          if (features[3] < 0.75) {
              return 0;
          } else {
              if (features[2] < 4.950000047683716) {
                  if (features[3] < 1.6500000357627869) {
                      return 1;
                  } else {
                      if (features[0] < 5.400000095367432) {
                          return 2;
                      } else {
                          if (features[1] < 2.950000047683716) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  }
              } else {
                  if (features[3] < 1.75) {
                      if (features[1] < 2.799999952316284) {
                          return 2;
                      } else {
                          if (features[0] < 6.949999809265137) {
                              return 1;
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_4(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.550000011920929) {
                  if (features[1] < 2.25) {
                      if (features[3] < 1.25) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      if (features[2] < 5.0) {
                          return 1;
                      } else {
                          return 2;
                      }
                  }
              } else {
                  if (features[2] < 5.1499998569488525) {
                      if (features[2] < 4.950000047683716) {
                          return 2;
                      } else {
                          if (features[0] < 6.5) {
                              if (features[3] < 1.75) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_5(const float *features, int32_t features_length) {
          if (features[0] < 5.3500001430511475) {
              if (features[2] < 2.449999988079071) {
                  return 0;
              } else {
                  return 1;
              }
          } else {
              if (features[2] < 4.8500001430511475) {
                  if (features[3] < 0.7000000029802322) {
                      return 0;
                  } else {
                      if (features[1] < 2.950000047683716) {
                          return 1;
                      } else {
                          if (features[0] < 5.950000047683716) {
                              return 1;
                          } else {
                              if (features[0] < 6.049999952316284) {
                                  if (features[3] < 1.699999988079071) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
                              } else {
                                  return 1;
                              }
                          }
                      }
                  }
              } else {
                  if (features[2] < 5.1499998569488525) {
                      if (features[3] < 1.75) {
                          if (features[0] < 6.150000095367432) {
                              return 1;
                          } else {
                              if (features[2] < 5.049999952316284) {
                                  return 1;
                              } else {
                                  return 2;
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
        }
        

static inline int32_t model_predict_tree_6(const float *features, int32_t features_length) {
          if (features[2] < 2.449999988079071) {
              return 0;
          } else {
              if (features[2] < 4.8500001430511475) {
                  if (features[3] < 1.600000023841858) {
                      return 1;
                  } else {
                      if (features[0] < 5.400000095367432) {
                          return 2;
                      } else {
                          return 1;
                      }
                  }
              } else {
                  if (features[3] < 1.550000011920929) {
                      if (features[2] < 4.950000047683716) {
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
        

static inline int32_t model_predict_tree_7(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.6500000357627869) {
                  if (features[0] < 7.099999904632568) {
                      if (features[2] < 4.950000047683716) {
                          return 1;
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
              } else {
                  if (features[1] < 2.950000047683716) {
                      return 2;
                  } else {
                      if (features[2] < 5.099999904632568) {
                          if (features[0] < 5.950000047683716) {
                              return 1;
                          } else {
                              if (features[3] < 1.75) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          }
                      } else {
                          return 2;
                      }
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_8(const float *features, int32_t features_length) {
          if (features[3] < 0.75) {
              return 0;
          } else {
              if (features[2] < 4.75) {
                  if (features[0] < 5.049999952316284) {
                      return 2;
                  } else {
                      return 1;
                  }
              } else {
                  if (features[2] < 5.049999952316284) {
                      if (features[0] < 6.349999904632568) {
                          if (features[1] < 3.100000023841858) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 1;
                      }
                  } else {
                      if (features[2] < 5.1499998569488525) {
                          if (features[3] < 1.75) {
                              if (features[3] < 1.550000011920929) {
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
        }
        

static inline int32_t model_predict_tree_9(const float *features, int32_t features_length) {
          if (features[0] < 5.349999904632568) {
              if (features[3] < 0.800000011920929) {
                  return 0;
              } else {
                  if (features[2] < 4.200000047683716) {
                      return 1;
                  } else {
                      return 2;
                  }
              }
          } else {
              if (features[3] < 1.75) {
                  if (features[2] < 2.5) {
                      return 0;
                  } else {
                      if (features[1] < 2.3000000715255737) {
                          return 2;
                      } else {
                          if (features[0] < 6.049999952316284) {
                              return 1;
                          } else {
                              if (features[0] < 6.1499998569488525) {
                                  if (features[1] < 2.75) {
                                      return 2;
                                  } else {
                                      return 1;
                                  }
                              } else {
                                  return 1;
                              }
                          }
                      }
                  }
              } else {
                  if (features[2] < 4.8500001430511475) {
                      return 1;
                  } else {
                      return 2;
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
