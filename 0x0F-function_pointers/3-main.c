#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Result between a - b
* @argc: first int
* @argv: Second int
*
* Description: Return the result  between a and b
* Return: int
*/
int main(int argc, char *argv[])
{
int (*funct)(int a, int b);

if (argc != 4)
{
printf("Error\n");
return (98);
}
funct = get_op_func(argv[2]);
if (!funct)
{
printf("Error\n");
return (99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
return (100);
}

printf("%d\n", funct(atoi(argv[1]), atoi(argv[3])));
return (0);
}
