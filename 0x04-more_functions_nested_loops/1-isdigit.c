/**
 * _isdigit - Checks whether a number is a digit
 * @c: The character to be checked
 *
 * Return: if c is a digit, 1.
 * otherwise returns 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
