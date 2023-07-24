#include "main.h"
/**
 * print_rev - function
 * Descreption:prints a string, in reverse
 * @s:par
 * Return: void function
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
