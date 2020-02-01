/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush00.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tjans <marvin@codam.nl>                      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 11:47:21 by tjans         #+#    #+#                 */
/*   Updated: 2019/08/11 11:17:29 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int counter;
	int counter_b;

	counter = 0;
	while (++counter <= y)
	{
		(counter == 1 || counter == y) ? ft_putchar('o') : ft_putchar('|');
		counter_b = 0;
		while (++counter_b < x - 1)
			(counter == 1 || counter == y) ? ft_putchar('-') : ft_putchar(' ');
		if (x > 1)
			(counter == 1 || counter == y) ? ft_putchar('o') : ft_putchar('|');
		ft_putchar('\n');
	}
}
