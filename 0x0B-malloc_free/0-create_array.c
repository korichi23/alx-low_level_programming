#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function
 * @size:par1
 * @c:par2
 * Return:pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr, temp;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	temp = ptr;
	while (*ptr)
	{
		*ptr = c;
		ptr++;
	}
	return (temp);
}
