/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_destroy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 12:21:53 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 12:21:54 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	while (*factory)
	{
		while (**factory)
		{
			free(**factory);
			(*factory)++;
		}
		free(*factory);
		factory++;
	}
	free(factory);
}
