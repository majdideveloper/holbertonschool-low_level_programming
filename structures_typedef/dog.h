#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog
 * @name: name dog
 * @age: age dog
 * @owner: owner of the dog
 *
 * Description: struct of dog
 */
struct dog
{

	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
