#include "dog.h"
int stringlen(char *);
/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int strlen_name, strlen_owner, i;
	dog_t *ndog;

	ndog = (dog_t *)malloc(sizeof(dog_t));

	if (ndog == NULL)
		return (NULL);

	strlen_name = stringlen(name);
	ndog->name = malloc(strlen_name * sizeof(ndog->name));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	for (i = 0; i < strlen_name; i++)
	{
		ndog->name[i] = name[i];
	}
	ndog->name[i] = 0;

	strlen_owner = stringlen(owner);
	ndog->owner = malloc(strlen_owner * sizeof(ndog->owner));

	if (ndog->owner == NULL)
	{
		free(ndog);
		free(ndog->name);
		return (NULL);
	}
	for (i = 0; i < strlen_owner; i++)
	{
		ndog->owner[i] = owner[i];
	}
	ndog->owner[i] = 0;
	ndog->age = age;

	return (ndog);
}
/**
 * stringlen - length of string name and owner
 * @str: pointer to string
 * Return: length of string
 */
int stringlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
	}
	return (i);
}
