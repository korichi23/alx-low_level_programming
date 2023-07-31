#include "main.h"
/**
 * print_diagsums - function
 * @a:first par
 * @size:second par
 * Return:void function
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{  
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i][j];
			if ((j - i) == (size - 1 - (2 * i)))
				sum2 += a[i][j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}	
