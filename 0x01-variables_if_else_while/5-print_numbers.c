#include <stdio.h>
/**
 * main - entry point
 * Descreption:  prints all single digit numbers of base 10
 * Return: always 0 for successful excution
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	putchar('\n');
	return (0);
}
