#include "main.h"
#include "stdlib.h"
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated
 * which is an array of characters
 */

char *_strdup(char *str)
{
	char *duplicate;
	int length, i;

	if (str == NULL)
		return (NULL);

	length = 0;
	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

