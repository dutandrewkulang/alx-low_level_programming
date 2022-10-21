#include "main.h"
/**
 * main - Entry path
 * Return: 0
 * Checks if character is upper case
*/

int main(void)
{
		char c;
		c = 'A';

		int _isupper(int c)
		{
				if (isupper(c))
				{
						_putchar(1);
				}
				else
				{
						_putchar(0);
				}
		}
		printf("%c: %d", c, _isupper(c));

		return (0);
}
