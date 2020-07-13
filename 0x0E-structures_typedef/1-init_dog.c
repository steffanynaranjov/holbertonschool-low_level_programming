#include "dog.h"
#include <stdio.h>
/**
* init_dog - Initialize a variable
* @d: struct dog
* @name: Name
* @age: Age
* @owner: Owner
*
* Description: Function that initialize a variable
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
