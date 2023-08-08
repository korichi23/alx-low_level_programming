#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function
 * @str:par
 * Return:a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *s, *temp;

	s = (char *)malloc(sizeof(char) *(strlen(str) + 1));
	if (!s)
		return (NULL);
	temp = str;
	while (*str)
	{
		*s = *str;
		str++;
		s++;
	}
	*s = '\0';
	return (temp);
}
