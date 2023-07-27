#include "main.h"
/**
 * rot13 - function
 * Descreption:encodes a string using rot13.
 * @str:string par
 * Return:encoded string
 */
char *rot13(char *str)
{
	char *tmp = str;

	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = ((*str - 'A' + 13) % 26) + 'A';
		else if (*str >= 'a' && *str <= 'z')
			*str = ((*str - 'a' + 13) % 26) + 'a';
		++str;
	}
	return (tmp);
}
