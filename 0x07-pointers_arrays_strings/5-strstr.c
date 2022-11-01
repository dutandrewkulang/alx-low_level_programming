#include "main.h"
size_t
_strlen(const char *s)
{
	size_t c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}

char *
_strstr(char *haystack, char *needle)
{
	int c, d = 0;
	size_t flag = 0;

	if (!*needle)
		return (haystack);
	for (c = 0; haystack[c]; c++)
	{
		if (flag == _strlen(needle) - 1)
			return (&haystack[c - flag]);
		else if (haystack[c] == needle[d])
		{
			flag++;
			d++;
		}
		else
		{
			d = 0;
			flag = 0;
		}
	}

	return (NULL);
}
