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
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
