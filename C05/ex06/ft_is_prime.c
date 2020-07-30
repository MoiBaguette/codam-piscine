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

int		ft_is_prime(int nb)
{
	int x;
	int boolvar;

	boolvar = 0;
	if (nb > 1)
	{
		x = nb;
		while (x > 1)
		{
			x--;
			if (nb % x != 0)
				boolvar++;
		}
		if (boolvar == nb - 2)
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
