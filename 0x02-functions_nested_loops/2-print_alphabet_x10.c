#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 * Descreption: prints 10 times the alphabet
 * in lowercase
 * Return: viud function
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
