#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name followed by a new line
 * @argc: the count of command-line arguments, including the program name
 * @argv: an array of strings representing the command-line argument
 * Return: 0 (indicating successful execution)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
