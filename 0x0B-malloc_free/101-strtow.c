#include "main.h"
#include <stdlib.h>
/**
 * strtow - function
 * @str:par
 * Return:pointer
 */
char **strtow(char *str)
{
	char **s;
	int i = 0;

	if (str == NULL || str == "")
		retutn (NULL);
	s = (char **)malloc(strlen(str) + 1);
	if (s == NULL)
		return (NULL);
	while(str != '\0')
	{
		while(*str != " ")
		{
			s[i] = *str;
			++str;
		}
		s[i] += '\0';
		i++;
		++str;
	}
	s[i] += 0;
	return (s);
}
