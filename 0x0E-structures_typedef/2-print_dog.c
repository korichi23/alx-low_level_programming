#include "dog.h"
/**
 * print_dog - function
 * @d:par
 * Return:void function
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
		{
			 printf("Name: %s\n", d->name);
			 printf("Name: %f\n", d->age);
			 printf("Name: %s\n", d->owner);
		}
	}
}
