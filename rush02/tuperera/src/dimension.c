/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dimension.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 15:44:21 by hlin          #+#    #+#                 */
/*   Updated: 2019/08/24 15:45:43 by hlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

int		check_height(char *str)
{
	int	height;
	int	i;

	i = 0;
	height = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			height++;
		i++;
	}
	return (height);
}

int		check_width(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		i++;
	}
	return (i);
}

int		ft_rush_check_square(char *str)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
			return (2);
		else if (str[i] == 'C')
		{
			i++;
			while (str[i] != '\0')
			{
				if (str[i] == 'A')
					return (3);
				else if (str[i] == 'C')
					return (4);
				i++;
			}
		}
		i++;
	}
	return (9);
}

int		ft_rush_check(char *str, int h, int w)
{
	int	i;

	i = 1;
	while (str[i] != '\0')
	{
		if (w > 1 && h == 1)
		{
			if (str[i] == 'A')
				return (2);
			else if (str[i] == 'C')
				return (3);
		}
		else if (w == 1 && h > 1)
		{
			if (str[i] == 'A')
				return (3);
			else if (str[i] == 'C')
				return (2);
		}
		else
			return (ft_rush_check_square(str));
		i++;
	}
	return (0);
}

int		ft_rush_check_all(char *str, int h, int w)
{
	int rush;

	if (*str == 'o')
		rush = 0;
	else if (*str == '/')
		rush = 1;
	else if (*str == 'A')
	{
		if (h == 1 && w == 1)
			return (2);
		else
			rush = ft_rush_check(str, h, w);
	}
	else
		return (0);
	return (rush);
}
