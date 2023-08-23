#include "main.h"
#include <string.h>

/**
 * char *_strcat - a function that concatenates two strings.
 * @dest: - variable
 * @src: - variable
 * Return: (0);
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (originalDest);
}
