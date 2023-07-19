#include "main.h"
#include <string.h>
/**
 * print_to_98 -function
 * Descreption:prints all natural numbers from n to 98
 * @n: the parameter
 * Return: void function
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		int temp = n, i = 0, j = 0;
		int nums[100];
		while(temp > 10)
		{
			nums[i] = temp % 10;
			temp /= 10;
			i++;
		}
		nums[i] = temp;
		for (j = strlen(nums); j <= 0; j--)
		{
			_putchar(nums[j]);
			_putchar(',');
			_putchar(' ');
		}
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
