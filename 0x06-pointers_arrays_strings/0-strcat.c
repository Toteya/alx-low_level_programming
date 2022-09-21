/**
 * _strcat - Concatenates two strings
 * @dest: Pointer pointing to the string to which another is
 * to be concatenated
 * @src: Pointer pointing to the string which is to be concatenated to dest
 *
 * Return: char pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d_len;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	d_len = i;
	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + d_len + i) = *(src + i);
		i++;
	}
	return (dest);
}
