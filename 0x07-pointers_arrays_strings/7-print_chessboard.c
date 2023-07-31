#include "main.h"
#include <string.h>
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
			printf("%c", *a[i]);
			++a[i];
		}
		printf("\n");
	}
}
