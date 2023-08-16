#include "main.h"

/**
 * print_binary - recursively print rightmost bit of non-zero number
 * in its binary representation.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	print_binary(n >> 1);
	putchar((n & 1) + '0');
}
