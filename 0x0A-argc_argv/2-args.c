#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: exit success
 */
int main(int argc, char **argv)
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	exit(EXIT_SUCCESS);
}
