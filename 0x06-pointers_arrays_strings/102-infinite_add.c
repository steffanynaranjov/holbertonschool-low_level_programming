#include <stdio.h>
#include <stdio.h>
/**
* infinite_add - Adds two numbers
* @n1: First input pointer
* @n2: Second input pointer
* @r: Buffer that the function will use to store the result
* @size_r: Buffer size
*
* Description: Adds two numbers
* Return: char
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x = 0, y = 0, z = 0, s1, s2, sum, w, res = 0, rev;

while (n1[x] != 0)
x++;
while (n2[y] != 0)
y++;
if (x > size_r - 2 || y > size_r - 2)
return (0);
x--, y--;
while (x >= 0 || y >= 0)
{
s1 = (x >= 0) ? (n1[x--] - '0') : 0;
s2 = (y >= 0) ? (n2[y--] - '0') : 0;
sum = s1 + s2 + res;
w = (sum > 9) ? sum % 10 : sum;
res = (sum > 9) ? 1 : 0;
r[z] = w + '0';
z++;
}
(res == 1) ? r[z++] = 1 + '0' : '\0';
for (x = z; x > 0 && y < x; x--, y++)
{
rev = r[y];
r[y] = r[x];
r[x] = rev;
}
r[z] = 0;
return (r);
}
