#include "function_pointers.h"

/**
 * print_name - Prints a name according to the function passed
 * @f: Pointer to a function that prints a name
 * @name: Pointer to string name to be printed
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
