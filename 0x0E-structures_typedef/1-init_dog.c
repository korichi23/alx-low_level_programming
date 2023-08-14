#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function
 * @d:par1
 * @name:par2
 * @age:par3
 * @owner:par4
 * Return:void function
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
