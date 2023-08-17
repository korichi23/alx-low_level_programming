#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function
 * @separator:par1
 * @n:par2
 * Return:void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	printf("%d", va_arg(ap, int));
	for (i = 1; i < n; i++)
	{
		if (separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	printf("\n");
}
