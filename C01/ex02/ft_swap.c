/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 18:17:32 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/12 18:33:02 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int val1;
	int val2;

	val1 = *a;
	val2 = *b;
	*a = val2;
	*b = val1;
}
