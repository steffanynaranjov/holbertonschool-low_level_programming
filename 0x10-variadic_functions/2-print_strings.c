#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - Prints strings
* @separator:  String to be printed between strings
* @n: Number of int
*
* Description: function that prints strings,
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int x = 0;
va_list vlist;
char *str;

va_start(vlist, n);

while (x < n)
{
str = va_arg(vlist, char *);
printf("%s", str ? str : "(nil)");

if (x < (n - 1) && separator)
printf("%s", separator);
x++;
}

printf("\n");
va_end(vlist);
}
