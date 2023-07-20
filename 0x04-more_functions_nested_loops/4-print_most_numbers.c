#incluce "main.h"
/**
 * rint_most_numbers - function
 * Descreption: prints the numbers except 2,4
 * Return: void function
 */
void print_most_numbers(void)
{
	int ch = 48;

	while (ch <= 57)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
