#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
<<<<<<< HEAD
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
=======
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
}
