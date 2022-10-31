#include "main.h"
/**
* _memset - fills up bytes of specified area
* @s: memory address to written in,
* @b: the data to written in the memory address
* @n: the byte size that s points to
* Return: s
* s - is the char return value
 */
char _memset(char *s, char b, unsigned int n)
{
unsigned int memory = 0;

while (memory < n)
{
s[memory] = b;
memory++
}
return (s);
}
