3-calc.h
#ifndef _3_CALC_H
#define _3_CALC_H

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
#endif

3-get_op_func.c
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Function to select the correct operation.
 * @s: Operator passed as argument to the program.
 *
 * This function returns a pointer to the function that corresponds
 * to the operator given as a parameter. If s does not match any of the
 * 5 expected operators (+, -, *, /, %), the function returns NULL.
 *
 * Return: Pointer to the function that corresponds to the operator
 * given as a parameter.
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

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}


3-main.c
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int num1, num2;

	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		{
			exit(98);
		}
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		{
			exit(99);
		}
	}
	printf("%d\n", op_func(num1, num2));
	return (0);
}

3-op_funcions.c
#include "3-calc.h"

/**
 * op_add - a function that adds two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: The result of a - b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: The result of a * b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: The result of a / b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a function that finds the remainder of the division of a by b.
 * @a: the first integer.
 * @b: the second integer.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
