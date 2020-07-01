#include "holberton.h"
/**
* _strlen_recursion - Returns the length of a string
* @s: First input pointer
*
* Description: Returns the length of a string
* Return: The lenght of a string
*/
int _strlen_recursion(char *s)
{
int x;

if (*s == 0)
return (0);
else
x = 1 + _strlen_recursion(s + 1);
return (x);
}
