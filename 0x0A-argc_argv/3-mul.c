#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:par1
 * @argv:par2
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);

	printf("%d\n", n1 * n2);
	return (0);
}
