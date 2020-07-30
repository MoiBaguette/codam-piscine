/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 12:58:32 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 20:35:52 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		count_lines(char *filename)
{
	int		fd;
	char	buffer[1];
	char	prevchar;
	int		lines;

	fd = open(filename, O_RDONLY);
	prevchar = 0;
	lines = 0;
	if (fd != -1)
	{
		while (read(fd, buffer, 1))
		{
			if (buffer[0] == '\n')
				lines++;
			if ((buffer[0] == '\n' && prevchar == '\n'))
				lines--;
			prevchar = buffer[0];
		}
		close(fd);
	}
	else
		return (-1);
	return (lines + 1);
}

short	openread_file(char *filename)
{
	int		fd;
	int		bytes_read;
	float	result;
	char	*buffer;

	buffer = (char*)malloc(10768 * sizeof(*buffer));
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		bytes_read = read(fd, buffer, 10768);
		buffer[bytes_read] = '\0';
		close(fd);
		result = buffer_to_struct(buffer, g_dictionary);
		free(buffer);
		return (result);
	}
	else
		return (-1);
}

void	check_errors(char *filename, char *input)
{
	short			result_status;

	g_line_count = count_lines(filename);
	if (g_line_count != -1)
	{
		g_dictionary = malloc(sizeof(*g_dictionary) * g_line_count);
		result_status = openread_file(filename);
		if (result_status)
		{
			divide_input(input);
			free_dictionary();
			return ;
		}
	}
	write(1, "Dict Error\n", 11);
}

short	check_input(char *input)
{
	int i;

	i = 0;
	g_has_written = 0;
	while (input[i] == '0')
		input++;
	while (input[i])
	{
		if (input[i] >= '0' && input[i] <= '9')
			i++;
		else
		{
			write(1, "Error\n", 6);
			return (0);
		}
	}
	if (i > 39)
	{
		write(1, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}

int		main(int argc, char **args)
{
	char			*input;
	char			*filename;

	if (argc == 2)
	{
		input = args[1];
		filename = "numbers.dict";
	}
	else if (argc == 3)
	{
		input = args[2];
		filename = args[1];
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!check_input(input))
	{
		return (0);
	}
	check_errors(filename, input);
}
