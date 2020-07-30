/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/30 10:59:01 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

short   print_map()
{
	int i;

	i = 0;
	g_agrid->n = g_agrid->n + 1;
	while(g_grid[i].character != '\0')
	{
		if(i % g_agrid->x == 0 && i != 0)
			write(1, "\n", 1);
		write(1, &g_grid[i].character, 1);
		i++;
	}
	if(g_agrid->argc_counter - 1 > g_agrid->n)
	{
		write(1, "\n", 1);
		write(1, "\n", 1);
	}
	return (1);
}

short   modify_map(int max_x, int max_y, int result, char map_legend[3])
{
	int x;
	int y;
	
	y = 0;
	while(y < result)
	{
		x = 0;
		while (x < result)
		{
			g_grid[((max_y - y) * g_agrid->x + max_x) - x].character = map_legend[2];
			x++;
		}
		y++;
	}
	return (1);
}

short   update_map_and_print(int max_x, int max_y, int result, char map_legend[3])
{
	if(modify_map(max_x, max_y, result, map_legend))
	{
		print_map();
	}
	return (1);
}
