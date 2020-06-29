#include "holberton.h"
/**
* _memset - Fills memory with a constant byte
* @s: First input pointer
* @b: Second input
* @n: Third input n bytes
*
* Description: Fills memory with a constant byte
* Return: pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;

while (x < n)
{
s[x] = b;
x++;
}
return (s);
}
