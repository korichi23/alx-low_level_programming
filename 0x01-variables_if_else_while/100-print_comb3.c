#include <stdio.h>
/**
 * main- entry point
 * Descreption:prints all possible different
 * combinations of two digits.
 * Return: always 1(success)
 */
int main(void)
{
	int d1 = 48, d2;

	while (d1 < 57)
	{
		d2 = d1 + 1;
		while (d2 < 58)
		{
			if (d1 != d2)
			{
				putchar(d1);
				putchar(d2);
				if (d1 != 56 || d2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
