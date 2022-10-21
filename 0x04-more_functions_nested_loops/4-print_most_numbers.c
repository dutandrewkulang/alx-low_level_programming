#include "main.h"
/**
 * print_more_numbers - prints out all numbers from 0 -> 9 a part from 2 and 4
 * Return: void
 * Checks if character is upper case
*/
void print_more_numbers(void)
{
int a;
for (a = 48; a <= 57; a++)
{
if (a != 50 && a != 52)
{
_putchar(a);
}
}
_putchar(10);
}
