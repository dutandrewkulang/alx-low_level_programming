#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector pointing to a string
 * the __attribute__((used)) is useful here because we won't use the
 * argument count at all, since this program only
 * prints the name of the program
 * Return: EXIT_SUCCESS
 */
int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
