#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d:the dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog's owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
