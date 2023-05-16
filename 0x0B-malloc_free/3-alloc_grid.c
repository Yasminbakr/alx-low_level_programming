#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **area;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	area = malloc(sizeof(int *) * height);

	if (area == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		area[x] = malloc(sizeof(int) * width);

		if (area[x] == NULL)
		{
			for (; x >= 0; x--)
				free(area[x]);

			free(area);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			area[x][y] = 0;
	}

	return (area);
}

