#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/*LIBRARIES*/
#include <stdio.h>
#include <math.h>

/*PROTOTYPES*/
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif /*SEARCH_ALGOS */
