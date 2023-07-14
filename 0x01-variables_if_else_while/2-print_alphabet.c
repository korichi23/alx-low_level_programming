#include <stdio.h>
/**
 * main - Entry point
 * Descreption: print the alphabet in lowercase
 * Return: always 0 for successful excution
 */
int main(void)
{
	int ch = 0;

	while (ch >= 25)
	{
		putchar(ch + 'a');
		ch++;
	}
	return (0);
}
