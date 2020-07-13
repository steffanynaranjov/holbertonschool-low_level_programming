#include <stdio.h>
#include "dog.h"
/**
* free_dog - Frees struct dog_t
*
*@d: struct dog_t
* Description: Function that frees dogs
* Return: void
*/
void free_dog(dog_t *d)
{

if (d)
{
free((*d).owner);
free((*d).name);
free(d);
}
}
