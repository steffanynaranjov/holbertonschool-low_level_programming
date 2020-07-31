#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <math.h>

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void _print_binary_(unsigned long int n);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
int get_endianness(void);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
