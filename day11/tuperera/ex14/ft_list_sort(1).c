/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_sort.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:07:34 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 14:07:35 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *ptr;
	t_list *forw;

	ptr = *begin_list;
	forw = ptr->next;
	while (forw)
	{
		if (cmp(ptr->data, forw->data) > 0)
		{
			ptr->next = forw->next;
			forw->next = ptr;
			if (ptr->next == NULL)
				break ;
			forw = ptr->next;
		}
		else
		{
			ptr = forw;
			if (forw->next == NULL)
				break ;
			forw = forw->next;
		}
	}
}
