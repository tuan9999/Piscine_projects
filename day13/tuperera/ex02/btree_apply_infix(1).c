/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_apply_infix.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 10:12:00 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 10:12:01 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_infix(root->left, applyf);
	applyf(root->item);
	btree_apply_infix(root->right, applyf);
}
