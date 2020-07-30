/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/09 16:01:26 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/11 17:03:14 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writer(char d1, char d2, char d3)
{
	write(1, &d1, 1);
	write(1, &d2, 1);
	write(1, &d3, 1);
}

void	ft_print_comb(void)
{
	char d1;
	char d2;
	char d3;

	d1 = 48;
	while (d1 <= 55)
	{
		d2 = d1 + 1;
		while (d2 <= 56)
		{
			d3 = d2 + 1;
			while (d3 <= 57)
			{
				writer(d1, d2, d3);
				if (d1 == 55 && d2 == 56 && d3 == 57)
				{
					break ;
				}
				write(1, ", ", 1);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
