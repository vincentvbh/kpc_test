#ifndef CYCLES_H
#define CYCLES_H

#include <stdint.h>

void init_counters(void);
void stop_counting(void);
int get_counters_data(uint64_t *counters);
uint64_t get_cycle(void);
void print_counters_data(const uint64_t *counters_t0, const uint64_t *counters_t1);


#endif

