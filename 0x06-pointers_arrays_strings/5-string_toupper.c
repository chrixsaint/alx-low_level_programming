#include "main.h"

/**
 **string_toupper - changes all lowercase letters of a string to uppercase
 *@str: - value for string
 *Return: (0);
 */

char *string_toupper(char *str)
{
	char *originalStr = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (originalStr);
}
