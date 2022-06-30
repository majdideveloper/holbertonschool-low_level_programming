#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - Fun
 *@name: pointer to char
 *@age: float
 *@owner: pointer to char
 *Return: dog_t
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (!d)
		return (NULL);
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	
	return (d);
	free(d);
}
