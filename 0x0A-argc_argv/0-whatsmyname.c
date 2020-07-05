#include <stdio.h>
#include "holberton.h"
/**
* main - Prints its name
* @argc: Firts input int
* @argv: Second input char
*
* Description: Program that prints its name followed by a new line
* Return: 0
*/
int main(int argc, char *argv[])
{
int x;
for (x = 0; x < argc; x++)
{
printf("%s\n" argv[x]);
}
return (0);
}
