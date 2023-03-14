#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - that returns a pointer to a two dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: a pointer or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **b;
	int k, t;

	if (height <= 0 || width <= 0)
		return (NULL);

	b = (int **) malloc(sizeof(int *) * height);

	if (b == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		b[k] = (int *) malloc(sizeof(int) * width);
		if (b[k] == NULL)
		{
			free(b);
			for (t = 0; t <= k; t++)
				free(b[t]);
			return (NULL);
		}
	}

	for (k = 0; k < height; k++)
	{
		for (t = 0; t < width; t++)
		{
			b[k][t] = 0;
		}
	}
	return (b);
}
