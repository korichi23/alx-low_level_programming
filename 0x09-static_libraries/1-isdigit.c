#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - function
 * Descreption:checks for a digit
 * @c: parameter
 * Return:1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
