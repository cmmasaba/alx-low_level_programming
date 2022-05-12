#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: is a pointer to the struct dog
 *
 * if an element of d is null, print nil
 * if d is null print nil
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Name: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
