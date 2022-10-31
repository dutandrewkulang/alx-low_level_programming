#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: where to copy memory to
 * @src: source of data to be copied
 * @n: byte size of memory to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
{
	unsigned int num = 0;

	while (num < n)
	{
		dest[num] = src[num];
		i++;
	}
	return (dest);
}
