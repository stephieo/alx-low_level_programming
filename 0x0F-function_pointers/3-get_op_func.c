#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - selects the right operation function based on input string
 * @s: operator inputted at runtime
 *
 * Return: pointer to the corresponding function
 */
int (*get_op_func(char *s))(int, int)
{
	unsigned int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};


	while (i < (sizeof(ops) / sizeof(ops[0])) && (strcmp(s, ops[i] .op)))
	{
		i++;
	}

	if (i => (sizeof(ops) / sizeof(ops[0]))
			return (NULL);

	return (ops[i].f);

}



