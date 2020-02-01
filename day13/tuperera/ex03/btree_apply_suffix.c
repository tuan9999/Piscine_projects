/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_apply_suffix.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 10:15:04 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 10:15:04 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
