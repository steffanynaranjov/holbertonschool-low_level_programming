#ifndef _FUNCTION_P_H
#define _FUNCTION_P_H

#include <stdio.h>
/**
* struct op - New type
*
* Description: Function to a pointer
*/
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name(char *name, void (*f)(char *));
int (*get_op_func(char *s))(int, int);


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /*_FUNCTION_P_H */
