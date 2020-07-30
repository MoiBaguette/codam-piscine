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

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *arr;
	int i;

	arr = malloc((max - min) * sizeof(int));
	i = 0;
	if (min < max)
	{
		while (max > (min + i))
		{
			arr[i] = min + i;
			i++;
		}
		return (arr);
	}
	else
		return (0);
}
