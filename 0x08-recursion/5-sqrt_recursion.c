#include "holberton.h"
/**
* _square - The square root of a number
* @x: First input number
* @y: Second input power
*
* Description: Returns the square root of a number
* Return: return the square root of a number
*/
int _square(int x, int y)
{
if (y * y == x)
return (y);
else if (x < y * y)
return (-1);
return (_square(x, y + 1));
}

/**
* _sqrt_recursion - Function that returns the natural square root of a number
* @n: First input
*
* Description: Function that returns the natural square root of a number
* Return: return the square root of a number
*/

int _sqrt_recursion(int n)
{
return (_square(n, 1));
}
