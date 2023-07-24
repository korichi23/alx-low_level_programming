#include "main.h"
/**
 * puts2 - function
 * Descreption: prints every other character of a string
 * @str:par
 * Return: void function
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
