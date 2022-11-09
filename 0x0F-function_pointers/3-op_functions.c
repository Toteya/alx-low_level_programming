#include "3-calc.h"

/**
 * op_add - Adds two integers and returns the sum.
 * @a: The first number to be added
 * @b: The second number to be added
 *
 * Return: The sum of a and b;
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts one integer from another and returns the difference
 * @a: The number from which to subtract
 * @b: The number to subtract from a.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers together and returns the product.
 * @a: The first number to be multiplied
 * @b: The second number to be multiplied
 *
 * Return: The product of a and b;
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides one integer by another and returns the result
 * @a: The number to be divided.
 * @b: The number by which to divide a.
 *
 * Return: Integer result of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of a division operation of two integers
 * @a: The number to be divided
 * @b: The number by which to divide a.
 *
 * Return: The remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
