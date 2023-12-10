#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int predict(float features[4]) {

    int classes[3];
        
    if (features[3] <= -0.5116926208138466) {
        classes[0] = 40; 
        classes[1] = 0; 
        classes[2] = 0; 
    } else {
        if (features[2] <= 0.5864280760288239) {
            if (features[3] <= 0.6229301393032074) {
                classes[0] = 0; 
                classes[1] = 36; 
                classes[2] = 0; 
            } else {
                classes[0] = 0; 
                classes[1] = 0; 
                classes[2] = 1; 
            }
        } else {
            if (features[3] <= 0.7564151883125305) {
                if (features[2] <= 0.7010394334793091) {
                    classes[0] = 0; 
                    classes[1] = 2; 
                    classes[2] = 0; 
                } else {
                    if (features[3] <= 0.48944512009620667) {
                        classes[0] = 0; 
                        classes[1] = 0; 
                        classes[2] = 3; 
                    } else {
                        if (features[0] <= 1.3906405568122864) {
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
                if (features[2] <= 0.6437337398529053) {
                    if (features[1] <= 0.08570939302444458) {
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
    }

    int index = 0;
    for (int i = 0; i < 3; i++) {
        index = classes[i] > classes[index] ? i : index;
    }
    return index;
}

