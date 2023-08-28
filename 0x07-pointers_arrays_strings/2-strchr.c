#include "main.h"
/**
 * _strchr - main file
 * @s: input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	for ( ; *s >= '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (0);
}
