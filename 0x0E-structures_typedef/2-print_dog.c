#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
<<<<<<< HEAD
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
=======
if (d)
{
if (!(d->name))
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

printf("Age: %f\n", d->age);

if (!(d->owner))
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
}
