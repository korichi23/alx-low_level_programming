#include <stdio.h>
/**
 * _strncat - function
 * Descreption:concatenates two strings
 * @dest:first par
 * @src:second par
 * @n:third par
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; dest[j] != '\0'; j++)
	{
		if (j < n)
			dest[i++] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
