#ifndef _VARIADIC_F_H
#define _VARIADIC_F_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct op - struct operators
* @op: char
* @funct: function
* Description: struct for vlist
*/
typedef struct op
{
char *op;
void (*funct)(va_list);
} op_t;

void print_int(va_list);
void print_str(va_list);
void print_float(va_list);
void print_char(va_list);

#endif
