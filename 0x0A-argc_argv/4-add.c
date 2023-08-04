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
        int i,  sum = 0;

        if (argc == 1)
	{
                printf("0\n");
                return (0);
	}
        else
        {       
                for (i = 0; i < argc; i++)
                {       
                        if (!isdigit(argv[i]))
                        {
                                printf("Error\n");
                                return (1);
                        }       
                        sum += atoi(argv[i]);
                }       
        }
        printf("%d\n", sum);
        return (0);
}
