/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/29 19:42:30 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

short	first_line_valid(char *buffer, char *map_legend)
{
	int i;
	i = 0;
	while (buffer[i] != '\n')
	{
		i++;
	}
	if (buffer[i - 1] != buffer[i - 2] && buffer[i - 1] != buffer[i - 3] 
		&& buffer[i - 2] != buffer[i - 3])
	{
	map_legend[0] = buffer[i - 3];
	map_legend[1] = buffer[i - 2];
	map_legend[2] = buffer[i - 1];
		return (1);
	}
	else
	{
		return (0);
	}
}
short	number_of_lines(char *buffer)
{
	int length_line;
	int length_last_line;
	int i;

	i = 0;
	length_line = 0;
	while (buffer[i] != '\n')
		i++;
	while (buffer[i] != '\0')
	{
		i++;
		length_last_line = length_line;
		if(buffer[i] != '\n')
		length_line = 0;
		while (buffer[i] != '\n' && buffer[i] != '\0')
		{
			length_line++;
			i++;
		}
		if (length_last_line != length_line && length_last_line != 0)
			return (0);
	}
	return (1);
}

short	file_valid(char *buffer, char *map_legend)
{
	if (!first_line_valid(buffer, map_legend))
	{
		return (0);
	}
	if	(!number_of_lines(buffer))
	{
		return (0);
	}
	return (1);	
}
