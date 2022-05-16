#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H



/**
 * Desc: Header file containing all the prototype of functions
 *       used in the folder 0x0e function_pointers directory
 */



#include <stdlib.h>
void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));

int int_index(int *array, int size, int (*cmp)(int));



#endif
