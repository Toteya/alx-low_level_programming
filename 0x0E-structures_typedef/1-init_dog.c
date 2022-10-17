#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to variable type dog
 * @name: string to be initialised to member - name
 * @age: float to be initialised to member - age
 * @owner: string to be initialised to member - owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
