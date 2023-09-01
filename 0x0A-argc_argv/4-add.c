#include "main.h"
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
	int sum = 0, i, j, num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			char *arg = argv[i];

			for (j = 0; arg[j] != '\0'; j++)
			{
				if (arg[j] < '0' || arg[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			num = atoi(arg);

			if (num < 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
