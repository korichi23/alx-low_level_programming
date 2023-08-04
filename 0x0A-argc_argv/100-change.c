#include <stdio.h>
#include <ctype.h>
/**
 * main - entry point
 * @argc:par1
 * @argv:par2
 * Return: 0 fot success
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int charge = atoi(argv[1]), i;
	int coins[] = {25, 10, 5, 2, 1};
	int sum = 0;

	if (charge > 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (charge >= coins[i])
			sum++;
	}
	printf("%d\n", sum);
}
