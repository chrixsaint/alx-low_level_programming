#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: the count of command-line arguments, including the program name
 * @argv: an array of strings representing the command-line arguments
 * Return: 0 (indicating successful execution)
 */

int main(int argc, char *argv[])
{
	int cents, coins;
	(void)argv;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
