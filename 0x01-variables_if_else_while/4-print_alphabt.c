#include <stdio.h>
/**
 * main- Entry point
 * Descreption: print the alphabet except q,e
 * Return: always 0 for successful exuction
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z' && ch != 'q' && ch != 'e')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
