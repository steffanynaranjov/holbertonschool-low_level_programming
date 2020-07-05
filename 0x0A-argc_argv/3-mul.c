#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two numbers
* @argc: Firts input int
* @argv: Second input char
*
* Description: Multiplies two numbers and print the result
* Return: 0
*/
int main(int argc, char *argv[])
{
int x, y, multiply;

if (argc == 3)
{
x = atoi(argv[1]);
y = atoi(argv[2]);
multiply = x * y;
printf("%d\n", multiply);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
