#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int i, j, k;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;

	newdog->name = malloc(sizeof(i + 1));
	newdog->owner = malloc(sizeof(j + 1));

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
		newdog->name[k] = name[k];
	newdog->name[k] = '\0';

	newdog->age = age;

	for (k = 0; k < j; k++)
		newdog->owner[k] = owner[k];
	newdog->owner[k] = '\0';

	return (newdog);
}
