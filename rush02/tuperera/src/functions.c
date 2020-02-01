/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 12:08:42 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/25 17:53:40 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	long temp;

	temp = nb;
	if (temp < 0)
	{
		temp *= -1;
		ft_putchar('-');
	}
	if (temp >= 10)
		ft_putnbr((temp / 10));
	ft_putchar((temp % 10) + '0');
}
