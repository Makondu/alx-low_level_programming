#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to a 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **twoD_array;
	int i;
	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	twoD_array = malloc(sizeof(int *) * width);
	if (twoD_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		twoD_array[i] = malloc(sizeof(int) * height);
		if (twoD_array == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(twoD_array[j]);
			}
			free(twoD_array);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(twoD_array + i) + j) = 0;
		}
	}

	return (twoD_array);
}
