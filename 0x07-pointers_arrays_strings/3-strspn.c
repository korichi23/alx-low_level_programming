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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}
