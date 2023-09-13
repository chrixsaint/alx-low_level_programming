#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Iterates over array elements applying 'cmp'.
 * Returns index of first non-zero return of 'cmp', or -1 otherwise.
 *
 * @array: The integer array to be iterated over.
 * @size: Size of the array.
 * @cmp: A function pointer applied to each element in array.
 *
 * Return: index of the first non-zero return of 'cmp', or
 * -1 if no such index is found or array size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
