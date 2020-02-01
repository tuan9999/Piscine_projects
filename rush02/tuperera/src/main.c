/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/24 12:10:36 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/25 17:48:20 by nben-ezr      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/dimension.h"
#include "../include/functions.h"
#include "../include/memory.h"

void	ft_output(int w, int h, int rush)
{
	if (rush == 0)
		ft_putstr("[rush-00] ");
	if (rush == 1)
		ft_putstr("[rush-01] ");
	if (rush == 2)
		ft_putstr("[rush-02] ");
	if (rush == 3)
		ft_putstr("[rush-03] ");
	if (rush == 4)
		ft_putstr("[rush-04] ");
	ft_putchar('[');
	ft_putnbr(w);
	ft_putchar(']');
	ft_putchar(' ');
	ft_putchar('[');
	ft_putnbr(h);
	ft_putchar(']');
}

void	ft_print_rush(int h, int w, int rush)
{
	if (h == 1 && w == 1 && (rush == 2 || rush == 3 || rush == 4))
	{
		ft_putstr("[rush-02] [1] [1] || ");
		ft_putstr("[rush-03] [1] [1] || ");
		ft_putstr("[rush-04] [1] [1]");
	}
	else if (h == 1 && w > 1 && (rush == 3 || rush == 4))
	{
		ft_output(w, h, 3);
		ft_putstr(" || ");
		ft_output(w, h, 4);
	}
	else if (w == 1 && h > 1 && (rush == 2 || rush == 4))
	{
		ft_output(w, h, 2);
		ft_putstr(" || ");
		ft_output(w, h, 4);
	}
	else
		ft_output(w, h, rush);
}

int		main(void)
{
	char	*str;
	int		h;
	int		w;
	int		rush;

	str = read_output();
	h = check_height(str);
	w = check_width(str);
	rush = ft_rush_check_all(str, h, w);
	if (ft_checkstrvalid(str) == 0 || ft_rushvalid(str, w, h) == 0)
	{
		ft_putstr("invalid argument\n");
		return (0);
	}
	ft_print_rush(h, w, rush);
	ft_putchar('\n');
	return (0);
}
