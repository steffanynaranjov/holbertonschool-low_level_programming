#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - Frees grid
* @grid: Firts input int
* @height: Secong input int
*
* Description: function that frees grid
* Return: Empty value
*/
void free_grid(int **grid, int height)
{
int x = 0;

while (x < height)
free(*(grid + x++));

free(grid);
}
