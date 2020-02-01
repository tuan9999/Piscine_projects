/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/17 15:49:38 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/17 15:49:38 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudokufunctions.h"

int		sudokusolver(int **arr, int index)
{
	int num;
	int row;
	int col;

	row = index / 9;
	col = index % 9;
	if (index == 81)
		return (1);
	if (arr[row][col] != 0)
		return (sudokusolver(arr, index + 1));
	num = 1;
	while (num <= 9)
	{
		if (ft_grid_checkt(arr, row, col, num) == 1)
		{
			arr[row][col] = num;
			if (sudokusolver(arr, index + 1) == 1)
				return (1);
			arr[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	ft_printgrid(int **arr)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(arr[i][j] + '0');
			if (j < 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		ft_finalcheck(int **arr)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			k = 0;
			while (k < 9)
			{
				if (k != j)
				{
					if (arr[i][j] == arr[i][k])
						return (0);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;
	int **arr;

	if (argc != 10)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (ft_check_input(argv[i]) != 1)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	arr = ft_strtointarr(argv);
	if ((sudokusolver(arr, 0) == 1) && (ft_finalcheck(arr) == 1))
		ft_printgrid(arr);
	else
		write(1, "Error\n", 6);
	return (0);
}
