#include "main.h"
/**
 * main is simple addition calculator
*/
int main(int argc, char **argv)
{
	int c, d, sum = 0;

	for (c = 1; c < argc; c++)
	{
		for (d = 0; argv[c][d]; d++)
		{
			if (!isdigit(argv[c][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (c = 0; c < argc; c++)
		sum += atoi(argv[c]);
	printf("%d\n", sum);
	return (0);
}
