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
	while(*s)
	{
		while (*accept)
		{
			if(*s == *accept)
			{
				match = 1;
				break;
			}
			++accept;
		}
		if (match)
			break;
		++s;
	}
	return (s);
}
