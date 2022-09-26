/**
 * _memset - Fills given memory with a given constant byte
 * @s: pointer to the memory area
 * @b: a byte to fill the memory area
 * @n: first number of bytes to filled by b
 * Return: pointer to the memory area as filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
