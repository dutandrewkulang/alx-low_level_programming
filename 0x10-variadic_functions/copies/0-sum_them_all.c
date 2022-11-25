#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters
 * @n: numbers to add
 * Return: the sum of n numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arglist;

	va_start(arglist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arglist, int);
	}

	va_end(arglist);
	return (sum);
}
