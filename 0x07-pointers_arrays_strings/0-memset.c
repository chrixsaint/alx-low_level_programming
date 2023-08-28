#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 *@s: - a pointer to the memory area
 *@b: - the pointer b
 *@n: - what you want to fill
 *Return: A pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
