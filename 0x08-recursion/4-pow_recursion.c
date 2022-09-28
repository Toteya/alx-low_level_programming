/**
 * _pow_recursion - Finds the value of x raised to the power of y
 * @x: The base
 * @y: The exponent
 *
 * Return: the result of x raised to power of y,
 * Otherwise if y is less than zero, return -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
