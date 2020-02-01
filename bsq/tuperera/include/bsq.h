/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsq.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 16:39:52 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/28 21:12:06 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

void	rowcheck(char *str);
int		min(int a, int b, int c);
int		**populatecopy(int **input, int row, int column);
void	ft_getmaxval(int **copy, int row, int column);
void	bsq(int **input, int row, int column);
void	extend_readfle(int fd, int ret, char *save);
char	*read_output(int j);

int		g_row;
int		g_column;
char	g_empty;
char	g_obsticle;
char	g_full;

#endif
