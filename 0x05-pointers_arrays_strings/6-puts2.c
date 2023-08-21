#include "main.h"
/**
 * puts2 - this will print all even of a string
 *
 * @str: the string input
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');

}
