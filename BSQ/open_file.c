/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/29 22:05:59 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int			buf_size(char *filename)
{
	int		fd;
	char	buf[1];
	int		buff_size;

	buff_size = 0;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_error();
	else
	{
		buff_size = 0;
		while (read(fd, buf, 1))
			buff_size++;
	}
	close(fd);
	fd = open(filename, O_RDONLY);
	return (buff_size);
}

int			change(int bytes_read, char *buffer, char map_legend[3])
{
	int		max_x;
	int		max_y;
	int		result;

	max_x = 0;
	max_y = 0;
	g_grid = (t_grid*)malloc(sizeof(t_grid) * (bytes_read));
	if (!g_grid)
		return (0);
	init_grid(buffer);
	change_char_to_int(map_legend);
	result = largest_square(&max_x, &max_y);
	update_map_and_print(max_x, max_y, result, map_legend);
	free(g_grid);
	return (1);
}

short		openfile(char *filename, int *var)
{
	int		fd;
	char	*buffer;
	int		bytes_read;
	char	map_legend[3];

	*var = buf_size(filename);
	buffer = (char*)malloc(*var * sizeof(*buffer));
	if (!buffer)
		return (0);
	fd = open(filename, O_RDONLY);
	bytes_read = read(fd, buffer, *var);
	buffer[bytes_read - 1] = '\0';
	if (fd != -1)
	{
		if (file_valid(buffer, map_legend))
			change(bytes_read, buffer, map_legend);
		free(buffer);
		return (0);
	}
	return (1);
}

short		init_grid(char *buffer)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (buffer[i] != '\n')
		i++;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == '\n')
		{
			g_agrid->y = g_agrid->y + 1;
			g_agrid->x = 0;
		}
		else
		{
			g_grid[n].character = buffer[i];
			g_agrid->x = g_agrid->x + 1;
			n++;
		}
		i++;
	}
	return (1);
}

short		change_char_to_int(char *map_legend)
{
	int i;

	i = 0;
	while (g_grid[i].character != '\0')
	{
		if (g_grid[i].character == map_legend[0])
		{
			g_grid[i].value = 1;
		}
		if (g_grid[i].character == map_legend[1])
		{
			g_grid[i].value = 0;
		}
		i++;
	}
	return (1);
}
