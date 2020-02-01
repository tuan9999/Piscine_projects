/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_at.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/21 12:38:06 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/21 12:38:06 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*result;
	int		i;
	int		j;

	j = nbr;
	result = begin_list;
	i = 0;
	while (i <= j)
	{
		result = result->next;
		i++;
	}
	if (result)
		return (result);
	else
	{
		result = NULL;
		return (result);
	}
}
