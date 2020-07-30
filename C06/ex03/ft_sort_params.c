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

#include <unistd.h>
#include <stdio.h>
int		main(int argc, char **argv)
{
	char *tempval;
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
				tempval[] = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = tempval;
			}
			j++;
		}
		i++;
	}
}