#include <stdio.h>
/**
* main - Prints the number of arguments passed into it
* @argc: Firts input int
* @argv: Second input char
*
* Description: Program that prints the number of arguments passed into it
* Return: 0
*/
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
