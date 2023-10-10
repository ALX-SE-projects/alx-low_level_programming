#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - get length of a string.
 * Return: int
 * @s: pointer to string to calc its length
 */
int _strlen(char *s)
{
	int len, idx;

	len = 0;
	idx = 0;
	while (1)
	{
		if (*(s + idx) != '\0')
		{
			len++;
			idx++;
		}
		else
		{
			return (len);
		}
	}
}
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

	if (d == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (d->name == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (d->owner == NULL)
	{
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->owner = strcpy(d->owner, owner);
	return (d);
}
