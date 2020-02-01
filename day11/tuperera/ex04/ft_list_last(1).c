/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_last.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 21:32:20 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 21:32:20 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (begin_list->next == NULL)
		return (begin_list);
	while (begin_list)
	{
		begin_list = begin_list->next;
		if (begin_list->next == NULL)
			return (begin_list);
	}
	return (begin_list);
}
