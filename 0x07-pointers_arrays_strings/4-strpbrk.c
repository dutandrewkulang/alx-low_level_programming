#include "main.h"
char *
_strpbrk(char *s, char *accept)
{
	int c, j;

	for (c = 0; s[c] > 0; c++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[c] == accept[j])
				return (s + c);
		}
	}
	return (NULL);
}
