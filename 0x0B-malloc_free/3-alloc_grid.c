#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - two dimensional array
 * @width: the first int
 * @height: the second int
 *
 * Return: returns a pointer
 */
int **alloc_grid(int width, int height)
{
	int **twodim;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	twodim = malloc(sizeof(int *) * height);

	if (twodim == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		twodim[hi] = malloc(sizeof(int) * width);

		if (twodim[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(twodim[hi]);

			free(twodim);
			return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			twodim[hi][wi] = 0;
	}

	return (twodim);
}
