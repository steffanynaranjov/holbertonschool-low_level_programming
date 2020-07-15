#include "3-calc.h"
#include <stdio.h>
/**
* get_op_func - Correct operator
* @s: operator passed as argument
*
* Description: Selects the correct function
*
* Return: pointer given as parameter
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op)
{
if (ops[i].op[0] == s[0] && s[1] == 0)
return (ops[i].f);
i++;
}
return (NULL);
}
