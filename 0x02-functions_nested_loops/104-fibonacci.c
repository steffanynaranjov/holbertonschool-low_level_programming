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
double x = 1, y = 1, z;
int i;

for (i = 2; i < 98; i++)
{
z = x;
x = x + y;
y = z;
printf("%.0f", y);
if (i != 97)
printf(", ");
}
printf("\n");
return (0);
}
