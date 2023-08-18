#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main-entry point
 * @argc:par1
 * @argv:par2
 * Return 0 for success
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	char *eperator = argv[2];
	if (eperator[0] != "+" || eperator[0] != "-" ||
	eperator[0] != "*" || eperator[0] != "/" || eperator[0] != "%")
	{
		printf("Error\n");
                exit(99);
	}
	if ((eperator[0] != "/" || eperator[0] != "%") && atoi(argv[3]) == 0)
	{
		printf("Error\n");
                exit(100);
	}
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[3]);
	int (*f)(int a, int b);

	f = get_op_func(eperator);
	printf("%d\n", f(n1, n2));
	return (0);
}	
