#include "main.h"
#include <stdlib.h>
/**
 * array_range - function
 * @min:par1
 * @max:par2
 * Return:pointer
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len = max - min + 1;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i >= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}	
