/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush02.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/10 14:12:30 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/11 12:16:48 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int		counter;
	int		counter_b;
	char	ftput;

	counter = 0;
	while (++counter <= y)
	{
		ftput = (counter == y && counter != 1) ? 'C' : 'B';
		if (counter == 1)
			ftput = 'A';
		ft_putchar(ftput);
		counter_b = 0;
		while (++counter_b < x - 1)
			(counter == 1 || counter == y) ? ft_putchar('B') : ft_putchar(' ');
		if (x > 1)
		{
			ftput = (counter == y) ? 'C' : 'B';
			if (counter == 1)
				ftput = 'A';
			ft_putchar(ftput);
		}
		ft_putchar('\n');
	}
}
