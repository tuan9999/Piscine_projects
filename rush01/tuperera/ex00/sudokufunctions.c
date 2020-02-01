/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   string.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/17 16:14:04 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/17 16:14:04 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		*ft_strtoint(char *str, int *arr)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			arr[i] = (str[i] - '0');
		if (str[i] == '.')
			arr[i] = 0;
		i++;
	}
	return (arr);
}

int		**ft_strtointarr(char **str)
{
	int **arr;
	int i;

	i = 0;
	str++;
	arr = (int **)malloc(9 * 9 * sizeof(int));
	while (i < 9)
	{
		arr[i] = (int*)malloc(sizeof(int) * 9);
		arr[i] = ft_strtoint(*str, arr[i]);
		i++;
		str++;
	}
	return (arr);
}

int		ft_check_input(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	if (i != 9)
		return (0);
	i = 0;
	while (str[i])
	{
		if ((str[i] < '1' || str[i] > '9') && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

int		ft_grid_checkt(int **arr, int row, int col, int value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if (arr[i][col] == value || (arr[row][i] == value))
			return (0);
		i++;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (arr[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
