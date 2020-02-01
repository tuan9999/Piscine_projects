/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_clear.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 12:25:18 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 12:25:19 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *forw;
	t_list *curr;

	forw = NULL;
	curr = *begin_list;
	curr = curr->next;
	while (curr)
	{
		forw = curr->next;
		free(curr);
		curr = forw;
	}
}
