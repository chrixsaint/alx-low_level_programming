#include "main.h"

/**
 * _memcopy-memcpy.cy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: A pointer to the destination memory
 */

char *_memcopy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
