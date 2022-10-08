#include "main.h"

/**
 * alloc_grid - Allocates memory space for a two-dimensional array
 * @width: the width of the two-dimensional array
 * @height: the height of the two-dimensional array
 *
 * Return: Pointer to the two-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
