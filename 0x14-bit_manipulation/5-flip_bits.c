#include "main.h"
/**
 * flip_bit - return # required bits to get the 
 * other number
 * @n:first num
 * @m:second num
 * Return: unsigned int
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, d;
	int bits = sizeof(n) * 8;

	d = n ^ m;
	while (bits)
	{
		if (d & 1L << --bits)
			count++;
	}
	return (count);
}
