/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: mraasvel <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/15 10:54:51 by mraasvel      #+#    #+#                 */
/*   Updated: 2020/07/15 13:18:48 by mraasvel      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loop_recursion(int i, int n, int total, char *numbers)
{
	if (n != 0)
	{
		while (i <= 9)
		{
			numbers[total - n] = i + '0';
			loop_recursion(i + 1, n - 1, total, numbers);
			i++;
		}
	}
	else
	{
		write(1, &numbers[0], total);
		if (numbers[0] == 10 - total + '0')
		{
			return ;
		}
		write(1, ", ", 2);
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		total;
	char	numbers[11];

	if (n <= 0 || n >= 10)
		return ;
	total = n;
	i = 0;
	while (i < 11)
	{
		numbers[i] = 0;
		i++;
	}
	i = 0;
	loop_recursion(i, n, total, numbers);
}
