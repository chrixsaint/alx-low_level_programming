#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Concatenate two strings with a limit on the second string
 *
 * This function concatenates two strings, s1 and s2, up to n
 * characters from s2,and returns a newly allocated string containing the
 * result. If either s1 or s2 is NULL, it is treated as an empty string.
 * If n is greater than or equal to the length of s2, the entire s2 is
 * concatenated
 *
 * @s1: The first string to concatenate
 * @s2: The second string to concatenate
 * @n: The maximum number of characters from s2 to concatenate
 *
 * Return: A pointer to the newly allocated concatenated string or
 * NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	concatenated = malloc(len1 + n + 1);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';
	return (concatenated);
}
