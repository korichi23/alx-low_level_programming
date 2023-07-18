#include <stdio.h>
#include "main.h"
#include <stdlib>
/**
 * print_last_digit - function
 * Descreption: prints the last digit of a number
 * @n: the used parameter
 * Return:last digit of n
 */
int print_last_digit(int n)
{
	int n1 = abs(n % 10);

	_putchar(n1 + '0');
	return (n1);
}
