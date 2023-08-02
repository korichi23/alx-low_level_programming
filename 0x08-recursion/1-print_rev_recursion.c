#include "main.h"
/**
 * _print_rev_recursion- function
 * Descreption:prints a string in reverse
 * @s:first par
 * Return:void function
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion((s + 1));
	_putchar(*s);
}
