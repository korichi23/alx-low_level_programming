#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function
 * @name:par1
 * @age:par2
 * @owner:par3
 * Return:pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);
	dog_t *Ndog;

	Ndog =  malloc(sizeof(dog_t));
	if (Ndog)
		return (NULL);

	Ndog->name = strdup(name);
	if (Ndog->name == NULL)
	{
		free(Ndog->name);
		return (NULL);
	}
	Ndog->age = age;
	Ndog->owner = strdup(owner);
	if (Ndog->owner)
	{
		free(Ndog->owner);
		return (NULL);
	}
	return (Ndog);
}
