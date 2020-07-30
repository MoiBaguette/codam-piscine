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

void	ft_sort_int_tab(int *tab, int size)
{
	int tempval;
	int i;
	int j;
	int *ptrtab;

	i = 0;
	j = 0;
	ptrtab = tab;
	while (i < (size - 1))
	{
		j = 0;
		tab = ptrtab;
		while (j < (size - i - 1))
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				tempval = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tempval;
			}
			j++;
		}
		i++;
	}
}
