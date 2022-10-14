#include <stdio.h>
#include <time.h>

/**
 * main - Entry path
 * Return: 0 when success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("%d is Zero", n);
	}

	return (0);
}
