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

int		ft_strcmp(char *s1, char *s2)
{
	int var;
	int var1;

	while (*s1 == *s2 && *s1 && *s2)
	{
		s1++;
		s2++;
	}
	var = (unsigned char)*s1;
	var1 = (unsigned char)*s2;
	return (var - var1);
}
