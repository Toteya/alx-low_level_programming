#include "dog.h"

/**
 * new_dog - Creates a new dog instance
 * @name: string name of the dog
 * @age: integer age of the dog
 * @owner: string owner of the dog
 * Return: Pointer to the new variable dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	dog_t *d = &dog;

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
