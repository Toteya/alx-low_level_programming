#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: Pointer to first string to be concatenated
 * @s2: Pointer to second string to be concatenated
 *
 * Return: Pointer to anewly allocated space in memory containin
 * the concatenated string.
 * Otherwsise, return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size = 1;
	char *str;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	size = i + j + 1;
	str = (char *) malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	if (i != 0)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			*str = s1[i];
			str++;
		}
	}
	if (j != 0)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			*str = s2[j];
			str++;
		}
	}
	*str = '\0';
	str -= size - 1;
	return (str);
}
