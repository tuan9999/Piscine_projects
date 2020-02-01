/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach_if.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 13:27:45 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 13:27:46 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)(void *, void *))
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
			f(ptr->data);
		ptr = ptr->next;
	}
}
