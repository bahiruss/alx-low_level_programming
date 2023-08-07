#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - nested loop to make grid
 *
 *@width: width input
 *
 *@height: height input
 *
 *Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **weew;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	weew = malloc(sizeof(int *) * height);

	if (weew == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		weew[x] = malloc(sizeof(int) * width);

		if (weew[x] == NULL)
		{
			for (; x >= 0; x--)
				free(weew[x]);

			free(weew);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			weew[x][y] = 0;
	}

	return (weew);
}
