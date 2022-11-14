#include "dog.h"
/**
 * free_dog - function that frees dog
 * @d: pointer to struct
 * Return: Always 0
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
