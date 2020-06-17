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
unsigned long int x = 1, y = 1, z;
int w;

for (w = 2; w < 98; w++)
{
z = x;
x = x + y;
y = z;
printf("%lu", y);
if (w != 97)
printf(", ");
}
printf("\n");
return (0);
}
