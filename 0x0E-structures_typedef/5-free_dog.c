#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
<<<<<<< HEAD
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
=======
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
}
