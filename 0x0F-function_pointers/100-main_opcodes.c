#include <stdio.h>
#include <stdlib.h>
/**
* main - Prints the opcodes
* @argc: Amount of inputs
* @argv: Char pointer
*
* Description: Prints the opcodes main
*
* Return: O i
*/
int main(int argc, char **argv)
{
int x = 0, bytes;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
while (x < bytes)
{
printf("%02hhx", *((char *) (main + x)));
if (bytes > x + 1)
printf(" ");
x++;
}
printf("\n");
return (0);
}
