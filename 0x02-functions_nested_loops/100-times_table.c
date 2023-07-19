#include "main.h"
/**
 * print_times_table - function
 * Descreption:prints the n times table, starting with 0
 * @n: the parameter
 * Return:void fuction
 */
void print_times_table(int n)
{
	int i = 0, j = 0;
	int d = 0;

	for (i = 0; i <= n; i++)
	{
		d = 0;
		_putchar(48);
		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');
			d += i;
			if (d <= 99)
				_putchar(' ');
			else
				_putchar((d / 100) + 48);
			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('\n');
	}
}
