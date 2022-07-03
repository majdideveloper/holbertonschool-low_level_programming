#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"
/**
 *array_iterator - Fun
 *@array: pointer to int
 *@size: size_t
 *@action: function
 *Return: 0
 *
 */
int(*get_op_func(char *s))(int, int)
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
	while (ops[i].f)
	{
		if (strcmp(ops[i].op,s) == 0)
			return (ops[i].f);
		++i;
	}
	return (NULL);
}
