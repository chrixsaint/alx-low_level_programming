#include <stdio.h>
/**
 * main - print letters except q and e
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char latters = 'a';

	while (latters <= 'z')
	{
		if (latters != 'q' && latters != 'e')
		{
			putchar(latters);
		}
		latterst++;
	}
	putchar('\n');
	return (0);
}
