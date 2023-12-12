#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#define TOTAL_BITS 32
#define FIXED_FBITS 10
#define SIGNED 
#include "FixedNum.h"

#define NUM_CLASSES 3
#define LEN_TREE 19
#define INPUT_SIZE 4

FixedNum instance[INPUT_SIZE + 1];


int classify(){
	if (instance[2] <= (FixedNum)0x000009cd){
		return 0;
	}
	else {
		if (instance[2] <= (FixedNum)0x00001300){
			if (instance[3] <= (FixedNum)0x0000069a){
				return 1;
			}
			else {
				return 2;
			}
		}
		else {
			if (instance[3] <= (FixedNum)0x00000700){
				if (instance[2] <= (FixedNum)0x000013cd){
					return 1;
				}
				else {
					if (instance[3] <= (FixedNum)0x00000633){
						return 2;
					}
					else {
						if (instance[0] <= (FixedNum)0x00001bcd){
							return 1;
						}
						else {
							return 2;
						}
					}
				}
			}
			else {
				if (instance[2] <= (FixedNum)0x00001366){
					if (instance[0] <= (FixedNum)0x000017cd){
						return 1;
					}
					else {
						return 2;
					}
				}
				else {
					return 2;
				}
			}
		}
	}
}

int main(void) {
    int result = classify();
    return result;
}
