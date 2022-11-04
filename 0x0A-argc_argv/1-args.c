#include "main.h"
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: pointer to a string
 * Return: exit success
 */
int main(int argc, char __attribute__((unused))**argv)
{
	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
