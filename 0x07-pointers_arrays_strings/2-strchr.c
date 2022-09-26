/**
 * _strchr - Locates a given character in a string
 * @s: Pointer to a string in which to find the character
 * @c: The character to be located a the string
 *
 * Return: Pointer to the memory address containing the first occurence of c.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
