#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function
 * @b:par
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
