/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   utils.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bmajor <marvin@codam.nl>                     +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:25:55 by bmajor        #+#    #+#                 */
/*   Updated: 2020/07/29 17:31:02 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_error(void)
{
	write(1, "map error\n", 10);
}


void	ft_putstring(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
