#include "main.h"
/**
 * puts_half - function
 * Descreption:prints half of a string
 * @str:par
 * Return:void finction
 */
void puts_half(char *str)
{
	int n, i;

	if (_strlen(str) % 2 != 0)
		n = (_strlen(str) - 1) / 2;
	else
		n = _strlen(str) / 2;
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
