/**
 * _memcpy - Copies a given number of bytes from a memory area
 * to another memory area
 * @dest: Pointer to a destination memory address to which to copy the bytes
 * @src: Pointer to a source memory area from which to copy
 * @n: The number bytes to copy
 *
 * Return: pointer to the buffer with copied information
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
