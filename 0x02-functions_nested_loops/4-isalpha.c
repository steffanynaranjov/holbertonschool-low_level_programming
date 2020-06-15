#include "holberton.h"
/**
* _isalpha - Entry point
* @c: character to check
*
* Return: 1 if c is alpha
*/
int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
