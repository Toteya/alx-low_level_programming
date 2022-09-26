/**
 * _strstr - Locates the first occurence of a given substring in a string
 * @haystack: Pointer to the string in which to search for the substring
 * @needle: Pointer to a substring to for which to search in haystack
 *
 * Return: Pointer to the address of the beginning of the located substring,
 * otherwise, if no matches are found, return 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	int found = 0;
	char *f = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
		{
			if (!found)
				f = &haystack[i];
			j++;
			found = 1;
		}
		else if (found)
		{
			j = 0;
			found = 0;
		}
		if (needle[j] == '\0' && found)
		{
			break;
		}
	}
	if (!found)
		*f = 0;
	return (f);
}
