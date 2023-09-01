#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name followed by a new line
 * @argc: the count of command-line arguments, including the program name
 * @argv: an array of strings representing the command-line arguments
 * Return: 0 (indicating successful execution)
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
		printf("%d\n", result);
		return (0);
}

