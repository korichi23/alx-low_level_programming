#include "main.h"
/**
 * cap_string - function
 * Descreption:capitalizes all words of a string
 * @str:string par
 * Return:string value
 */
char *cap_string(char *str)
{
	char sep[] = {' ', '\t', '\n', '\"', '.', ',', '{'
		, '}', '(', ')', '!', '?', ';'};
	int i;
	char *tmp = str;

	while (*str)
	{
		for (i = 0; i < sizeof(sep) / sizeof(char); i++)
		{
			if (*str == sep[i])
			{
				++str;
				if (*str >= 97 && *str <= 122)
					*str -= 32;
			}
		}
		++str;
	}
	return (tmp);
}
