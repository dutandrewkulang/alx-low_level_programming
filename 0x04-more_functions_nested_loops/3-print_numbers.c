#include "main.h"
/**
 * print_numbers - prints out all numbers from 0 -> 9
 * Return: void
 * Checks if character is upper case
*/
void print_numbers(void)
{
  int a;
  
  for (a = 0; a <= 9; a++)
    {
      _putchar("%d", a);
    }
  _putchar(10);
}
