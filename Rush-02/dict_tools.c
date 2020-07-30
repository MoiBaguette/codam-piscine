/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dict_tools.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 18:33:30 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 19:53:47 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

short	fetch_from_dict(char *numbers)
{
	int i;

	i = 0;
	while (i < g_line_count)
	{
		if (!(ft_strcmp(numbers, g_dictionary[i].number)))
		{
			if (g_has_written)
				write(1, " ", 1);
			write(1, g_dictionary[i].text, g_dictionary[i].textsize);
			g_has_written = 1;
			return (1);
		}
		i++;
	}
	return (0);
}

short	fetch_single_from_dict(char number)
{
	int		i;
	char	number_str[2];

	number_str[0] = number;
	number_str[1] = '\0';
	i = 0;
	while (i < g_line_count)
	{
		if (!(ft_strcmp(number_str, g_dictionary[i].number)))
		{
			if (g_has_written)
				write(1, " ", 1);
			write(1, g_dictionary[i].text, g_dictionary[i].textsize);
			g_has_written = 1;
			return (1);
		}
		i++;
	}
	return (0);
}

void	free_dictionary(void)
{
	int i;

	i = 0;
	while (i < g_line_count)
	{
		free(g_dictionary[i].text);
		free(g_dictionary[i].number);
		i++;
	}
	free(g_dictionary);
}
