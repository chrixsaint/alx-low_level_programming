#include <stdio.h>
#include <libgen.h>
#include "main.h"

/**
 * main - a program that prints it's name followed by a new line
 * @argc: - count the number of arguments
 * @argv: - number of command line argument.
 * Return: (0);
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		char *program_name = basename(argv[0]);

		printf("./%s\n", program_name);
	}
	return (0);
}
