#include "main.h"
/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle
 * Return: if size is 0 or less only prints new line
 * otherwise prints a triangle
 */
void print_triangle(int size)
{
	int times, space, triang;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (times = 1; times <= size; times++)
		{
			for (space = times; space < size; space++)
			{
				_putchar(' ');
			}
			for (triang = 1; triang <= times; triang++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
