#include <stdio.h>

/**
 * main - Entry path
 * Return: ) when successful
*/

int main(void)
{
/**
 * all decimal numbers are represented in ASII code from 48 - 57
 * in ASCII a comma is 44
*/
	int nums;

	for (nums = 48; nums <= 57; nums++)
	{
		putchar(nums);
		putchar(44);
	}
		putchar(10);
	return (0);
}
