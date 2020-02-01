/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sorted_list_insert.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 15:44:27 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 15:44:28 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list *ptr;
	t_list *insert;
	t_list *forw;

	insert = ft_create_elem(data);
	ptr = *begin_list;
	forw = ptr->next;
	while (forw)
	{
		if (cmp(ptr->data, insert->data) < 0)
		{
			if (cmp(forw->data, insert->data) > 0)
			{
				ptr->next = insert;
				insert->next = forw;
				break ;
			}
		}
		ptr = forw;
		if (forw->next == NULL)
			break ;
		forw = forw->next;
	}
}
