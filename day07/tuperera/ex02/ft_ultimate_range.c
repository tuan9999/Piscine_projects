/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_range.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 18:11:09 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/14 18:11:10 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
		return (0);
	i = 0;
	*range = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		**range = min;
		(*range)++;
		min++;
		i++;
	}
	(*range) -= i;
	return (i);
}
