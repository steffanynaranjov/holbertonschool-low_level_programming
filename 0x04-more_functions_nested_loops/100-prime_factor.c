#include <stdio.h>
/**
* main - Print the largest prime factor of the number
* @void: Parameter of times
*
* Description: Print the largest prime factor of the number
* Return: 0 Value if it works
*/
int main(void)
{
long int x, n = 612852475143;

for (x = 2; x < n; x++)
if (n % x == 0)
{
n = n / x;
}
printf("%ld\n", x);
return (0);
}
