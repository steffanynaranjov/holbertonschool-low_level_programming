#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds positive numbers
* @argc: Firts input int
* @argv: Second input char
*
* Description: Program to adds positive numbers
* Return: 0 if it works 1 if is a error
*/
int main(int argc, char *argv[])
{
int x = 1, y = 0, sum = 0;

if (argc <= 1)
{
printf("0\n");
return (0);
}

for (; x < argc; x++)
{
for (; argv[x][y] != 0; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}

sum += atoi(argv[x]);
}

printf("%d\n", sum);
return (0);
}
