#include "main.h"
/**
 * more_numbers - function
 * Descreption: prints 10 times the numbers
 *  from 0 to 14
 * Return:void function
 */
void more_numbers(void)
{
	int d = 0;
	int i;

	for (i = 0; i < 10; i++)
	{
		d = 0;
		while (d <= 14)
		{
			if (d > 9)
				_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			d++;
		}
		_putchar('\n');
	}
}
