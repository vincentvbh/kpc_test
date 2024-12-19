
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>

#include "cycles.h"

uint64_t t0, t1;

static void profile_func(void) {
    for (size_t i = 0; i < 100000; i++) {
        uint32_t r = rand();
        if (r % 2){
            rand();
        }
    }
}

int main(void){

    init_counters();

    t0 = get_cycle();
    profile_func();
    t1 = get_cycle();
    printf("%llu\n", t1 - t0);

}
