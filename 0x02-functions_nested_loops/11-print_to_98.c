#include "main.h"
#include <string.h>
/**
 * print_to_98 -function
 * Descreption:prints all natural numbers from n to 98
 * @n: the parameter
 * Return: void function
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	puts("98\n");
}
