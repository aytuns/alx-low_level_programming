#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - nested loop to make 2d array of integers
* @width: width input
* @height: height input
* Return: pointer to 2 d array
*
* print_grid - prints a grid of integers
*void print_grid(int **grid, int width, int height)
*{
*    int w;
*    int h;
*
*    h = 0;
*    while (h < height)
*    {
*        w = 0;
*        while (w < width)
*        {
*            printf("%d ", grid[h][w]);
*            w++;
*       }
*        printf("\n");
*        h++;
*    }   
*}
*
*int main(void)
*{
*    int **grid;
*
*    grid = alloc_grid(6, 4);
*    if (grid == NULL)
*    {
*        return (1);
*    }
*    print_grid(grid, 6, 4);
*    printf("\n");
*    grid[0][3] = 98;
*    grid[3][4] = 402;
*    print_grid(grid, 6, 4);
*    return (0);
*}
*/

int **alloc_grid(int width, int height)
{
	int** grd = malloc(sizeof(int *) * height);;
	int x, y;

	if (width <= 0 || height <= 0 || grd == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grd[x] = malloc(sizeof(int) * width);
		if (grd[x] == NULL)
		{
			for (; x >= 0; x--)
				free(grd[x]);
			free(grd);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			grd[x][y] = 0;
	}
	return (grd);
}

