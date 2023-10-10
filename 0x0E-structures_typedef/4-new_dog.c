#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * Return: dog_t
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t *) malloc(sizeof(dog_t));

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
