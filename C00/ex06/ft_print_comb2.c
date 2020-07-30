/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   asdf.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/10 20:32:21 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/12 15:17:54 by gvan-wou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_stuff(char array[], int a, int b)
{
	array[2] = ' ';
	array[5] = ',';
	array[6] = ' ';
	write(1, array, 1);
	if (!(a == 98 && b == 99))
	{
		write(1, &array[5], 1);
		write(1, &array[6], 1);
	}
}

void	ft_argument(int a, int b)
{
	char	array[7];

	array[0] = (a / 10) + '0';
	array[1] = (a % 10) + '0';
	array[3] = (b / 10) + '0';
	array[4] = (b % 10) + '0';
	ft_print_stuff(array, a, b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_argument(a, b);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
	return(0);
}