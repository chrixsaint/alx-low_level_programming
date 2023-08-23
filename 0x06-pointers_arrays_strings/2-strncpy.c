#include "main.h"

/**
 * *_strncpy -  a function that copies a string.
 *@dest: - destination file
 *@src: - src file
 *@n: - null file
 *Return: (0);
 */

char *_strncpy(char *dest, char *src, int n)
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
