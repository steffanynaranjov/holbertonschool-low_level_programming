#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - Prints a name
* @name: name
* @f: P funtion
*
* Description: Function that prints a name
* Return: 0
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
