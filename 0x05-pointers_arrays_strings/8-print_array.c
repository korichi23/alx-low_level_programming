#include "main.h"
/**
 * print_array - function
 * Descreption: prints n elements of an array
 * @a:first par
 * @n:second par
 * Return: void function
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	_putchar('\n');
}
