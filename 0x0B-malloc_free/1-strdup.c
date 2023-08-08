#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function
 * @str:par
 * Return:a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s, *temp;

	s = (char *)malloc(sizeof(str));
	if (!s)
		return (NULL);
	temp = str;
	while (*str)
	{
		*s = *str;
		str++;
		s++;
	}
	return (temp);
}
