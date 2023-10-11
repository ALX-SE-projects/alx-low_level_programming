#include "3-calc.h"
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator
 * Return: ptr to the required function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
