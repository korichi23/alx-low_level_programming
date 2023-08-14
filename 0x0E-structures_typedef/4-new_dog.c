#include "dog.h"
#include <stdlib.h>
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
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
