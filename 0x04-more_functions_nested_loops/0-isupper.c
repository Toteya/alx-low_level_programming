/**
 * _isupper - Checks if a character is uppercase
 * @c: The character whose case is to be checked
 *
 * Return: if uppercase, 1.
 * otherwise returns 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
