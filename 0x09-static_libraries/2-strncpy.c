#include "main.h"
/**
 * _strncpy - function
 * Descreption:copies a string
 * @dest:first par
 * @src:second par
 * @n:third par
 * Return:pointere to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; i < n &&  src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
