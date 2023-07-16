#include <stdio.h>
/**
 * main -entry point
 * Descreption: print error message
 * Return: it returns always 1
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fprintf(stderr, str);
	return (1);
}
