/**
 * _strncpy - Copies a number of bytes of one string to another
 * @dest: Pointer to which the string is to copied to
 * @src: Pointer to the string from which the string is to be copied
 * @n: The number of bytes to copied from src
 * Return: character to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
