#include "main.h"
/**
 * rev_string - function that prints string
 * in reversed mode
 *
 * @s: the string input
 * Return: nothing
 */
void rev_string(char *s)
{
	int length, j;
	char temp;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (j = 0; j < length / 2; j++)
	{
		temp = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = temp;
	}
}
