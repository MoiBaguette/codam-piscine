/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ft.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gvan-wou <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/12 15:20:19 by gvan-wou      #+#    #+#                 */
/*   Updated: 2020/07/29 21:57:01 by bmajor        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_grid
{	

	int		value;
	char	character;
}				t_grid;

typedef struct  argcounter
{
	int		argc_counter;
	int		x;
	int		y;
	int		n;
}               t_argcount;


/* open_file.c */
short   openfile(char *filename, int *var);
short	init_grid(char *buffer);
char	*string_fill(char *buffer, int *i);
int		ft_char_count(char *filename);
short	change_char_to_int(char *map_legend);
void    display_error(void);
void    ft_putstring(char *str);

/* findsq.c */

int		my_min(int a, int b, int c);
int		**copy_array();
int		largest_square();

/* error.c */

short   file_valid(char *buffer, char *map_legend);

/* update_print.c */

short	update_map_and_print(int max_x, int max_y, int result, char map_legend[3]);

t_grid		*g_grid;
t_argcount	*g_agrid;

#endif
