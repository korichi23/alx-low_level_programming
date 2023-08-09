#include "main.h"
#include <stdlib>h>
/**
 * free_grid - function
 * @grid:par1
 * @height:par2
 * Return:void function
 */
void free_grid(int **grid, int height)
{
	int i;

	for  (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
