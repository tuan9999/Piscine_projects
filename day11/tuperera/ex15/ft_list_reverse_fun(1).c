/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse_fun.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 14:39:37 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 14:39:37 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *ptr;
	t_list *back;
	t_list *forw;

	back = NULL;
	ptr = begin_list;
	forw = ptr->next;
	while (forw)
	{
		ptr->next = back;
		back = ptr;
		ptr = forw;
		if (forw->next == NULL)
			break ;
		forw = forw->next;
	}
}
