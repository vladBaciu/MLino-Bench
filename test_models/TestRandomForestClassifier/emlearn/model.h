
    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode model_nodes[88] = {
  { 3, 0.800000011920929, 1, 2 },
  { -1, 0, -1, -1 },
  { 3, 1.6500000357627869, 3, 9 },
  { 0, 7.099999904632568, 4, 8 },
  { 0, 6.049999952316284, 5, 6 },
  { -1, 1, -1, -1 },
  { 1, 2.850000023841858, 7, 5 },
  { 2, 5.0, 5, 8 },
  { -1, 2, -1, -1 },
  { 1, 3.149999976158142, 10, 12 },
  { 3, 1.75, 11, 8 },
  { 0, 5.799999952316284, 8, 5 },
  { 0, 6.049999952316284, 5, 8 },
  { 3, 0.800000011920929, 1, 14 },
  { 3, 1.550000011920929, 15, 20 },
  { 1, 2.25, 8, 16 },
  { 0, 6.0, 5, 17 },
  { 0, 6.3500001430511475, 18, 5 },
  { 1, 2.850000023841858, 19, 5 },
  { 2, 5.0, 5, 8 },
  { 0, 6.150000095367432, 21, 24 },
  { 2, 4.650000095367432, 5, 22 },
  { 3, 1.8499999642372131, 23, 8 },
  { 0, 5.950000047683716, 5, 8 },
  { 3, 1.75, 25, 8 },
  { 3, 1.6500000357627869, 8, 5 },
  { 2, 2.5, 1, 27 },
  { 0, 6.049999952316284, 28, 29 },
  { 3, 1.699999988079071, 5, 8 },
  { 3, 1.550000011920929, 30, 8 },
  { 2, 4.8999998569488525, 5, 8 },
  { 3, 0.75, 1, 32 },
  { 0, 6.1499998569488525, 33, 40 },
  { 2, 4.700000047683716, 34, 36 },
  { 2, 4.450000047683716, 5, 35 },
  { 1, 2.75, 8, 5 },
  { 1, 2.75, 37, 8 },
  { 2, 5.049999952316284, 8, 38 },
  { 2, 5.349999904632568, 39, 8 },
  { 0, 5.900000095367432, 8, 5 },
  { 0, 6.799999952316284, 41, 8 },
  { 2, 4.700000047683716, 5, 8 },
  { 2, 2.599999964237213, 1, 43 },
  { 2, 4.75, 44, 46 },
  { 0, 4.950000047683716, 45, 5 },
  { 1, 2.450000047683716, 5, 8 },
  { 0, 6.049999952316284, 47, 8 },
  { 1, 3.100000023841858, 48, 5 },
  { 0, 5.950000047683716, 8, 49 },
  { 2, 5.049999952316284, 8, 5 },
  { 2, 2.449999988079071, 1, 51 },
  { 2, 5.049999952316284, 52, 8 },
  { 0, 4.950000047683716, 8, 53 },
  { 3, 1.75, 5, 54 },
  { 1, 3.100000023841858, 8, 5 },
  { 2, 2.449999988079071, 1, 56 },
  { 0, 5.75, 57, 58 },
  { 3, 1.75, 5, 8 },
  { 0, 7.049999952316284, 59, 8 },
  { 3, 1.75, 60, 8 },
  { 1, 2.649999976158142, 61, 62 },
  { 2, 4.950000047683716, 5, 8 },
  { 2, 5.049999952316284, 5, 63 },
  { 1, 2.75, 5, 8 },
  { 0, 5.549999952316284, 65, 68 },
  { 1, 2.75, 66, 67 },
  { 2, 2.149999976158142, 1, 5 },
  { 3, 1.0, 1, 5 },
  { 0, 6.75, 69, 73 },
  { 3, 1.75, 70, 8 },
  { 3, 0.7000000029802322, 1, 71 },
  { 1, 2.850000023841858, 72, 5 },
  { 2, 4.950000047683716, 5, 8 },
  { 3, 1.550000011920929, 5, 8 },
  { 2, 2.599999964237213, 1, 75 },
  { 3, 1.6500000357627869, 76, 8 },
  { 0, 7.049999952316284, 77, 8 },
  { 2, 5.349999904632568, 78, 8 },
  { 1, 2.25, 79, 80 },
  { 0, 5.5, 5, 8 },
  { 0, 6.200000047683716, 5, 81 },
  { 2, 5.0, 5, 8 },
  { 2, 2.300000011920929, 1, 83 },
  { 3, 1.6500000357627869, 84, 86 },
  { 0, 7.099999904632568, 85, 8 },
  { 2, 5.349999904632568, 5, 8 },
  { 2, 5.049999952316284, 87, 8 },
  { 2, 4.900000095367432, 8, 5 } 
};

int32_t model_tree_roots[10] = { 0, 13, 26, 31, 42, 50, 55, 64, 74, 82 };

EmlTrees model = {
        88,
        model_nodes,	  
        10,
        model_tree_roots,
    };

