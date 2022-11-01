#include "main.h"
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: array
 * @size: size of the array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
	{
		diag1 += a[(i * size) + i];
		diag2 += a[(size - 1) + (size - 1) * i];
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
