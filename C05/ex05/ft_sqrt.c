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

int		ft_sqrt(int nb)
{
	int sum;
	int x;
	int boolvar;

	boolvar = 0;
	x = 1;
	sum = 0;
	while (sum <= nb)
	{
		if (sum == nb)
		{
			boolvar = 1;
		}
		sum = x * x;
		x++;
	}
	if (boolvar == 1)
		return (x - 2);
	else
		return (0);
}
