#include "main.h"

int squareRoot(int n, int i);
int _sqrt_recursion(int n);
/**
 * squareRoot - natural square root of a number
 * @n: number
 * @i: guessing number
 * Return: Always 0
 */
int squareRoot(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (squareRoot(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square of a root number
 * @n: number
 * Return: Always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (squareRoot(n, 0));
}
