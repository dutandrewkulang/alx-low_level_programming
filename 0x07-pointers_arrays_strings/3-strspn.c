#include "main.h"

/**
 * _strspn - calculate (in bytes) the length of a segment of s that consists
 * entirely of bytes in accept
 *
 * @s: null terminated string
 * @accept: string of characters to accept
 * 
 * Return - number of characters spanned
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int k, j;
	int count = 0;

	for (k = 0; s[k] ; k++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[k] == accept[j])
			{
				if (_strncmp(s, accept, j) != 0)
					count++;
			}
		}

	}

	return count;
}

int
_strncmp(char *s, char *d, int n)
{
	int k;

	for (k = 0; k < n && s[k] && d[k]; k++)
	{
		if (s[k] != d[k]) {
			if (s[k] > d[k])
				return (s[k] - d[k]);
			return (d[k] - s[k]);
		}
	}

	return (0);
}
