#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
#include <stdio.h>
int main(void)
{
int i, j;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
putchar(i);
putchar(j);

if (i + j != 0x72)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
