/**
 * _strncpy - Copies a number of bytes of one string to another
 * @dest: Pointer to the destination string to which a string is to copied
 * @src: Pointer to the source string from which the string is to be copied
 * @n: The number of bytes to copied from src
 * Return: character to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	for ( ; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
