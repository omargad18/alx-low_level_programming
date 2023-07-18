#include "dog.h"
#include <stdio.h>

/**
 * _strlen - function get length of string
 * @st: string to get length
 * Return: length of @st
*/

int strlen(const char *str)
{
	int length = 0;

	while (*st++)
		length++
	return (length);
}

/**
 * strcpy - function that return @loc with copy of string from @src
 *
 * @src: string to copy
 * @loc: location to copy in
 *
 * Return: @loc
*/

char *_strcpy(char *loc, char *src)
{
	int i;

	for(i = 0; src[i]; i++)
		loc[i] = src[i];
	loc[i] = '\0';

	return (loc);
}

/**
 * new_dog - function that create new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: struct pointer dog
 * Null if function fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if(!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
