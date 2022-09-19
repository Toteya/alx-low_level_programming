#include <stdio.h>

/**
 * _strlen - Finds the length of a string
 * @s: pointer to string whose length is to be returned
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
