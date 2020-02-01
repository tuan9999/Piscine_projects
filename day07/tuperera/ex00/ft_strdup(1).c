/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 17:52:40 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/14 17:52:41 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	res = malloc(sizeof(char) * i);
	while (*src)
	{
		*res = *src;
		res++;
		src++;
	}
	*res = '\0';
	res -= i;
	return (res);
}
