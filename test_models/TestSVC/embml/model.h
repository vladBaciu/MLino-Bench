
#define TOTAL_BITS 32
#define FIXED_FBITS 10
#define SIGNED 
#include "FixedNum.h"

#define NUM_CLASSES 3
#define INPUT_SIZE 4
#define GAMMA (FixedNum)0x00000033
#define COEF0 (FixedNum)0x00000000
#define DEGREE (FixedNum)0x00000c00
#define N_CLASS 3
#define NR_CLASS 3
#define MODEL_L 25

FixedNum instance[INPUT_SIZE + 1];

const FixedNum *dual_coef[NR_CLASS - 1];

const FixedNum dual_coef_0[4] = {(FixedNum)0x000002af, (FixedNum)0x0000004f, (FixedNum)0xfffffd02, (FixedNum)0xffffff2f};

const FixedNum dual_coef_1[23] = {(FixedNum)0x000000a1, (FixedNum)0x00000030, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000400, (FixedNum)0x00000098, (FixedNum)0xffffff8c, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00, (FixedNum)0xfffffd1c, (FixedNum)0xfffffec0, (FixedNum)0xfffffc00, (FixedNum)0xfffffc00};

const FixedNum support_vectors[MODEL_L][INPUT_SIZE] = {{(FixedNum)0x00001333, (FixedNum)0x00000d9a, (FixedNum)0x0000079a, (FixedNum)0x000000cd}, {(FixedNum)0x00001466, (FixedNum)0x00000d33, (FixedNum)0x000006cd, (FixedNum)0x00000200}, {(FixedNum)0x00001200, (FixedNum)0x00000933, (FixedNum)0x00000533, (FixedNum)0x00000133}, {(FixedNum)0x00001666, (FixedNum)0x00000c00, (FixedNum)0x00001200, (FixedNum)0x00000600}, {(FixedNum)0x0000159a, (FixedNum)0x00000c00, (FixedNum)0x00001200, (FixedNum)0x00000600}, {(FixedNum)0x00001acd, (FixedNum)0x00000c00, (FixedNum)0x00001400, (FixedNum)0x000006cd}, {(FixedNum)0x0000179a, (FixedNum)0x00000ccd, (FixedNum)0x00001333, (FixedNum)0x00000733}, {(FixedNum)0x00001466, (FixedNum)0x00000a00, (FixedNum)0x00000c00, (FixedNum)0x00000466}, {(FixedNum)0x00001800, (FixedNum)0x00000acd, (FixedNum)0x00001466, (FixedNum)0x00000666}, {(FixedNum)0x00001933, (FixedNum)0x00000a00, (FixedNum)0x0000139a, (FixedNum)0x00000600}, {(FixedNum)0x00001866, (FixedNum)0x00000b9a, (FixedNum)0x000012cd, (FixedNum)0x0000059a}, {(FixedNum)0x00001a00, (FixedNum)0x00000b33, (FixedNum)0x00001266, (FixedNum)0x00000600}, {(FixedNum)0x00001b9a, (FixedNum)0x00000c66, (FixedNum)0x0000139a, (FixedNum)0x00000600}, {(FixedNum)0x00001933, (FixedNum)0x00000933, (FixedNum)0x0000119a, (FixedNum)0x00000533}, {(FixedNum)0x00001933, (FixedNum)0x00000a00, (FixedNum)0x00001400, (FixedNum)0x0000079a}, {(FixedNum)0x00001933, (FixedNum)0x00000b33, (FixedNum)0x00001466, (FixedNum)0x00000600}, {(FixedNum)0x00001933, (FixedNum)0x00000acd, (FixedNum)0x0000139a, (FixedNum)0x00000733}, {(FixedNum)0x00001800, (FixedNum)0x00000c00, (FixedNum)0x00001333, (FixedNum)0x00000733}, {(FixedNum)0x00001800, (FixedNum)0x000008cd, (FixedNum)0x00001400, (FixedNum)0x00000600}, {(FixedNum)0x000018cd, (FixedNum)0x00000b33, (FixedNum)0x00001333, (FixedNum)0x00000733}, {(FixedNum)0x00001a00, (FixedNum)0x00000c00, (FixedNum)0x000014cd, (FixedNum)0x00000800}, {(FixedNum)0x00001ccd, (FixedNum)0x00000c00, (FixedNum)0x00001733, (FixedNum)0x00000666}, {(FixedNum)0x00001666, (FixedNum)0x00000b33, (FixedNum)0x0000139a, (FixedNum)0x00000800}, {(FixedNum)0x0000179a, (FixedNum)0x00000c00, (FixedNum)0x00001466, (FixedNum)0x00000733}, {(FixedNum)0x0000139a, (FixedNum)0x00000a00, (FixedNum)0x00001200, (FixedNum)0x000006cd}};

const int8_t end[NR_CLASS - 1][NR_CLASS + 1] = {{0, 2, 3, 4}, {0, 2, 12, 23}};

const int8_t *index_sv[NR_CLASS - 1];

const int8_t index_sv_0[4] = {1, 2, 7, 24};

const int8_t index_sv_1[23] = {0, 1, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24};

const FixedNum intercept[N_CLASS] = {(FixedNum)0x000005d0, (FixedNum)0x00000606, (FixedNum)0x00001736};

const int8_t classes[NUM_CLASSES] = {0, 1, 2};


FixedNum k_function(const FixedNum *y){
	FixedNum sum = (FixedNum)0x00000000;
	for (int i = 0; i < INPUT_SIZE; i++){
		sum = fxp_sum(sum, fxp_mul(instance[i], y[i]));
	}
	return sum;
}
int classify(){
	FixedNum k_value[MODEL_L];
	for (int i = 0; i < MODEL_L; i++){
		k_value[i] = k_function(support_vectors[i]);
	}
	int8_t vote[NR_CLASS] = {0};
	int8_t p = 0;
	for (int i = 0; i < NR_CLASS - 1; i++){
		for (int j = i + 1; j < NR_CLASS; j++){
			FixedNum sum = (FixedNum)0x00000000;
			for (int k = end[j - 1][i]; k < end[j - 1][i + 1]; k++){
				sum = fxp_sum(sum, fxp_mul(dual_coef[j - 1][k], k_value[index_sv[j - 1][k]]));
			}
			for (int k = end[i][j]; k < end[i][j + 1]; k++){
				sum = fxp_sum(sum, fxp_mul(dual_coef[i][k], k_value[index_sv[i][k]]));
			}
			sum = fxp_sum(sum, intercept[p++]);
			if (sum > 0){
				vote[i]++;
			}
			else {
				vote[j]++;
			}
		}
	}
	int indMax = 0;
	for (int i = 1; i < NR_CLASS; i++){
		if (vote[i] > vote[indMax]){
			indMax = i;
		}
	}
	return classes[indMax];
}

void initConnections(){
	dual_coef[0] = dual_coef_0;
	dual_coef[1] = dual_coef_1;
	index_sv[0] = index_sv_0;
	index_sv[1] = index_sv_1;
}
