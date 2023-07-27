#include "main.h"
/**
 * leet - function
 * Descreption: encodes a string into 1337
 * @str:par
 * Return:encoded string
 */
char *leet(char *str)
{
	char ch[] = {'a', 'e', 'o', 't', 'l'};
	char  key[] = {'4', '3', '0', '7', '1'};
	int i;
	char *tmp = str;

	while (*str)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*str == ch[i] || *str == ch[i] - 32)
			{
				*str = key[i];
				break;
			}
		}
		++str;
	}
	return (tmp);
}
