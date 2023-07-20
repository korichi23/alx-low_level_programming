#include "main.h"
/**
 * print_line - function
 * Descreption:draws a straight line
 * @n: parameter
 * Return: void function
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
