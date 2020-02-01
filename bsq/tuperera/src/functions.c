/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 10:55:15 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/27 20:06:08 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/functions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_freearr(int **arr)
{
	int i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	if (arr)
		free(arr);
}

void	colcheck(char *str)
{
	int i;
	int colcount1;
	int colcount2;

	i = 0;
	colcount1 = 0;
	while (str[i] != '\n')
		i++;
	colcount1 = i;
	i++;
	while (str[i] != '\0')
	{
		colcount2 = 0;
		while (str[i] != '\n')
		{
			i++;
			colcount2++;
		}
		i++;
		if (colcount1 != colcount2)
		{
			write(1, "Error, not all columns are the same size.\n", 42);
			exit(0);
		}
	}
}

void	ft_printgrid(int **arr)
{
	int		i;
	int		j;

	i = 0;
	while (i < g_row)
	{
		j = 0;
		while (j < g_column)
		{
			if (arr[i][j] == -1)
				ft_putchar(g_full);
			if (arr[i][j] >= 1)
				ft_putchar(g_empty);
			if (arr[i][j] == 0)
				ft_putchar(g_obsticle);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
	free(arr);
}

int		**populatesquare(int **copy, int max_copy, int max_i, int max_j)
{
	int counti;
	int countj;
	int i;
	int j;

	i = max_i;
	counti = 0;
	while (counti < max_copy)
	{
		countj = 0;
		j = max_j;
		while (countj < max_copy)
		{
			copy[i][j] = -1;
			j--;
			countj++;
		}
		i--;
		counti++;
	}
	return (copy);
}
