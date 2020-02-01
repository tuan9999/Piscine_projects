/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extrafncts.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/27 11:49:03 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/28 22:00:40 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/extrafncts.h"
#include "../include/functions.h"
#include "../include/bsq.h"

int		ft_atoi(char *str)
{
	int n;
	int c;
	int i;

	n = 0;
	c = 0;
	i = 0;
	while (*str)
	{
		while (str[i] == ' ' && c != 1)
			i++;
		if (str[i] >= '0' && str[i] <= '9')
		{
			c = 1;
			n = n * 10 + str[i] - '0';
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	return (n);
}

void	assignglobal(char *str)
{
	int column;
	int i;

	i = 0;
	column = 0;
	while (str[i] != '\n')
		i++;
	g_empty = str[i - 3];
	str[i - 3] = '|';
	g_obsticle = str[i - 2];
	g_full = str[i - 1];
	g_row = ft_atoi(str);
	i++;
	while (str[i] != '\0')
	{
		column++;
		if (str[i] == '\n' || str[i] == '\0')
		{
			g_column = column - 1;
			column = 0;
		}
		i++;
	}
}

void	assignglobal2(int i, int j, int **input, char *str)
{
	int k;

	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
		{
			if (str[i] == g_empty)
				input[j][k] = 1;
			else if (str[i] == g_obsticle)
				input[j][k] = 0;
			else if (str[i] == g_full)
			{
				write(1, "Error.", 7);
				return ;
			}
			k++;
		}
		else if (str[i] == '\n')
		{
			j++;
			k = 0;
		}
		i++;
	}
}

void	assignvars(char *str)
{
	int i;
	int j;
	int k;
	int **input;

	j = 0;
	k = 0;
	i = 0;
	assignglobal(str);
	input = malloc(sizeof(int) * g_column * g_row);
	while (i < g_row)
	{
		input[i] = malloc(sizeof(int) * g_column);
		i++;
	}
	i = 0;
	while (*str != '\n')
		str++;
	str++;
	rowcheck(str);
	colcheck(str);
	assignglobal2(i, j, input, str);
	bsq(input, g_row, g_column);
}

void	charcheck(char *str)
{
	int		a;
	char	i;
	char	j;
	char	k;

	a = 0;
	while (str[a] != '\n')
		a++;
	i = str[a - 1];
	j = str[a - 2];
	k = str[a - 3];
	while (str[a] != '\0')
	{
		if (str[a] == '\n' || str[a] == i || str[a] == j || str[a] == k)
			a++;
		else
		{
			write(1, "map contains unexpected characters.\n", 37);
			exit(0);
		}
	}
}
