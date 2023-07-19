#include "main.h"
/**
 * main -entry point
 * Descreption:prints the first 50 Fibonacci numbers
 * Return: 0 for success
 */
int main(void)
{
	 long int fib;
	int fib1 = 0, fib2 = 1;
	int i = 0;

	while (i < 50)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		printf("%ld, ", fib);
		i++;
	}
	puts("\n");
	return (0);
}
