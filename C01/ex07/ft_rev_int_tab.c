/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 20:14:50 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/14 12:16:04 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int *n;
	int inbetween[size];

	i = 0;
	n = tab + size;
	while (n > tab)
	{
		n--;
		inbetween[i] = *n;
		i++;
	}
	i = 0;
	while (i < size)
	{
		*(tab + i) = inbetween[i];
		i++;
	}
}
