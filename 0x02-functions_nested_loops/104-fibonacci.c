#include <stdio.h>
/**
* main - This print fibonacci numbers
* @void: The evaluated input
*
* Description: computes & prints
* Return: 0 Value
*/
int main(void)
{
unsigned long int suma = 1, a = 1, b;
int i;

for (i = 2; i < 98; i++)
{
b = suma;
suma = suma + a;
a = b;
printf("%lu", a);
if (i != 99)
printf(", ");
}
printf("\n");
return (0);
}
