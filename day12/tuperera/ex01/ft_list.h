/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 16:31:58 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 16:31:58 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUF_SIZE 512

int		ft_strlen(char *str);
void	ft_putstring(int fd, char *str);
void	ft_error(char *str);
void	ft_read(char **str);
void	ft_write(void);

#endif
