#include "main.h"
/**
 * _puts_recursion - prints string and newline at the end of the string
 *@s: pointer variable
 */
void _puts_recursion(char *s)
{
		int len;

for (len = 0; s[len] != 0; len++)
{
	putchar(s[len]);
}
		printf("\n");
}
