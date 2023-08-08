#include "main.h"
#include <sdlib.h>
/**
 * alloc_grid - function
 * @width:par1
 * @height:par2
 * Return:pointer
 */
int **alloc_grid(int width, int height)
{
	int **str, **temp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	str = (int **)malloc(sizeof(int) * height);
	if (!str)
		return (NULL);
	for (i = 0; i < height, i++)
	{
		str[i] = (int *)malloc(sizeof(int) * width);
		if (!str[i])
		{
			for (j = 0; j < i; j++)
				free(str[j]);
			free(str);
			return (NULL);
		}
	}
	for (i = 0; i < height, i++)
	{
		for (j = 0; j < i; j++)
			str[i][j] = 0;
	}
	return (temp);
}
