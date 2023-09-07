#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Create an array of integers from min to max
 * @min: The minimum value (inclusive)
 * @max: The maximum value (inclusive)
 *
 * This function creates an array of integers containing all values
 * from 'min' to 'max', inclusive, and returns a pointer to the newly
 * created array. If 'min' is greater than 'max', it returns NULL.
 * Memory is allocated for the array using malloc.
 *
 * Return: A pointer to the newly created array or NULL if 'min' is
 * greater than 'max' or if memory allocation fails.
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}

