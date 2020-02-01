/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/07 11:56:04 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/07 11:56:05 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;

	i = 0 - 1;
	while (++i <= 99)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar((i / 10 + '0'));
			ft_putchar((i % 10 + '0'));
			ft_putchar(' ');
			ft_putchar((j / 10 + '0'));
			ft_putchar((j % 10 + '0'));
			if (i == 98 && j == 99)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}
