#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner.
 */
struct dog
{
<<<<<<< HEAD
<<<<<<< HEAD
	char *name;
	float age;
	char *owner;
=======
char *name;
float age;
char *owner;
>>>>>>> d02efbbf3bb133a97e7ec62b98f65e9ec75239c8
=======
char *name;
float age;
char *owner;
>>>>>>> 06a7c2f6ce272f0fc3c42f2810d349f0cae33b98
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
