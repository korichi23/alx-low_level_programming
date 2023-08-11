#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.c>
/**
 * main - entry point
 * Return:0 for success
 */
int main(int argc, char **agrv)
{
	int n1, n2;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!isdigit(argv[1]) || !isdigit(argv[2]))
	{
		printf("Error\n");
                exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	return (0);
}
