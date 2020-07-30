/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/12 15:21:16 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_write(int i, int nb)
{
	int		arr[i + 1];
	int		i1;
	char	printer;

	i1 = i;
	while (nb % 10 != 0)
	{
		arr[i] = nb % 10;
		nb = nb / 10;
		i--;
	}
	while (i < i1)
	{
		printer = arr[i + 1] + '0';
		write(1, &printer, 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int temp;

	temp = nb;
	while (temp % 10 != 0)
	{
		temp = temp / 10;
		i++;
	}
	ft_write(i, nb);
}
