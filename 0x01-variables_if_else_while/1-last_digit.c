#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - printing random no and giving.
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;
	int lost;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lost = n % 10;

	if (lost > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lost);
	}
	else if (lost == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lost);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lost);
	}
	return (0);
}
