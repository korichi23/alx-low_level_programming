#include "main.h"
/**
 * get_bit - return bit of given index
 * @n:number
 * @index:the index
 * Return:int
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8) || index < 0)
		return (-1);
	return (n >> index & 1);
}
