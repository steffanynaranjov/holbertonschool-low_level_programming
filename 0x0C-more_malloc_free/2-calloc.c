#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array
* @nmemb: Firts input int
* @size: Second input int
*
* Description:function that allocates memory for an array
* Return: Null or a pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr = NULL;
unsigned int x = 0;

if (nmemb == 0 || size == 0)
return (ptr);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (ptr);

for (; x < (nmemb * size); x++)
ptr[x] = 0;

return (ptr);
}
