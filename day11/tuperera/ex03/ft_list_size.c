/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_size.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 21:29:09 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 21:29:09 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
