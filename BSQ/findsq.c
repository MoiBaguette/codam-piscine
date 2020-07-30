/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   try2.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: bmajor <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 20:18:25 by bmajor        #+#    #+#                 */
/*   Updated: 2020/07/29 22:05:20 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		my_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

int		**copy_array(void)
{
	int		g;
	int		**array_cpy;
	int		i;
	int		j;

	g = 0;
	i = 0;
	j = 0;
	array_cpy = (int**)malloc(g_agrid->y * sizeof(int*));
	if (!array_cpy)
		return (0);
	while (i < g_agrid->y)
		array_cpy[i++] = (int*)malloc(sizeof(int) * (g_agrid->x));
	i = 0;
	while (i < g_agrid->y)
	{
		j = 0;
		while (j < g_agrid->x)
		{
			array_cpy[i][j] = g_grid[g].value;
			j++;
			g++;
		}
		i++;
	}
	return (array_cpy);
}

int		largest_square(int *maxx, int *maxy)
{
	int		**cache;
	int		i;
	int		j;
	int		max_val;

	i = 0;
	cache = copy_array();
	max_val = 0;
	while (i < g_agrid->y)
	{
		j = 0;
		while (j < g_agrid->x)
		{
			if (cache[i][j] > 0 && i != 0 && j != 0)
				cache[i][j] = 1 + my_min(cache[i][j - 1], cache[i - 1][j], cache[i - 1][j - 1]);
			if (cache[i][j] > max_val)
			{  
				max_val = cache[i][j];
				*maxy = i;
				*maxx = j;
			}
			j++;
		}
		i++;
	}
	free(cache);
	return (max_val);
}
