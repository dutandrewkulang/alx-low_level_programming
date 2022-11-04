#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: exit success
 */
int main(int argc, char **argv)
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	exit(EXIT_SUCCESS);
}
