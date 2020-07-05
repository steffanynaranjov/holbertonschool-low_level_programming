#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the minimum number of coins
* @argc: Firts input int
* @argv: Second input char
*
* Description: Program that prints the minimum number of coins
* Return: 0 or 1 if is a error
*/
int main(int argc, char *argv[])
{
int x[5] = {25, 10, 5, 2, 1};
int coin = 0, y = 0;
int cant = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cant = atoi(argv[1]);
for (; y < 5; y++)
{
if (x[y] <= cant)
{
coin += cant / x[y];
cant -= (cant / x[y]) * x[y];
}
}
printf("%d\n", coin);
return (0);
}
