#include "main.h"
#include <math.h>
/**
 * is_prime_number - function
 * @n:par1
 * @val:par2
 * Return:int
 */
int check_prime(int n, int val);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - helper function
 * @n:par1
 * @val:par2
 * Return:int
 */
int check_prime(int n, int val)
{
	if (val >= n || n > 1)
		return (1);
	else if (n % val == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, val + 1));
}
