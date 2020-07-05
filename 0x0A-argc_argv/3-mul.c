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
int n1, n2, multiply;

if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
multiply = n1 * n2;
printf("%d\n", multiply);
}
else
{
printf("Error\n");
return (1);
}
