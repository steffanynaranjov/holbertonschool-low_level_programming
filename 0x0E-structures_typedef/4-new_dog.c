#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
* new_dog - creat a new dog
* @name: name char 
* @age: age float 
* @owner: name owner char
*
* Return: new dog struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
int x = 0, y = 0;

if (new_dog == NULL)
return (new_dog);

for (x = 0; owner[x]; x++)
;

for (y = 0; name[y]; y++)
;

(*new_dog).owner = malloc((x + 1) * sizeof(char));
(*new_dog).name = malloc((y + 1) * sizeof(char));

if ((*new_dog).owner == NULL || (*new_dog).name == NULL)
{
free((*new_dog).owner);
 free((*new_dog).name);
free(new_dog);
return (NULL);
}

for (x = 0; owner[x]; x++)
(*new_dog).owner[x] = owner[x];

for (y = 0; name[y]; y++)
(*new_dog).name[y] = name[y];

(*new_dog).owner[x] = 0;
(*new_dog).name[y] = 0;
(*new_dog).age = age;

return (new_dog);
}
