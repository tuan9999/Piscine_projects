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

typedef struct	s_list
{
	struct s_list	*next;
	int				*arg1;
	int				*arg2;
	int				*op;
	int				result;
}				t_list;

#endif
