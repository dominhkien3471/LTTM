#include "addroundkey.h"


// Add roundkey function defination
void addRoundKey(unsigned char** state, unsigned char** round_key){
	for(int i = 0; i < 4; ++i){
        for(int j = 0 ;j < 4; ++j)
        {
            state[i][j] = state[i][j] ^ round_key[i][j]; 
        }
	}
}


// Get RoundKey for next Round

void populateRoundKey(unsigned char* expanded_key, unsigned char** round_key, int iter){
	for(int i = 0; i < 4; ++i){
		for(int j = 0; j < 4; ++j){
			round_key[j][i] = expanded_key[16*iter + j + 4*i]; 
		}
	}	
}
