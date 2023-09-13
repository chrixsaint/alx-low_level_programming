#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int), result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	*operator = argv[2];
	num2 = atoi(argv[3]);

	(*operation)(int, int) = get_op_func(operator);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}
	result = operation(num1, num2);
	printf("%d\n", result);

	return (0);
}
