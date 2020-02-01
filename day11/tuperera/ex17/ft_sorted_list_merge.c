/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sorted_list_merge.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 16:44:38 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 16:44:39 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_sorted_list_merge(t_list **begin_list1,
							t_list *begin_list2, int (*cmp)())
{
	t_list *ptr;
	t_list *insert;
	t_list *forw;
	t_list *insertcount;
	t_list *begin;

	insertcount = begin_list2;
	insert = begin_list2;
	begin = *begin_list1;
	while (insertcount)
	{
		ptr = begin;
		forw = ptr->next;
		if (cmp(ptr->data, insert->data) < 0)
			if (cmp(forw->data, insert->data) > 0)
			{
				if (insertcount->next == NULL)
					break ;
				insertcount = insertcount->next;
				ptr->next = insert;
				insert->next = forw;
				insert = insertcount;
			}
		begin = (begin->next == NULL) ? *begin_list1 : begin->next;
	}
}
