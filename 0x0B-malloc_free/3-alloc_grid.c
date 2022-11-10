#include "main.h"
/**
 * **alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{

			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
