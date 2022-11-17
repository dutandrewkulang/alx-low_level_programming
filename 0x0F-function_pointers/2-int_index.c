#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @arr: pointer to an array
 * @size: size of the array
 * @ptr: pointer function
 * Return: Always 0
 */
int int_index(int *arr, int size, int (*ptr) (int))
{
	int i;

	if (size <= 0 || ptr == NULL || arr == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (ptr(arr[i]) > 0)
			return (i);
	}
	return (-1);
}
