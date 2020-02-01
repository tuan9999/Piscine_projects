/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_insert_data.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 10:24:04 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 10:24:07 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
						int (*cmpf)(void *, void *))
{
	t_btree *new;
	t_btree *lft;
	t_btree *rght;

	lft = (*root)->left;
	rght = (*root)->right;
	new = btree_create_node(item);
	if (*root == NULL)
	{
		*root = new;
		return ;
	}
	if (cmpf(new->item, (*root)->item) != 0)
	{
		if (cmpf(new->item, (*root)->item) < 0)
			(*root)->left = new;
		else if (cmpf(new->item, (*root)->item) > 0)
			(*root)->right = new;
		new->left = lft;
		new->right = rght;
		return ;
	}
	btree_insert_data(&lft, item, cmpf);
	btree_insert_data(&rght, item, cmpf);
}
