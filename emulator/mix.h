#ifndef MIX_H
#define MIX_H

#include <stdbool.h>

typedef struct Mix {
    char* A,
    bool A_sign,
    // I_sign is a 1 character bit vector, where
    // the ith bit refers to the ith I register
    char* I,
    char I_sign,
    char* X,
    bool X_sign,
    char* J,

    bool overflow,
    bool E,
    bool L,
    bool G,

    char* mem,
    int pc
} Mix
 
Mix* init_mix();

void free_mix(Mix m);

#endif