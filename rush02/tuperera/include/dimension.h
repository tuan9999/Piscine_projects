/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dimension.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 16:56:57 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/24 16:56:57 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIMENSION_H
# define DIMENSION_H

int		check_height(char *str);
int		check_width(char *str);
int		ft_rush_check_all(char *str, int h, int w);
int		ft_rush_check(char *str, int h, int w);
int		ft_rush_check_square(char *str);

#endif
