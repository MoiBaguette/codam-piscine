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
#include<stdio.h>
int	something(char *str, int length)
{
	int		i;
	int		value;
	int		power;
	int		charval;

	value = 0;
	charval = 0;
	while ((*str >= '0' && *str <= '9') && length >= 0)
	{
		power = 1;
		i = length;
		while (i > 1)
		{
			power = power * 10;
			i--;
		}
		charval = *str - '0';
		value = value + (charval * power);
		str++;
		length--;
	}
	return (value);
}

int	ft_atoi(char *str)
{
	int		plusorminus;
	int		var;
	char	*ptr_start_nbr;
	int		i;

	plusorminus = 1;
	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			plusorminus = plusorminus * -1;
		str++;
	}
	ptr_start_nbr = str;
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		i++;
		str++;
	}
	var = something(ptr_start_nbr, i);
	return (plusorminus * var);
}

int main()
{
	char arr[] = "  \n\t\v--++++++--234adff234234";
	int var = ft_atoi(arr);
	printf("%d", var);
}