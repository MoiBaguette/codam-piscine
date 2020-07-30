/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 19:34:00 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/12 20:19:34 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int input;
	int input1;

	input = *a;
	input1 = *b;
	*a = input / input1;
	*b = input % input1;
}
