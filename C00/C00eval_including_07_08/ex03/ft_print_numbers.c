/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 19:06:32 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/07/15 13:01:44 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		write(1, &i, 1);
		i++;
	}
}