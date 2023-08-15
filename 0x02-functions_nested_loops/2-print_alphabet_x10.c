#include "main.h"

/**
 * main - prints 10 times the alphabet in lowercase
 * Return: (0);
 */

void print_alphabet_810(void)
{
	char ch;
	int i;
	i = 0;
	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}

