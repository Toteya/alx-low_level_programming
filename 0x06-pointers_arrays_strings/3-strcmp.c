/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string to be compared
 * @s2: Pointer to the second string to be compared
 *
 * Return: If s1 and s2 are equal, 0,
 * otherwise 1 if s1 is greater than s2,
 * and -1 if s2 is greater than s1.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		cmp = *(s1 + i) - *(s2 + i);
		if (cmp == 0)
		{
			i++;
			continue;
		}
		else
			break;
	}
	return (cmp);
}
