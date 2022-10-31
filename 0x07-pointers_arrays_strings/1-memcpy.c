#include "main.h"
/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: pointer of the memory location where the memory will be set
 * @n: n bytes
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
