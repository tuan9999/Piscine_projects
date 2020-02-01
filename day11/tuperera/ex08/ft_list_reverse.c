/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_reverse.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 12:45:59 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 12:45:59 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *forw;
	t_list *curr;
	t_list *back;

	forw = NULL;
	curr = *begin_list;
	back = NULL;
	while (curr)
	{
		forw = curr->next;
		curr->next = back;
		back = curr;
		curr = forw;
		if (!(forw))
			break ;
	}
}
