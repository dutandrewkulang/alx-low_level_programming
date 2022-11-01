#include "main.h"
/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character searching for
 * Return: pointer to the first occurence of c in s, otherwise NULL
 */

char *
_strchr(char *s, char c)
{
	int k;

	for (k = 0; *(s + k) >= 0; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}

	return (NULL);
}
