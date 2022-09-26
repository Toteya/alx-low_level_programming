/**
 * set_string - Sets the value of a pointer to a char
 * @s: double-pointer pointing to a pointer that points to value to be changed
 * @to: pointer to the string to which the value of s is to be set to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
