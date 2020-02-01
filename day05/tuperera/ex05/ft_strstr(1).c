/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 10:58:00 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 10:58:00 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*presult;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (*to_find == '\0')
		return (str);
	while (str[len] != '\0')
		len++;
	while (i < len)
	{
		if (*(str + i) == *to_find)
		{
			presult = ft_strstr(str + i + 1, to_find + 1);
			return (presult) ? presult - 1 : NULL;
		}
		i++;
	}
	return (NULL);
}
