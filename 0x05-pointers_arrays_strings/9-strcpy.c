#include <stdio.h>
/**
 * _strcpy - Copies the string pointed to one pointer to a buffer pointed to
 * by another pointer
 * @dest: Pointer to the buffer to which the string is to be copied
 * @src: Pointer pointing to the string which is to be copied
 *
 * Return: pointer to character buffer (the copie string)
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);
}
