/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_btree.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 09:55:41 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 09:55:41 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;

t_btree			*btree_create_node(void *item);

#endif
