#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - Concatenates all the arguments
* @ac: Firts input int
* @av: Secong input chart
*
* Description: Function thatconcatenates all the arguments
* Return: null or 0
*/
char *argstostr(int ac, char **av)
{
int x = 0, y = 0, z = 0;
char *conc = NULL;
char *conct = NULL;

if (ac == 0)
return (NULL);
if (av == NULL)
return (NULL);

for (; x < ac; x++)
for (y = 0; av[x][y]; y++)
z++;

conc = (char *) malloc((z + ac + 1) * sizeof(char));
conct = conc;

if (conc == NULL)
return (NULL);

for (; x < ac; x++)
{
while (*av[x])
{
*conc++ = *(av[x]++);
}
*conc++ = '\n';
}

return (conct);
}
