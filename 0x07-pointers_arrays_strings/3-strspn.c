/**
 * _strspn - Finds the length in bytes of the a prefix substring containing
 * only bytes from a given set (string) of bytes
 * @s: Pointer to a string in which check for the given bytes
 * @accept: pointer to a set string of bytes from which the located bytes must
 * belong to
 * Return: length in bytes of the initial segment of s which contains
 * only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found = 0;
	unsigned int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
			length++;
		else
			break;
	}
	return (length);
}
