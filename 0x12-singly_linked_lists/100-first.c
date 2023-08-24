#include <stdio.h>
/**
 * my_constructor - print before main
 * Return:void
 */
void my_constructor(void) __attribute__((constructor));

void my_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
