#include "holberton.h"
/**
* _strlen - Returns the length of a string
* @n: First input string
*
* Description: Function that returns the length of a string
* Return: The lenght
*/
int _strlen(char *n)
{
if (*n == 0)
return (0);
else
return (1 + _strlen(n + 1));
}

/**
* _ispal - Returns if a string is a palindrome
* @str: First input pointer origin
* @x: Second input lenght of the string
*
* Description:Function that returns the length of a string
* Return: The lenght
*/
int _ispal(char *str, int x)
{
if (x <= 1)
return (1);
if (*str == *(str + x - 1))
return (_ispal(str + 1, x - 2));
else
return (0);
}

/**
* is_palindrome - Returns 1 if the input is a palindrome
* @s: First input number
*
* Description: Function that returns 1 if the input integer is a prime number
* Return: 1 if is palindrome 0 otherwise
*/
int is_palindrome(char *s)
{
return (_ispal(s, _strlen(s)));
}
