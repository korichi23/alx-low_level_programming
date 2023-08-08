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
	size_t len;

	len = strlen(str) + 1;
	s = (char *)malloc(sizeof(char) * len);
	if (!s)
		return (NULL);
	temp = s;
	while (*str)
	{
		*s = *str;
		str++;
		s++;
	}
	*s = '\0';
	return (temp);
}
