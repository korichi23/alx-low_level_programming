#include <stdio.h>
/**
 * main - Entry point
 * Descreption: print the alphabet in lowercase, and then in uppercase
 * Return: always 0 for successful excution
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
