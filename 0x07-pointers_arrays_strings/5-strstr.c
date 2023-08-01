#include "main.h"
#include <stdio.h>
/**
 * _strstr - function
 * @haystack:first par
 * @needle: second par
 * Return:pointer to the beginning of the located substring
 */
int compare(char *X, char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
			return (0);
		++X;
		++Y;
	}
	return (*Y == '\0');
}
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle && compare(haystack, needle))
			return (haystack);
		++haystack;
	}
	return (NULL);
}
