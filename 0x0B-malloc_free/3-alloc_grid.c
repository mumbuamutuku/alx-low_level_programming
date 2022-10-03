#include "main.h"
/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array of integers.
 * @width: width of the arrayy
 * @height: height of the array
 * return: NULL on failure If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
    int i, j;

    int **grid;

    if (width <=0 || height <= 0)
        return (NULL);
    grid = malloc (height * sizeof(grid));
    if (grid == NULL)
    {
        free(grid);
        return (NULL);
    }
    while (i < height)
    {
        grid[i] = malloc(width * sizeof(**grid));
        if (grid[i] == NULL)
        {
            i--;
            while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	return (grid);
        
}