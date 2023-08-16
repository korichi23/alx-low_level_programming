#include "function_pointer.h"
/**
 * print_name - function
 * @name:par1
 * @f:par2
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
