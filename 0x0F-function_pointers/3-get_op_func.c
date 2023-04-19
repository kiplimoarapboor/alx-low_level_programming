#include <string.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * get_op_func - gets the function
 * @s: the operation
 *
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
