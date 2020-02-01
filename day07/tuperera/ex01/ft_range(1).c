/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_range.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 18:02:27 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/14 18:02:28 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	arr = malloc(sizeof(int) * (max - min));
	if (min > max)
		return (0);
	while (min < max)
	{
		*arr = min;
		arr++;
		min++;
		i++;
	}
	arr -= i;
	return (arr);
}
