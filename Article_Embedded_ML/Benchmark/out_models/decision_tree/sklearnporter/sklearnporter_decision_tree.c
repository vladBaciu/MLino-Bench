#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict(float features[4]) {

    int classes[3];
        
    if (features[2] <= 2.449999988079071) {
        classes[0] = 50; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[3] <= 1.75) {
            if (features[2] <= 4.950000047683716) {
                if (features[3] <= 1.6500000357627869) {
                    classes[0] = 0; 
                    classes[1] = 47; 
                    classes[2] = 0; 
                } else {
                    classes[0] = 0; 
                    classes[1] = 0; 
                    classes[2] = 1; 
                }
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
                classes[2] = 43; 
            }
        }
    }

    int index = 0;
    for (int i = 0; i < 3; i++) {
        index = classes[i] > classes[index] ? i : index;
    }
    return index;
}

int main(int argc, const char * argv[]) {

    /* Features: */
    double features[argc-1];
    int i;
    for (i = 1; i < argc; i++) {
        features[i-1] = atof(argv[i]);
    }

    /* Prediction: */
    printf("%d", predict(features));
    return 0;

}