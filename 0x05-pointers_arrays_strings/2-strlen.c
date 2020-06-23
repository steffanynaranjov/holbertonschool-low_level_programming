#include "holberton.h"
/**
* _strlen - Returns the length of a string
* @s: The evaluated input
*
* Description: Returns the length of a string
* Return: n
*/
int _strlen(char *s)
{
int x = 0;

for (; *s++;)
x++;

return (x);

}
