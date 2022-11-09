#include "3-calc.h"

/**
 * get_op_func - Selects the correct function based on the passed operator
 * @s: pointer to the operator character
 * 
 * Return: Pointer to a function to perform the operation.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].f != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return NULL;
}
