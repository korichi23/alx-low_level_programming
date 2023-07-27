#include <unistd.h>
#include "main.h"
/**
 * _putchar - function
 * Descreption: writes the character c to stdout
 * @c: the character to print
 * Return: On success 1
 * ON error -1
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
