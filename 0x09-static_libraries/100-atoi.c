#include "main.h"
/**
 * _atoi - function
 * Descreption:convert a string to an integer
 * @s:par
 * Return:the integer
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;

	if (s[i] == '-')
		sign *= -1;
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= 9)
			num = (num * 10) + (s[i] - '0');
		i++;
	}
	return (num * sign);
}
