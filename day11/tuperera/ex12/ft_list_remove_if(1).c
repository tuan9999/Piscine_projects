/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_remove_if.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 13:36:00 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 13:36:01 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;
	t_list *back;
	t_list *forw;

	back = NULL;
	ptr = *begin_list;
	forw = ptr->next;
	while (forw)
	{
		if (cmp(ptr->data, data_ref) == 0)
		{
			if (back)
				back->next = forw;
			free(ptr);
		}
		back = ptr;
		ptr = forw;
		if (forw->next == NULL)
			break ;
		else
			forw = forw->next;
	}
}
