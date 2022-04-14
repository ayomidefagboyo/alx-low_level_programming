ø#include "3-calc.h"
/**
 * get_op_func - find the correct function to use.
 * @s: the string that holds the operator.
 * Return: return a pointer to the function that coincies with the operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		++i;
	}
	return (ops[i].f);
}
