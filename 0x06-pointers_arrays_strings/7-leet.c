#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @str: set of strings to be encoded
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	char *leet_chars = "AaEeOoTtLl";
	char *leet_nums = "44330771";

	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
		}
	}
	return (str);
}
