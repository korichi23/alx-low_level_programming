#include "main.h"
/**
 * _strpbrk - function
 * @s:first par
 * @accept:second par
 * Return:pointer to the byte in s
 * that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int match = 0;
	char *tmp = accept;

	while(*s)
	{
		accept = tmp;
		while (*accept)
		{
			if(*s == *accept)
				return (s);
			++accept;
		}
		++s;
	}
	return (0);
}
