/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 10:25:15 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 10:25:16 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
		ft_putnbr(temp / 10);
	ft_putchar((temp % 10) + '0');
	return ;
}
