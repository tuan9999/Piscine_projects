/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_merge.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 13:57:49 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 13:57:50 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ptr;

	ptr = *begin_list1;
	while (ptr)
	{
		if (ptr->next == NULL)
			break ;
		ptr = ptr->next;
	}
	ptr->next = begin_list2;
}
