#include <stdio.h>
#include <ctype.h>
/**
 * _isupper -function
 * Descreption:checks for uppercase character
 * @c:parameter
 * Return:1 if c is uppercase
 * 0 otherwise
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
