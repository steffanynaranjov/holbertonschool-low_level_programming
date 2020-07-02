#include "holberton.h"
/**
* _divisor - Returns 1 if the input integer is a prime number
* @nump: First input
* @div: Second input divisor
*
* Description: Returns 1 if the input integer is a prime number
* Return: Returns 1 if is a prime number 0 otherwise
*/
int _numdiv(int div, int nump)
{
if (nump == div)
return (1);
else if (nump % div == 0)
return (0);
else if (nump < 2)
return (0);
else
return (_numdiv(div + 1, nump));
}

/**
* is_prime_number - Returns 1 if the input integer is a prime number
* @n: First input number
*
* Description: Returns 1 if the input integer is a prime number
* Return: Returns 1 if is a prime number 0 otherwise
*/
int is_prime_number(int n)
{
return (_numdiv(2, n));
}
