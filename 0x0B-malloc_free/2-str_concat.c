#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *
str_concat(char *s1, char *s2)
{
	size_t len;
	char *buf;
  char empty[] = "";
	int i, j;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	len = strlen(s1) + strlen(s2) + 1;
	buf = malloc(len);
	if (buf != NULL)
	{
		for (i = 0; s1[i] != '\0'; ++i)
			buf[i] = s1[i];
		for (i = strlen(s1), j = 0; s2[j] != '\0'; i++, j++)
			buf[i] = s2[j];
		buf[len - 1] = '\0';
		return (buf);
	}

	return (NULL);
}
