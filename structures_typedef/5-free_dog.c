#include <stdlib.h>
#include "dog.h"
/**
 *free_dog - Fun
 *@d: pointer to dog_t
 *Return: dog_t
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}

