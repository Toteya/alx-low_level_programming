#include "main.h"

/**
 * strtow - Seprates the words in a string
 * @str: The string whose words are to be seperated
 *
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	unsigned int i, size = 0, count = 1, x = 0, y;
	int word;
	char **ptr;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && word == 0)
		{
			size++;
			word = 1;
		}
		else if (str[i] == ' ')
			word = 0;
	}
	ptr = malloc(sizeof(char *) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			count++;
		if (str[i] == ' ' && count > 1)
		{
			ptr[x] = malloc(sizeof(char) * (count + 1));
			if (ptr[x] == NULL)
				return (NULL);
			for (y = 0; y < count; y++)
				ptr[x][y] = str[i - count + 1 + y];
			ptr[x][y] = '\0';
			x++;
			count = 1;
		}
	}
	if (count > 1)
	{
		ptr[x] = malloc(sizeof(char) * (count + 1));
		if (ptr[x] == NULL)
			return (NULL);
		for (y = 0; y < count; y++)
			ptr[x][y] = str[i - count + 1 + y];
		ptr[x][y] = '\0';
		x++;
	}
	ptr[x] = NULL;
	return (ptr);
}
