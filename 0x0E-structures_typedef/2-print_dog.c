#include "dog.h"
/**
 * print_dog - function
 * @d:par
 * Return:void function
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Name: %f\n", d->age);
		printf("Name: %s\n", d->owner ? d->owner : "(nil)");
	}
}
