#include "main.h"
/**
 * _memcpy - function
 * @dest: first par
 * @src: second par
 * @n:third par
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*dest = *src;
		++src;
		++dest;
	}
	return (temp);
}
