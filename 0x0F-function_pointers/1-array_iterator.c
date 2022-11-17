#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @arr: pointer to an int
 * @size: size of array
 * @act: pointer function
 * Return: Always 0
 */
void array_iterator(int *arr, size_t size, void (*act) (int))
{
	unsigned int i;

	if (act != NULL && arr != NULL)
	for (i = 0; i < size; i++)
	{
		act(arr[i]);
	}
}
