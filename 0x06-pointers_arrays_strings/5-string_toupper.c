#include "main.h"
/**
 * string_toupper - function
 * Descreption:changes all lowercase letters of a string to uppercase
 * @str:string par
 * Return:string with uppercase
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*str)
	{
		if (*str >= 97)
			*str -= 32;
		++str;
	}
	return (temp);
}
