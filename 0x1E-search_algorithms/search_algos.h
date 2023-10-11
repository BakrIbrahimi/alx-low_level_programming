#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/* Print functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int binary_search_recursive(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int rec_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* _SORTING_ALGOS_H_ */
