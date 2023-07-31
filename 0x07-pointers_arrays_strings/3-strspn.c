#include "main.h"
#include <stdio.h>
/**
 * _strspn - function
 * @s:first par
 * @accept:second par
 * Return:number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int match = 0;
	char *tmp = accept;

	while (*s)
	{
		accept = tmp;
		while (*accept)
		{
			if (*s == *accept)
			{
				++n;
				match = 1;
				break;
			}
			++accept;
		}
		if (!match)
			break;
		++s;
	}
	return (n);
}
