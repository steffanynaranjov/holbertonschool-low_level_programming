#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* str_concat - Concatenates two strings
* @s1: Firts input char
* @s2: Secong input char
*
* Description: function that concatenates two strings
* Return: null or 0
*/
char *str_concat(char *s1, char *s2)
{
unsigned int conts1 = 0, conts2 = 0;
unsigned int x = 0;
char *s = NULL;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[conts1])
conts1++;

while (s2[conts2])
conts2++;

s = (char *) malloc(((conts1 + conts2) +1) * sizeof(char));

if (s == NULL)
return (s);

while (x < conts1)
s[x++] = *s1++;

while (x < (conts1 + conts2))
s[x++] = *s2++;

s[x] = '\0';
return (s);
}
