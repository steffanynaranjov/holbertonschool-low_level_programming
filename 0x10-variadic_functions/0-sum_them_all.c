#include "variadic_functions.h"
/**
* sum_them_all - sum of all its parameters
* @n: function that returns the sum of all
* Return: The results or 0
*/
int sum_them_all(const unsigned int n, ...)
{
va_list vlist;
int sum = 0;
unsigned int x = 0;

va_start(vlist, n);
if (n == 0)
return (0);
while (x < n)
{
sum += va_arg(vlist, int);
x++;
}
va_end(vlist);
return (sum);
}
