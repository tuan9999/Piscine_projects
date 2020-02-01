/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   memory.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: hlin <marvin@codam.nl>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 13:23:58 by hlin          #+#    #+#                 */
/*   Updated: 2019/08/24 13:24:01 by hlin          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../include/memory.h"

char	*read_output(void)
{
	char	buffer[BUFFSIZE];
	char	*save;
	int		ret;
	int		i;

	i = 0;
	save = malloc(sizeof(buffer) * BUFFSIZE + 1);
	while ((ret = read(0, buffer, 1)))
	{
		save[i] = buffer[0];
		++i;
	}
	save[i] = '\0';
	return (save);
}

int		ft_checkstrvalid(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != 'A' && str[i] != 'B' && str[i] != 'C')
		{
			if (str[i] != 'o' && str[i] != '-' && str[i] != '|')
			{
				if (str[i] != '/' && str[i] != '*' && str[i] != '\\')
				{
					if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
						return (0);
				}
			}
		}
		i++;
	}
	return (1);
}

int		ft_rushvalid(char *str, int w, int h)
{
	int		i;
	char	middle;
	char	last;

	i = 0;
	if (str[i] != 'A' && str[i] != '/' && str[i] != 'o')
		return (0);
	if (h == 1 && w == 1)
		return (1);
	middle = (str[i] == 'A') ? 'B' : '*';
	last = (str[i] == 'A') ? 'C' : '\\';
	if (str[i] == 'A' && str[w - 1] != last && str[w - 1] != str[i] && w != 1)
		return (0);
	middle = (str[i] == '/') ? '*' : '-';
	last = (str[i] == '/') ? '\\' : 'o';
	if (str[w - 1] != last && w != 1 && str[i] != 'A')
		return (0);
	while (str[i] != last && str[i] != str[0])
	{
		if ((str[i] != middle || str[i] != '\0') && w != 1)
			return (0);
		i++;
	}
	return (1);
}
