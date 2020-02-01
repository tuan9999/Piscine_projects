/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_create_node.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 09:56:02 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 09:56:02 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree *temp;

	temp = malloc(sizeof(t_btree));
	temp->item = item;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
