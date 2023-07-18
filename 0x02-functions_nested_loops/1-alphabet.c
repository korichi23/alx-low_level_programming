#include "main.h"

/**
 * print_alphabet - function
 * Descreption:prints the alphabet, in lowercase
 * Return: void function
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
