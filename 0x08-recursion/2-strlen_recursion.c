#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int n;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		n = 1 +  _strlen_recursion(s + 1);
	}
	return (n);
}
