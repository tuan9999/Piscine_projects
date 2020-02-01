/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memory.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 15:37:52 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/24 15:37:52 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H
# define BUFFSIZE 30720

char	*read_output(void);
int		ft_checkstrvalid(char *str);
int		ft_rushvalid(char *str, int w, int h);

#endif
