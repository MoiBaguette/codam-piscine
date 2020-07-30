/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   divide_input.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 20:28:08 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 20:31:55 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		g_index;

char	*count_input(char *input, int *length)
{
	int		counted;
	int		zero_counter;
	char	*pointer;

	counted = 0;
	zero_counter = 0;
	pointer = NULL;
	while (*input == '0')
	{
		zero_counter++;
		input++;
	}
	while (*input >= '0' && *input <= '9')
	{
		if (pointer == NULL)
			pointer = input;
		input++;
		*length += 1;
	}
	if (pointer == NULL && zero_counter != 0)
	{
		pointer = input - 1;
		*length += 1;
	}
	return (pointer);
}

short	ft_remainder(char *input, int *remainder)
{
	if (*remainder != 0)
	{
		if (*remainder == 1)
		{
			singles(input[0]);
		}
		else if (*remainder == 2)
		{
			tens(input);
		}
		g_index += *remainder;
	}
	return (1);
}

short	triples(char *input, int length, int *sets, short *printed)
{
	int set_counter;
	int remainder;

	remainder = g_index;
	while (g_index < length)
	{
		set_counter = 0;
		while (set_counter < 3 && g_index < length)
		{
			if (set_counter == 0)
				hundreds(&input[g_index]);
			else if (set_counter == 1)
				tens(&input[g_index]);
			set_counter++;
			g_index += 1;
		}
		*sets += 1;
		if (input[g_index] == '0' && input[g_index - 1] == '0' &&
				input[g_index - 2] == '0' && *printed == 0)
			thousands(length - (*sets * 3) - remainder, printed);
		else if (input[g_index] != '0' || input[g_index - 1] != '0' ||
				input[g_index - 2] != '0')
			thousands(length - (*sets * 3) - remainder, printed);
	}
	return (1);
}

short	divide_input(char *input)
{
	int		input_length;
	int		remainder;
	int		sets_done;
	short	is_printed_once;
	char	*number_index;

	sets_done = 0;
	is_printed_once = 0;
	input_length = 0;
	number_index = NULL;
	number_index = count_input(input, &input_length);
	remainder = input_length % 3;
	if (number_index[0] == '0' && input_length == 1)
	{
		fetch_single_from_dict('0');
		return (1);
	}
	ft_remainder(number_index, &remainder);
	if (remainder != 0 && input_length > 3)
	{
		thousands(input_length - (sets_done * 3) -
					remainder, &is_printed_once);
	}
	triples(number_index, input_length, &sets_done, &is_printed_once);
	return (1);
}
