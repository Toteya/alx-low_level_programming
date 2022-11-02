#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog instance
 * @name: string name of the dog
 * @age: integer age of the dog
 * @owner: string owner of the dog
 * Return: Pointer to the new variable dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
