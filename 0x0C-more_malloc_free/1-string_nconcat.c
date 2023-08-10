#include "main.h"
#include <stdlib.h>
#include  <string.h>
/**
 * string_nconcat - function
 * @s1:par1
 * @s2:par2
 * @n:par3
 * Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len = strlen(s1) + n;

	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str = strncat(s1, s2, n);
	str[len] = '\0';
	return (str);
}
