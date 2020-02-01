/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_find.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 13:32:22 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 13:32:22 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr)
	{
		if (cmp(ptr->data, data_ref) == 0)
			return (ptr);
		ptr = ptr->next;
	}
	return (ptr);
}
