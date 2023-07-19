#include <stdio.h>
#include "main.h"
/**
 * times_table - function
 * Descreption:prints the 9 times table, starting with 0
 * Return:void fuction
 */
void times_table(void)
{
	int i = 0, j = 0;
	int d = 0;

	for (i = 0; i <= 9; i++)
	{
		d = 0;
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			d += i;
			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + 48);
			_putchar((d % 10) + 48);
		}
		_putchar('$');
		_putchar('\n');
	}
}

