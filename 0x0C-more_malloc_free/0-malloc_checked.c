#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: The number of bytes to allocate
 * This function allocates memory using the malloc function and checks if the
 * allocation was successful. If malloc fails to allocate memory, the function
 * exits the program with an exit status of 98.
 *
 * @b: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory if successful, or it exits the
 * program if allocation fails.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
