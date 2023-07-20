#include "main.h"
/**
 * print_triangle - function
 * Descreption:prints a triangle
 * @size:size of the triangle
 * Return: void function
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= ((size - 1) - i))
					_putchar('#');
				else
					_putchar(' ');
			}
			if (i != (size - 1))
				_putchar('\n');
		}
	}
	_putchar('\n');
}
