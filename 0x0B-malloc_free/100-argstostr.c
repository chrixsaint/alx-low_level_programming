#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all program arguments
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to the array of char
 */

char *argstostr(int ac, char **av)
{
	char *concatenated, *arg;
	int i, index, total_length;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			total_length++;
			arg++;
		}
		total_length++;
	}
	concatenated = (char *)malloc((total_length + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			concatenated[index++] = *arg;
			arg++;
		}
		concatenated[index++] = '\n';
	}
	concatenated[index] = '\0';
	return (concatenated);
}
