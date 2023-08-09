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
	char *str;
	size_t len1, len2;

	len1 = (s1 != NULL) ? strlen(s1) : 0;
	len2 = (s2 != NULL) ? strlen(s2) : 0;
	str = (char *)malloc(len1 + len2 + 1);
	if (!str)
		return (NULL);
	if (s1 != NULL)
		strcat(str, s1);
	if (s2 != NULL)
		strcat(str, s2);
	return (str);
}
