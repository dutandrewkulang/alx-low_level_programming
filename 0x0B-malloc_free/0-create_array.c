#include <stdlib.h>

char *
create_array(unsigned int size, char c)
{
	char *buf = malloc(size * sizeof(char));
	unsigned int i;

	if (buf == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		buf[i] = c;

	return (buf);
}
