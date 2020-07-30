/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init_dict.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 09:40:11 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 20:00:52 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

char	*string_copy(char *buffer, int offset, int *i, int size)
{
	int		j;
	char	*copy;

	*i -= offset;
	copy = (char*)malloc(sizeof(char) * (size + 1));
	if (copy != NULL)
	{
		j = 0;
		while (j < size)
		{
			if (!(buffer[*i] == ' ' && buffer[*i + 1] == ' '))
			{
				copy[j] = buffer[*i];
				j++;
			}
			*i += 1;
		}
		copy[j] = '\0';
	}
	return (copy);
}

short	search_numbers(char *buffer, t_numberdict *numberdict, int *row, int *i)
{
	int		offset;
	int		size;

	size = 0;
	offset = 0;
	while (buffer[*i] >= '0' && buffer[*i] <= '9')
	{
		offset++;
		if (!(buffer[*i] == ' ' && buffer[*i + 1] == ' '))
			size++;
		*i += 1;
	}
	numberdict[*row].number = string_copy(buffer, offset, i, size);
	numberdict[*row].numbersize = size;
	if (size > 0)
		return (1);
	else
		return (0);
}

short	skip_spaces(char *buffer, int *i)
{
	while (buffer[*i])
	{
		if (buffer[*i] == ' ')
		{
			*i += 1;
		}
		else
			break ;
	}
	if (buffer[*i] == ':')
	{
		*i += 1;
		while (buffer[*i])
		{
			if (buffer[*i] == ' ')
			{
				*i += 1;
			}
			else
				return (1);
		}
	}
	return (0);
}

short	search_text(char *buffer, t_numberdict *numberdict, int *row, int *i)
{
	int		textsize;
	int		offset;

	textsize = 0;
	offset = 0;
	while (buffer[*i] != '\n' && buffer[*i] != '\0')
	{
		offset++;
		if (!(buffer[*i] == ' ' && buffer[*i + 1] == ' '))
			textsize++;
		*i += 1;
	}
	numberdict[*row].text = string_copy(buffer, offset, i, textsize);
	numberdict[*row].textsize = textsize;
	while (buffer[*i] == '\n' && buffer[*i + 1] == '\n')
		*i += 1;
	if (textsize > 0)
		return (1);
	else
		return (0);
}

short	buffer_to_struct(char *buffer, t_numberdict *numberdict)
{
	int i;
	int	row;
	int	row_modified;

	i = 0;
	row = 0;
	row_modified = 1;
	while (row_modified && buffer[i] != '\0')
	{
		row_modified = 0;
		if (!search_numbers(buffer, numberdict, &row, &i))
			return (0);
		else if (!skip_spaces(buffer, &i))
			return (0);
		else if (!search_text(buffer, numberdict, &row, &i))
			return (0);
		else
		{
			row_modified = 1;
			row++;
			buffer += 1;
		}
	}
	return (1);
}
