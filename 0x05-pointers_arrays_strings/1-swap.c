#include "main.h"
/**
 * swap_int - function
 * Descreption:swaps the values of two integers
 * @a:first par
 * @b:second par
 * Return:void function
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
