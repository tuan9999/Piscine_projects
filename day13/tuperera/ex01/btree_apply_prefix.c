/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_apply_prefix.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 10:03:46 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 10:03:47 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left, applyf);
	btree_apply_prefix(root->right, applyf);
}
