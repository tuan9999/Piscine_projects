/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 10:46:44 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 10:46:44 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = n;
	while (i > 0)
	{
		*dest++ = *src++;
		i--;
	}
	*dest = '\0';
	dest -= n;
	return (dest);
}
