#include "holberton.h"
#include <stdio.h>
/**
* main - This print all multiples of 5 and 3 of 1024
* @void: The evaluated input
*
* Description: computes & prints the sum of all the multiples
* Return: 0 Value
*/
int main(void)
{
int sum = 0;
for (int i = 0; i < 1024; i += 5)
{
sum += i;
}
for (int i = 0; i < 1024; i += 3)
{
if (i % 5)
sum += i;
}
printf("%d\n", sum);
return (0);
}
