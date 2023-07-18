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
	int d = 48;

	for(i = 0; i <= 9; i++)
	{
		d = 48;
		for(j = 0; j <=9; j++)
		{
			_putchar(d + i);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('$');
		_putchar('\n');
	}
}

