#include "main.h"
/**
 * _strcmp - function
 * Descreption:compares two strings
 * @s1:firstpar
 * @s2:second par
 * Return : 0 if s1 =s2
 * positive if s1>s2
 * negative:if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	int equal = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			equal = (int)*s1 - (int)*s2;
			break;
		}
		++s1;
		++s2;
	}
	return (equal);
}
