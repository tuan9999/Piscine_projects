/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 10:56:15 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/28 21:29:41 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

void	ft_putchar(char c);
void	ft_freearr(int **arr);
void	colcheck(char *str);
void	charcheck(char *str);
void	ft_printgrid(int **arr);
int		**populatesquare(int **copy, int max_copy, int max_i, int max_j);

int		g_row;
int		g_column;
char	g_empty;
char	g_obsticle;
char	g_full;
int		g_len;
char	g_buf[11];

#endif
