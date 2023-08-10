#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function
 * @nmemb:par1
 * @size:par2
 * Return:pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *temp;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	temp = (char *)ptr;
	for (i = 0; i < nmemb * size; i++)
	{
		temp[i] = 48;
	}
	return (ptr);
}
