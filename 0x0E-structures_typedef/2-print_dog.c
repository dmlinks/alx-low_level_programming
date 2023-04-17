#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->age < 0)
		printf("(nil)\n");
	else
		printf("%.6f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
