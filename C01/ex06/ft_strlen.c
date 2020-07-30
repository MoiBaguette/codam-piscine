/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 20:14:50 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/14 12:20:25 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int characters;

	characters = 0;
	while (*str != 0)
	{
		characters++;
		str++;
	}
	return (characters);
}
