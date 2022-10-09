#include "main.h"

/**
 * argstostr - Concatenates all string arguments passed to main()
 * @ac: Number of string arguments passed to the program.
 * @av: Pointer to array of string arguments supplied to main
 *
 * Return: Pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	str = malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
