#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.c>
/**
 * main - entry point
 * @argc:par1
 * @argv:par2
 * Return:0 for success
 */
int main(int argc, char **argv)
{
	int n1, n2;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
