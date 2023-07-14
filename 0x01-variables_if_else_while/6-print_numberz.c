#include <stdio.h>
/**
 * main- entry point
 * Descreption: print digits with putchar
 * Return: always 0 for successful excution
 */
int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

