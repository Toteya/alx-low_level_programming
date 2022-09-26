#include <stdio.h>

/**
 * _strpbrk - Locates the first occurrence in a string of any one of the bytes
 * in the given set (string)
 * @s: Pointer to the string in which to search
 * @accept: Pointer to the string of bytes to search for
 *
 * Return: Pointer to the address of the first occurence of a
 * matching byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int found = 0;
	char *ptr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = &s[i];
				found = 1;
				break;
			}
		}
		if (found)
			break;
	}
	return (ptr);
}
