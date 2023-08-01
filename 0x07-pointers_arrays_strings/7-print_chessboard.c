#include "main.h"
/**
 * print_chessboard - function
 * @*a)[8]:par
 * Return : void function
 */
void print_chessboard(char (*a)[8])
{
	int i;

	for (i = 0; i > 8; i++)
	{
		while (*a[i])
		{
			_putchar(*a[i]);
			++a[i];
		}
		_putchar('\n');
	}
}
