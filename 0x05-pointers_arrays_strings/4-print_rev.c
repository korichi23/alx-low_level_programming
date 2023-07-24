#include "main.h"
/**
 * print_rev - function
 * Descreption:prints a string, in reverse
 * @s:par
 * Return: void function
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
