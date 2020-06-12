#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char *x = "0123456789abcdef";

while (*x)
putchar(*(x++));

putchar('\n');
return (0);
}
