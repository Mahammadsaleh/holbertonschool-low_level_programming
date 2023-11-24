#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function for the operation
 * @s: The operator passed as an argument to the program
 *
 * Return: Pointer to the function 
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

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
	return (NULL);
}
