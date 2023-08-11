#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function
 * @ptr:par1
 * @old_size:par2
 * @new_size:par3
 * Return:pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *tmp;
	unsigned int copy_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	tmp = malloc(new_size);
	if (tmp == NULL)
		return (NULL);
	copy_size = old_size < new_size ? old_size : new_size;
	memcpy(tmp, ptr, copy_size);
	free(ptr);
	return (tmp);
}
