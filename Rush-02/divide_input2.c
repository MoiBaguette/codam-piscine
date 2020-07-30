/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   divide_input2.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/26 17:31:30 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 19:59:25 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

short	singles(char number)
{
	if (number > '0')
		return (fetch_single_from_dict(number));
	return (1);
}

short	tens(char *number)
{
	char	tens[3];

	if (number[0] == '0' && number[1] == '0')
		return (1);
	else if (number[0] == '1')
	{
		tens[0] = number[0];
		tens[1] = number[1];
		tens[2] = '\0';
		return (fetch_from_dict(tens));
	}
	else if (number[0] == '0')
	{
		return (singles(number[1]));
	}
	else
	{
		tens[0] = number[0];
		tens[1] = '0';
		tens[2] = '\0';
		if (fetch_from_dict(tens))
			return (singles(number[1]));
	}
	return (0);
}

short	hundreds(char *number)
{
	int		i;
	char	hundreds[4];

	if (number[0] > '0')
	{
		i = 0;
		hundreds[0] = '1';
		hundreds[1] = '0';
		hundreds[2] = '0';
		hundreds[3] = '\0';
		if (singles(number[0]))
			if (fetch_from_dict(hundreds))
				return (1);
	}
	return (0);
}

short	thousands(int digits_left, short *is_printed_once)
{
	int		i;
	char	thousands[digits_left + 2];

	if (digits_left >= 3)
	{
		thousands[0] = '1';
		i = 1;
		while (i < digits_left + 1)
		{
			thousands[i] = '0';
			i++;
		}
		thousands[i] = '\0';
		if (fetch_from_dict(thousands))
		{
			*is_printed_once = 1;
			return (1);
		}
	}
	return (0);
}