static inline int32_t model_predict_tree_0(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.6500000357627869) {
                  if (features[0] < 7.099999904632568) {
                      if (features[0] < 6.049999952316284) {
                          return 1;
                      } else {
                          if (features[1] < 2.850000023841858) {
                              if (features[2] < 5.0) {
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
              } else {
                  if (features[1] < 3.149999976158142) {
                      if (features[3] < 1.75) {
                          if (features[0] < 5.799999952316284) {
                              return 2;
                          } else {
                              return 1;
                          }
                      } else {
                          return 2;
                      }
                  } else {
                      if (features[0] < 6.049999952316284) {
                          return 1;
                      } else {
                          return 2;
                      }
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_1(const float *features, int32_t features_length) {
          if (features[3] < 0.800000011920929) {
              return 0;
          } else {
              if (features[3] < 1.550000011920929) {
                  if (features[1] < 2.25) {
                      return 2;
                  } else {
                      if (features[0] < 6.0) {
                          return 1;
                      } else {
                          if (features[0] < 6.3500001430511475) {
                              if (features[1] < 2.850000023841858) {
                                  if (features[2] < 5.0) {
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
                  }
              } else {
                  if (features[0] < 6.150000095367432) {
                      if (features[2] < 4.650000095367432) {
                          return 1;
                      } else {
                          if (features[3] < 1.8499999642372131) {
                              if (features[0] < 5.950000047683716) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              return 2;
                          }
                      }
                  } else {
                      if (features[3] < 1.75) {
                          if (features[3] < 1.6500000357627869) {
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
        }
        

static inline int32_t model_predict_tree_2(const float *features, int32_t features_length) {
          if (features[2] < 2.5) {
              return 0;
          } else {
              if (features[0] < 6.049999952316284) {
                  if (features[3] < 1.699999988079071) {
                      return 1;
                  } else {
                      return 2;
                  }
              } else {
                  if (features[3] < 1.550000011920929) {
                      if (features[2] < 4.8999998569488525) {
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
        

static inline int32_t model_predict_tree_3(const float *features, int32_t features_length) {
          if (features[3] < 0.75) {
              return 0;
          } else {
              if (features[0] < 6.1499998569488525) {
                  if (features[2] < 4.700000047683716) {
                      if (features[2] < 4.450000047683716) {
                          return 1;
                      } else {
                          if (features[1] < 2.75) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  } else {
                      if (features[1] < 2.75) {
                          if (features[2] < 5.049999952316284) {
                              return 2;
                          } else {
                              if (features[2] < 5.349999904632568) {
                                  if (features[0] < 5.900000095367432) {
                                      return 2;
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
              } else {
                  if (features[0] < 6.799999952316284) {
                      if (features[2] < 4.700000047683716) {
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
        

static inline int32_t model_predict_tree_4(const float *features, int32_t features_length) {
          if (features[2] < 2.599999964237213) {
              return 0;
          } else {
              if (features[2] < 4.75) {
                  if (features[0] < 4.950000047683716) {
                      if (features[1] < 2.450000047683716) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 1;
                  }
              } else {
                  if (features[0] < 6.049999952316284) {
                      if (features[1] < 3.100000023841858) {
                          if (features[0] < 5.950000047683716) {
                              return 2;
                          } else {
                              if (features[2] < 5.049999952316284) {
                                  return 2;
                              } else {
                                  return 1;
                              }
                          }
                      } else {
                          return 1;
                      }
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_5(const float *features, int32_t features_length) {
          if (features[2] < 2.449999988079071) {
              return 0;
          } else {
              if (features[2] < 5.049999952316284) {
                  if (features[0] < 4.950000047683716) {
                      return 2;
                  } else {
                      if (features[3] < 1.75) {
                          return 1;
                      } else {
                          if (features[1] < 3.100000023841858) {
                              return 2;
                          } else {
                              return 1;
                          }
                      }
                  }
              } else {
                  return 2;
              }
          }
        }
        

static inline int32_t model_predict_tree_6(const float *features, int32_t features_length) {
          if (features[2] < 2.449999988079071) {
              return 0;
          } else {
              if (features[0] < 5.75) {
                  if (features[3] < 1.75) {
                      return 1;
                  } else {
                      return 2;
                  }
              } else {
                  if (features[0] < 7.049999952316284) {
                      if (features[3] < 1.75) {
                          if (features[1] < 2.649999976158142) {
                              if (features[2] < 4.950000047683716) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              if (features[2] < 5.049999952316284) {
                                  return 1;
                              } else {
                                  if (features[1] < 2.75) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
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
        

static inline int32_t model_predict_tree_7(const float *features, int32_t features_length) {
          if (features[0] < 5.549999952316284) {
              if (features[1] < 2.75) {
                  if (features[2] < 2.149999976158142) {
                      return 0;
                  } else {
                      return 1;
                  }
              } else {
                  if (features[3] < 1.0) {
                      return 0;
                  } else {
                      return 1;
                  }
              }
          } else {
              if (features[0] < 6.75) {
                  if (features[3] < 1.75) {
                      if (features[3] < 0.7000000029802322) {
                          return 0;
                      } else {
                          if (features[1] < 2.850000023841858) {
                              if (features[2] < 4.950000047683716) {
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
              } else {
                  if (features[3] < 1.550000011920929) {
                      return 1;
                  } else {
                      return 2;
                  }
              }
          }
        }
        

static inline int32_t model_predict_tree_8(const float *features, int32_t features_length) {
          if (features[2] < 2.599999964237213) {
              return 0;
          } else {
              if (features[3] < 1.6500000357627869) {
                  if (features[0] < 7.049999952316284) {
                      if (features[2] < 5.349999904632568) {
                          if (features[1] < 2.25) {
                              if (features[0] < 5.5) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          } else {
                              if (features[0] < 6.200000047683716) {
                                  return 1;
                              } else {
                                  if (features[2] < 5.0) {
                                      return 1;
                                  } else {
                                      return 2;
                                  }
                              }
                          }
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
        

static inline int32_t model_predict_tree_9(const float *features, int32_t features_length) {
          if (features[2] < 2.300000011920929) {
              return 0;
          } else {
              if (features[3] < 1.6500000357627869) {
                  if (features[0] < 7.099999904632568) {
                      if (features[2] < 5.349999904632568) {
                          return 1;
                      } else {
                          return 2;
                      }
                  } else {
                      return 2;
                  }
              } else {
                  if (features[2] < 5.049999952316284) {
                      if (features[2] < 4.900000095367432) {
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
    