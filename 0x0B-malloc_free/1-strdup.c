#include <stdlib.h>
#include <string.h>

char *
_strdup(char *str)
{
	size_t i, len;
	char *dest;

	if (str != NULL)
	{
		len = strlen(str);
		dest = malloc(len + 1);
	}
	if (str == NULL || dest == NULL)
		return (NULL);
	for (i = 0; i < len; ++i)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
