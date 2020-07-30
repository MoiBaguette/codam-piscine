/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/29 22:03:19 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **args)
{
	int		i;
	int		var;
	char	*filename;

	g_agrid = (t_argcount*)malloc(sizeof(t_argcount) * 1);
	g_agrid->argc_counter = argc;
	g_agrid->n = 0;
	i = 1;
	var = 0;
	while (i < argc)
	{
		filename = args[i];
		var = openfile(filename, &var);
		i++;
	}
	free(g_agrid);
	return (0);
}
