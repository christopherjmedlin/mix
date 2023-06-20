#include "mix.h"

Mix* init_mix() {
    char* A = malloc(sizeof(char) * 5);
    bool A_sign = true;
    char* I = malloc(sizeof(char) * 12);
    char I_sign = 0;
    char* X = malloc(sizeof(char) * 5);
    bool X_sign = true;
    char* J = malloc(sizeof(char) * 2);
    char* mem = malloc(sizeof(char) * 3000);

    Mix m = malloc(sizeof(Mix));
    m.A = A;
    m.A_sign = A_sign;
    m.I = I;
    m.I_sign = I_sign;
    m.X = X;
    m.X_sign = X_sign;
    m.J = J
    m.mem = mem;
    m.overflow = false;
    m.L = false;
    m.G = false;
    m.E = false;
    m.pc = 0;
    return m;
}

void free_mix(Mix m) {
    free(m.A);
    free(m.I);
    free(m.X);
    free(m.J);
    free(m.mem);
    free(m);
}