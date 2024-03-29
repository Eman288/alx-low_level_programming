#ifndef search_algos_h
#define search_algos_h
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int advanced_binary(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int linear_search(int *array, size_t size, int value);
#endif
