#include "main.h"

/**
 * _strdup - Allocates memory and copies into it a given string
 * @str: The string to be copied
 *
 * Return: Pointer to the new string.
 */
char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str) + 1;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++, str++)
	{
		s[i] = *str;
	}
	return (s);
}
