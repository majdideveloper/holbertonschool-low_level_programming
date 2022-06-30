#include <unistd.h>
#include "dog.h"
/**
 *init_dog - Function init value of struct dog
 *@d: pointer to struct dog
 *@name: pointer to char
 *@age: float
 *@owner: pointer to char
 *Return: Nothing
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
