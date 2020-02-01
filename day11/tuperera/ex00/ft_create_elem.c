/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_create_elem.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 16:31:48 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 16:31:48 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	new = malloc(sizeof(t_list));
	if (new)
	{
		new->data = data;
		new->next = NULL;
	}
	return (new);
}
