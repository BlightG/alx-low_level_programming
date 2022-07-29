#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
#endif