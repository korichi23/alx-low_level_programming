#include <stdio.h>
/**
 * main - entry point
 *Descreption: prints all the numbers of base 16 in lowercase
 *Return: always 0 for successful excution
 */
int main(void)
{
	int d = 48;

	char ch = 'a';

	while (d <= 57)
	{
		putchar(d);
		d++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}


