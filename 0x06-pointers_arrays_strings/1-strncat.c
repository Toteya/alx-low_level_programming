/**
 * _strncat - Concatenates two strings
 * @dest: Pointer to the string to which the second string is to be
 * concatenated to.
 * @src: Pointer to the second string which is to be concatenated
 * to the first string.
 * @n: the number of bytes from the src to be concatenated to dest.
 * Return: char *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int d_len;


	while (*(dest + i) != '\0')
	{
		i++;
	}
	d_len = i;
	for (i = 0; i < n; i++)
	{
		*(dest + d_len + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
