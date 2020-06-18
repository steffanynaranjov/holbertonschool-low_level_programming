#include <stdio.h>
/**
* main - Fizz-Buzz test
* @void: Parameter of times
*
* Description: Print Fizz-Buzz
* Return: 0 Value
*/
int main(void)
{
int x;

for (x = 1; x <= 100; x++)
{
if (x % 3 == 0)
printf("Fizz");
if (x % 5 == 0)
printf("Buzz");
if (x % 3 != 0  && x % 5 != 0)
printf("%d", x);
if (x != 100)
printf(" ");
}
printf("\n");
return (0);
}
