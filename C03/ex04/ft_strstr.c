/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/14 13:14:09 by jkoers        #+#    #+#                 */
/*   Updated: 2020/07/23 12:57:05 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (!to_find || to_find[0] == '\0')
		return (str);
	while (str[j] != '\0')
	{
		i = 0;
		while (str[j] == to_find[i])
		{
			j++;
			i++;
			if (to_find[i] == '\0')
				return (str + j - i);
		}
		j++;
	}
	return ((char *)0);
}
