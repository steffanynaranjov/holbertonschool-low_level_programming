#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - Prints numbers
* @separator:  String to be printed between numbers
* @n: Number of int
*
* Description: Function that prints numbers
* Return: Empty
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
va_list vlist;

va_start(vlist, n);

while (x < n)
{
printf("%d", va_arg(vlist, int));

if (n > x + 1 && separator)
printf("%s", separator);
x++;
}
printf("\n");

va_end(vlist);
}
