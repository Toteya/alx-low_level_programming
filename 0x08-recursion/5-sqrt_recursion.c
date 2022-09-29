/**
 * is_root - checks if the second argument is the natural root of
 * the first argument
 * @x: A number whose root is to be determined
 * @y: A possible root of x
 * Return: y, if y is a natural root of x.
 * otherwise return -1, or recur...
 */
int is_root(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y > x)
		return (-1);
	else
		return (is_root(x, y + 1));
}
/**
 * _sqrt_recursion - Finds and returns the natural square root of any
 * @n: An integer whose square root is to be determined
 *
 * Return: The natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int x = n;
	int y = 1;

	return (is_root(x, y));
}
