#include "holberton.h"
#include <stdio.h>
/**
* _pow_recursion - function that return the value of x raised to the power of y
* @x: First input number
* @y: Second input power
*
* Description: Function that returns the value of x raised to the power of y
* Return:return the value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (x == 1)
return (1);
else if (y == 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
