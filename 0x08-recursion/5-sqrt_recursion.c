#include "main.h"
/**
 * _sqrt_recursion - function
 * @n:par
 * Return:int
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
/**
 * square - helper function
 * @n:first par
 * @val:second par
 * Return :int
 *
 */
int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, (val + 1));
	else
		return (-1);
}
