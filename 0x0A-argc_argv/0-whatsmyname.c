#include <stdio.h>
#include <libgen.h>
#include "main.h"

/**
 * main - a program that prints its name, preceded by "./", followed
 * by a new line. If the program is renamed, it will print the new name.
 * @argc: The number of command line arguments.
 * This count includes the program name itself.
 * @argv: An array containing the program name and command line arguments.
 * Return: 0 if the program completes successfully.
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
