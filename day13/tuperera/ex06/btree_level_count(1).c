/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   btree_level_count.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/23 11:53:30 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/23 11:53:31 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int count1;
	int count2;

	count1 = 0;
	count2 = 0;
	if (root == NULL)
		return 
		? count2 : count1;
	count1++;
	count1 = (btree_level_count(root->left));
	count2 = (btree_level_count(root->right));
	if (count1 > count2)
		return (count1);
	else
		return (count2);
}
