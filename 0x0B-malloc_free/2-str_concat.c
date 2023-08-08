#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function
 * @s1:par1
 * @s2:par2
 * Return:pinter
 */
char *str_concat(char *s1, char *s2)
{
	char *str, *temp;
	int len;

	len = strlen(s1) + strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	temp = str;
	while (s1 != NULL)
	{
		*str = *s1;
		str++;
		s1++;
	}
	while (s2 != NULL)
	{
		*str = *s2;
		str++;
		s2++;
	}
	*str = '\0';
	return (temp);
}
