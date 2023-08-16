#include "main.h"
/**
 * binary_to_uint - converts string to binary number to uint
 * @b: string to convert
 *
 * Return: the converted number, or 0 if `b' is NULL or contains
 * symbols besides 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0;

if (!b)
{
return (k);
}
while (*b)
{
if (*b != '0' && *b != '1')
{
return (0);
}
k *= 2;
k += *b - '0';
++b;
}
return (k);
}

