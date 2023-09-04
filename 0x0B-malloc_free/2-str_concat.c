#include <stdlib.h>
#include "main.h"


/**
 * str_concat - concertenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the conc... string
 * which memory was allocated for.
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (i = 0; i < len2; i++)
		concatenated[len1 + i] = s2[i];
	concatenated[len1 + len2] = '\0';
	return (concatenated);
}

