/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_search_item.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 11:20:43 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 11:20:44 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
						int (*cmpf)(void *, void *))
{
	if (root == NULL)
		return (NULL);
	if (cmpf(root->item, data_ref) == 0)
		return (root);
	return (btree_search_item(root->left, data_ref, cmpf));
	return (btree_search_item(root->right, data_ref, cmpf));
}
