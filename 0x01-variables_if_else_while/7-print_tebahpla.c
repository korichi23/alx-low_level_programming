#include <stdio.h>
/**
 * main- entry point
 * Descreption:prints the lowercase alphabet in reverse
 * Return:always return  0 for successful excution
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
