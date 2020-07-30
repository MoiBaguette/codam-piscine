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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*startofpointer;
	int		i;
	int		n;

	startofpointer = dest;
	i = 0;
	n = 0;
	while (*dest != '\0')
	{
		dest++;
		n++;
	}
	while (*src != '\0' && size > i)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*src = '\0';
	return (i + n);
}
