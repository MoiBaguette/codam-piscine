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

int		ft_iterative_factorial(int nb)
{
	int value;

	value = 1;
	if (nb >= 0)
	{
		while (nb > 0)
		{
			value = value * nb;
			nb--;
		}
	}
	else
	{
		value = 0;
	}
	return (value);
}
