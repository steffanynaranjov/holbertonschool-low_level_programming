#include <stdio.h>
#include "dog.h"
/**
* print_dog - Prints a struct dog
*
*@d: struct dog
* Description: Function that prints a struct dog
*/
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
printf("Age: %f\n", (*d).age);
printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
}
}
