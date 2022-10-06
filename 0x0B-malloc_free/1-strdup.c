#include "main.h"

/**
 * _strdup - allocate space in memory containing a copy of a
 * string given as a parameter
 * @str: Pointer to a string to be copied
 *
 * Return: Pointer to string,
 * otherwise if str is NULL, return NULL.
 */
char *_strdup(char *str)
{
	char *s;
	int i, size = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}
	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];
	return (s);
}
