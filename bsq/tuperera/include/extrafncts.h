/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extrafncts.h                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 11:51:30 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/27 11:51:31 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRAFNCTS_H
# define EXTRAFNCTS_H
# include <stdlib.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

int		ft_atoi(char *str);
void	assignglobal(char *str);
void	assignglobal2(int i, int j, int **input, char *str);
void	assignvars(char *str);
void	readfle(char *str);

int		g_row;
int		g_column;
char	g_empty;
char	g_obsticle;
char	g_full;

#endif
