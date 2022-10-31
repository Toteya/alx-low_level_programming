#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: Pointer to first string to be concatenated
 * @s2: Pointer to second string to be concatenated
 * @n: The first number of bytes of s2 to be concatenated to s1
 * Return: Pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size_1 = 0, size_2 = 0;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		size_1++;
	for (i = 0; s2[i] != '\0' && i < n; i++)
		size_2++;
	ptr = malloc(sizeof(char) * (size_1 + size_2 + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (i = 0; i < size_2; i++)
		ptr[i + size_1] = s2[i];
	ptr[i + size_1] = '\0';
	return (ptr);
}
