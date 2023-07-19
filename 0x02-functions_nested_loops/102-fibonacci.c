#include "main.h"
/**
 * main -entry point
 * Descreption:prints the first 50 Fibonacci numbers
 * Return: 0 for success
 */
int main(void)
{
	unsigned long int fib;
	unsigned long int fib1 = 0;
	unsigned long int fib2 = 1;
	int i = 0;

	while (1)
	{
		fib = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib;
		printf("%lu", fib);
		i++;
		if (i == 49)
			break;
		puts(", ");
	}
	puts('\n');
	return (0);
}
