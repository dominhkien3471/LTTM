#ifndef ADDROUNDKEY
#define ADDROUNDKEY

void addRoundKey(unsigned char** state, unsigned char** round_key);
void populateRoundKey(unsigned char* expanded_key, unsigned char** round_key, int iter);

#endif