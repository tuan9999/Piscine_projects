/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_back.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 20:51:05 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 20:51:05 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *end;
	t_list *lastp;

	end = ft_create_elem(data);
	lastp = *begin_list;
	end->next = NULL;
	if (*begin_list == NULL)
	{
		*begin_list = end;
		return ;
	}
	while (lastp->next != NULL)
		lastp = lastp->next;
	lastp->next = end;
}
