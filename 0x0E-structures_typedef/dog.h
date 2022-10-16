#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Data type definition for a dog
 * @name: Pointer to  string name of the dog
 * @age: Float age of the dog
 * @owner: Pointer to string owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
