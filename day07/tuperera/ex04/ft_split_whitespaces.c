/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split_whitespaces.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 13:01:48 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/15 13:01:48 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**splitter(char **result, char *str);

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		j;

	j = 0;
	result = (char **)malloc(sizeof(char) * sizeof(str));
	while (*result)
	{
		*result = (char *)malloc(sizeof(char) * sizeof(str));
		j++;
		result++;
	}
	result -= j;
	result = splitter(result, str);
	return (result);
}

char	**splitter(char **result, char *str)
{
	int j;
	int i;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			result[j][i] = str[i];
			i++;
		}
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			result[j][i] = '\0';
			i++;
			j++;
		}
	}
	return (result);
}

int		main(void)
{
	char *str1 = "a string";
	char **str = ft_split_whitespaces(str1);
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
	
	return (0);
}
