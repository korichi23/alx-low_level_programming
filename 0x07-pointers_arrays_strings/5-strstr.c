#include "main.h"
#include <stdio.h>
/**
 * _strstr - function
 * @haystack:first par
 * @needle: second par
 * Return:pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int *temp1 = NULL, temp2 = needle;

	while (*haystack)
	{

