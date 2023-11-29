#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict(float features[4]) {

    int classes[3];
        
    if (features[3] <= 0.800000011920929) {
        classes[0] = 40; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 4.75) {
            if (features[3] <= 1.6500000357627869) {
                classes[0] = 0; 
                classes[1] = 36; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 1.75) {
                if (features[2] <= 4.950000047683716) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 1.550000011920929) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        if (features[0] <= 6.949999809265137) {
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
    }

    int index = 0;
    for (int i = 0; i < 3; i++) {
        index = classes[i] > classes[index] ? i : index;
    }
    return index;
}

