/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush.h                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pspijkst <pspijkst@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/25 09:39:46 by pspijkst      #+#    #+#                 */
/*   Updated: 2020/07/26 20:34:53 by pspijkst      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_numberdict
{
	char	*number;
	char	*text;
	int		numbersize;
	int		textsize;
}				t_numberdict;

short			buffer_to_struct(char *buffer, t_numberdict *numberdict);

short			openread_file(char *filename);
short			divide_input(char *input);
void			free_dictionary(void);

short			fetch_from_dict(char *numbers);
short			fetch_single_from_dict(char number);

short			singles(char number);
short			tens(char *number);
short			hundreds(char *number);
short			thousands(int digits_left, short *is_printed_once);

int				g_line_count;
int				g_has_written;
t_numberdict	*g_dictionary;

#endif
