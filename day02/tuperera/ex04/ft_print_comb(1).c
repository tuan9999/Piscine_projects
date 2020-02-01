/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/07 11:55:34 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/07 11:55:35 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0' - 1;
	while (++i <= '9')
	{
		j = i;
		while (++j <= '9')
		{
			k = j;
			while (++k <= '9')
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (i == '7' && j == '8' && k == '9')
					return ;
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
