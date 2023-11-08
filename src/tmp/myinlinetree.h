
    // !!! This file is generated using emlearn !!!

    #include <eml_trees.h>
    

EmlTreesNode myinlinetree_nodes[12] = {
  { 3, -0.5116926208138466, 1, 2 },
  { -1, 0, -1, -1 },
  { 2, 0.5864280760288239, 3, 6 },
  { 3, 0.6229301393032074, 4, 5 },
  { -1, 1, -1, -1 },
  { -1, 2, -1, -1 },
  { 3, 0.7564151883125305, 7, 10 },
  { 2, 0.7010394334793091, 4, 8 },
  { 3, 0.48944512009620667, 5, 9 },
  { 2, 0.9875677824020386, 4, 5 },
  { 2, 0.6437337398529053, 11, 5 },
  { 0, 0.17167148366570473, 4, 5 } 
};

int32_t myinlinetree_tree_roots[1] = { 0 };

EmlTrees myinlinetree = {
        12,
        myinlinetree_nodes,	  
        1,
        myinlinetree_tree_roots,
    };

static inline int32_t myinlinetree_predict_tree_0(const float *features, int32_t features_length) {
          if (features[3] < -0.5116926208138466) {
              return 0;
          } else {
              if (features[2] < 0.5864280760288239) {
                  if (features[3] < 0.6229301393032074) {
                      return 1;
                  } else {
                      return 2;
                  }
              } else {
                  if (features[3] < 0.7564151883125305) {
                      if (features[2] < 0.7010394334793091) {
                          return 1;
                      } else {
                          if (features[3] < 0.48944512009620667) {
                              return 2;
                          } else {
                              if (features[2] < 0.9875677824020386) {
                                  return 1;
                              } else {
                                  return 2;
                              }
                          }
                      }
                  } else {
                      if (features[2] < 0.6437337398529053) {
                          if (features[0] < 0.17167148366570473) {
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
        

int32_t myinlinetree_predict(const float *features, int32_t features_length) {

        int32_t votes[3] = {0,};
        int32_t _class = -1;

        _class = myinlinetree_predict_tree_0(features, features_length); votes[_class] += 1;
    
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
    