#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *@dest: - destination file
 *@src: - source file
 *@n: - null file
 *Return: (0);
 */

char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (originalDest);
}

