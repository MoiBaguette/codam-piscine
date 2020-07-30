/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 10:18:23 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/23 11:37:06 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (s1[i] && s2[i] && (s1[i] == s2[i]))
			i++;
		else
			break ;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
