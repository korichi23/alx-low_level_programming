#include "main.h"
#include <stddef.h>
/**
 * _strchr - function
 * @s:first par
 * @c:second par
 * Return:pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	char *tmp = NULL;

	while (*s)
	{
		if (*s == c)
		{
			tmp = s;
			break;
		}
		++s;
	}
	return (tmp);
}
