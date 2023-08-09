#include "main.h"
#include <stdlib.h>
/**
 * argstostr- function
 * @ac:par1
 * @av:par2
 * Return:pointer
 */
char *argstostr(int ac, char **av)
{
	cha **str;
	int i;

	if(ac == 0 || av == NULL)
		return (NULL);
	str = (char **)malloc(sizeof(av) + ac);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
		str[i] += '\n';
	}
	return (str);
}
