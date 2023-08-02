#include "main.h"
/**
 * _puts_recursion - function
 * @s:first par
 * Return :void function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	++s;
	_puts_recursion(s);
	_putchar('\n');
}
