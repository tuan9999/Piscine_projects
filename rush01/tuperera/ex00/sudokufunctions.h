/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   string.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/18 12:10:16 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/18 12:10:16 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKUFUNCTIONS_H
# define SUDOKUFUNCTIONS_H

void	ft_putchar(char c);
int		*ft_strtoint(char *str, int *arr);
int		**ft_strtointarr(char **str);
int		ft_check_input(char *str);
int		ft_grid_checkt(int **arr, int row, int col, int value);

#endif
