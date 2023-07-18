#include <stdio.h>
#include "main.h"
/**
 * jack_bauer -function
 * Descreption:prints every minute of the day
 * Return: void functiom
 */
void jack_bauer(void)
{
	int h1 = 0, h2 = 0;
	int m1 = 0, m2 = 0;
	int maxh = 9;

	while (h2 < 3)
	{
		if (h2 == 2)
			maxh = 3;
		h1 = 0;
		while (h1 <= maxh)
		{
			m2 = 0;
			while (m2 < 6)
			{
				m1 = 0;
				while (m1 < 10)
				{
					_putchar(h2);
					_putchar(h1);
					_putchar(':');
					_putchar(m2);
					_putchar(m1);
					_putchar('\n');
					m1++;
				}
				m2++;
			}
			h1++;
		}
		h2++;
	}
}
