#include "holberton.h"
#include <stdio.h>
/**
* _strstr - Locates a substring
* @haystack: First input pointer
* @needle: Second input
*
* Description: Locates a substring
* Return: char or null
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != 0)
{
char *stack = haystack;
char *need = needle;

while (*haystack == *need && *need != 0 && *haystack != 0)
haystack++, need++;
if (*need == 0)
return (stack);
haystack = ++stack;
}
return (NULL);
}
