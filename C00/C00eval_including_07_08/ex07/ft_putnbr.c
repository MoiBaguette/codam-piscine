/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 18:34:35 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/07/15 13:06:55 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(int count, int nb)
{
	int		i;
	char	numbers[count];

	i = count - 1;
	while (i >= 0)
	{
		numbers[i] = nb % 10 + '0';
		nb = nb / 10;
		i = i - 1;
	}
	write(1, &numbers[0], count);
}

void	ft_putnbr(int nb)
{
	int count;
	int placeholder;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	placeholder = nb;
	count = 0;
	if (placeholder == 0)
		count = 1;
	while (placeholder != 0)
	{
		placeholder = placeholder / 10;
		count++;
	}
	print_numbers(count, nb);
}
