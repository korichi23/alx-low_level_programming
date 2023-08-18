#include "function_pointers.h"
/**
 * int_index - function
 * @array:par1
 * @size:par2
 * @cmp:par3
 * Return:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (!array || !cmp || size <= 0)
		return (-1);
	int i;
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
