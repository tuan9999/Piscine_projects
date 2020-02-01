/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_list_push_params.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 21:36:07 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 21:36:08 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*arg;
	t_list	*result;
	int		i;

	i = 1;
	result = NULL;
	if (ac < 1)
		return (result);
	arg = ft_create_elem(av[i]);
	result = arg;
	while (i <= ac)
	{
		i++;
		arg = arg->next;
		arg = ft_create_elem(av[i]);
	}
	return (result);
}
