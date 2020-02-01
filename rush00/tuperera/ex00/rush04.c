/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush04.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 14:12:41 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/11 12:21:41 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int c;
	int c_b;

	c = 0;
	while (c++ != y)
	{
		(c == 1) ? ft_putchar('A') : 1 == 1;
		(c == y && y != 1) ? ft_putchar('C') : 1 == 1;
		(c != 1 && c != y) ? ft_putchar('B') : 1 == 1;
		c_b = 0;
		if (x > 1)
			while (++c_b < x - 1)
				(c == 1 || c == y) ? ft_putchar('B') : ft_putchar(' ');
		if (c == 1 && x > 1)
			(c_b != 0) ? ft_putchar('C') : ft_putchar('B');
		if (c == y && y != 1 && x > 1)
			(c_b != 0) ? ft_putchar('A') : ft_putchar('B');
		if (c != 1 && c != y && x > 1)
			ft_putchar('B');
		ft_putchar('\n');
	}
}
