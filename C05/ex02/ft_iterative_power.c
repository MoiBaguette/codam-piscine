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

int		ft_iterative_power(int nb, int power)
{
	int value;

	value = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (nb);
	if (power > 0 && nb > 0)
	{
		while (power > 0)
		{
			value = value * nb;
			power--;
		}
		return (value);
	}
	else
		return (0);
}
