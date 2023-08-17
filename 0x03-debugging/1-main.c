#include <stdio.h>

/**
 *main - causes of an infinit loop
 *Return: (0);
 */

int main(void)
{
	int i;

	printf("inifint loop incoming :(\n");

	i = 0;

	/**
	 *while (i < 10)
	 *{
	 *	putchar(i);
	 *}
	 */

	printf("infinit loop avoided! \\o/\n");
	return (0);
}
