/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsq.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 16:39:09 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/27 19:52:03 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "../include/functions.h"

void	rowcheck(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		i++;
		if (str[i] == '\n')
			count++;
	}
	if (g_row != count)
	{
		write(1, "given number does not match row count.\n", 39);
		exit(0);
	}
}

int		min(int a, int b, int c)
{
	int m;

	m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return (m);
}

int		**populatecopy(int **input, int row, int column)
{
	int i;
	int j;
	int **copy;

	i = 0;
	copy = malloc(sizeof(int) * column * row + 1);
	while (i < row)
	{
		copy[i] = malloc(sizeof(int) * column + 1);
		i++;
	}
	i = 0;
	j = 0;
	while (i < row)
	{
		copy[i][0] = input[i][0];
		i++;
	}
	while (j < column)
	{
		j++;
		copy[0][j] = input[0][j];
	}
	return (copy);
}

void	ft_getmaxval(int **copy, int row, int column)
{
	int i;
	int j;
	int max_i;
	int max_j;

	max_i = 0;
	max_j = 0;
	i = 0;
	while (i < row)
	{
		j = 0;
		while (j < column)
		{
			if (copy[0][0] < copy[i][j])
			{
				copy[0][0] = copy[i][j];
				max_i = i;
				max_j = j;
			}
			j++;
		}
		i++;
	}
	copy = populatesquare(copy, copy[0][0], max_i, max_j);
	ft_printgrid(copy);
}

void	bsq(int **input, int row, int column)
{
	int i;
	int j;
	int **copy;

	copy = populatecopy(input, row, column);
	i = 1;
	while (i < row)
	{
		j = 1;
		while (j < column)
		{
			if (input[i][j] == 1)
				copy[i][j] = min(copy[i][j - 1],
								copy[i - 1][j],
								copy[i - 1][j - 1]) + 1;
			else
				copy[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_getmaxval(copy, row, column);
}
