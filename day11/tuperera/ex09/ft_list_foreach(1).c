/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_foreach.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 13:24:12 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 13:24:13 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr)
	{
		f(ptr->data);
		ptr = ptr->next;
	}
}
