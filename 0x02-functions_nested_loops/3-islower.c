#include "holberton.h"
/**
* _islower - Entry point
* @c: character to check
*
* Return: 1 if c is lowercase
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
