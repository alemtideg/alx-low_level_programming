#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional array 
 * @height: heiht of array
 * @width: width of array
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (height == 0 || width == 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *)malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}


