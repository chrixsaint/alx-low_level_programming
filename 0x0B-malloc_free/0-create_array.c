#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creates an array of char
 * @size: size of memory to print
 * @c: to store the string of character
 * Return: a pointer to the base character c
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

