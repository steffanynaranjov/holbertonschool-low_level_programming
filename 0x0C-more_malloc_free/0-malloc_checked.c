#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - Allocates memory using malloc
* @b: Firts input int
*
* Description: function that  allocates memory using malloc
* Return: Empty value
*/
void *malloc_checked(unsigned int b)
{
void *mem = malloc(b);

if (mem == NULL)
exit(98);

return (mem);
}
