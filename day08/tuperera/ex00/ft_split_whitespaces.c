/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/17 12:15:31 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/17 12:15:31 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordcount(char *str)
{
	int		j;
	int		i;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
				i++;
			j++;
		}
		i++;
	}
	j++;
	return (j);
}

char	*splitter(char *result, char *str)
{
	int i;

	i = 0;
	while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0')
	{
		i++;
		str++;
	}
	str -= i;
	i++;
	result = (char *)malloc(sizeof(char) * i);
	i = 0;
	while (*str != '\0' && *str != ' ' && *str != '\n' && *str != '\t')
	{
		if (*str != ' ' || *str != '\n' || *str != '\t')
		{
			result[i] = *str;
			i++;
			str++;
		}
	}
	result[i] = '\0';
	return (result);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		j;
	int		i;

	i = 0;
	j = ft_wordcount(str);
	result = (char **)malloc(sizeof(char) * j);
	i = 0;
	while (i < j)
	{
		if (*str == ' ' || *str == '\n' || *str == '\t')
			while (*str == ' ' || *str == '\n' || *str == '\t')
				str++;
		result[i] = splitter(result[i], str);
		while (*str != ' ' && *str != '\n' && *str != '\t' && *str != '\0')
			str++;
		str++;
		i++;
	}
	return (result);
}
