#include "main.h"
/**
 * _memset - function
 * @s:first par
 * @b:second par
 * @n:third par
 * Return:pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp;

	while (n--)
	{
		*s = b;
		++s;
	}
	return (temp);
}
