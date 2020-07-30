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

int		ft_str_is_printable(char *str)
{
	int somevar;

	somevar = 1;
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 127))
			somevar = 0;
		str++;
	}
	if (somevar == 0)
		return (0);
	else
		return (1);
}
