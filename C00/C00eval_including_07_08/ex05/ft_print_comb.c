/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/13 17:47:58 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/07/15 13:04:18 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char a[4];

	a[3] = 0;
	a[0] = '0';
	while (a[0] < '8')
	{
		a[1] = a[0] + 1;
		while (a[1] < '9')
		{
			a[2] = a[1] + 1;
			while (a[2] < '9' + 1)
			{
				write(1, &a[0], 3);
				if (a[0] == '7')
				{
					return ;
				}
				write(1, ", ", 2);
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}