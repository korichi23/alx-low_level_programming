#include <stdio.h>
/**
 * main - entry point
 * @argc:par1
 * @argv:par2
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}	
