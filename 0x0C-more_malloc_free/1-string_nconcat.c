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
	int len1 = strlen(s1), len2 = strlen(s2);

	if (n > len2)
		n = len2;
	str = (char *)malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	strncat(str, s1, len1);
	strncat(str, s2, n);
	str[len1 + n] = '\0';
	return (str);
}
