#include <stdio.h>
/**
 * main- entry point
 * Descreption: prints all possible combinations of digits
 * Return: always 0 for successful excution
 */
int main(void)
{
	int d = 48;

	while (d <= 57)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
			ch++;
		}
	}
	return (0);
}
