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
	if (d == NULL)
		printf("nil\n");
	if (!(d->name))
		printf("Name: nil\n");
	if (!(d->owner))
		printf("Name: nil\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
