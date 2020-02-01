/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 12:16:18 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 12:16:18 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
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

int		ft_atoi(char *str)
{
	int sign;
	int n;
	int c;

	n = 0;
	sign = 1;
	c = 0;
	while (*str)
	{
		while (*str == ' ' && c != 1)
			str++;
		if (*str == '-' && c != 1)
		{
			sign = (*str == '-') ? -1 : 1;
			str++;
		}
		if (*str >= '0' && *str <= '9')
		{
			c = 1;
			n = n * 10 + *str - '0';
		}
		if (!(*str >= '0' && *str <= '9'))
			break ;
		str++;
	}
	n *= sign;
	return (n);
}

int		ft_checkstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (1);
		i++;
	}
	return (0);
}
