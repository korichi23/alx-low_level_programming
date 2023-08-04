#include <stdio.d>
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
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
