#include "main.h"
/**
 * print_number - function
 * Descreption:prints an integer
 * @n: par
 * Return:void function
 */
void print_number(int n)
{
	if (n < 0)
		n = -n;
	if (n > 9)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
