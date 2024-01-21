#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* tasks */
int linear_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
