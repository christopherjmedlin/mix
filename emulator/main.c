#include "mix.h"

int main(int argc, char* argv[]) {
    // create machine
    Mix* machine = init_mix();
    // being bootstrap
    go_button(machine);
    // free machine
    free_mix(machine);
}