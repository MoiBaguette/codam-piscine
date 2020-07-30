/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 11:22:21 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/07/15 13:05:47 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_characters(char a, char b, char c, char d)
{
	while (d <= '9')
	{
		if ((a * 10 + b) < (c * 10 + d))
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			if (a == '9' && b == '8')
			{
				return ;
			}
			else
			{
				write(1, ", ", 2);
			}
		}
		d++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				write_characters(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}
