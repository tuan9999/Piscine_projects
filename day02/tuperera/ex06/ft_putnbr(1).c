/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/07 11:56:29 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/07 11:56:30 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int reverse;
	int temp;
	int remainder;

	reverse = 0;
	while (nb > 0)
	{
		remainder = nb % 10;
		reverse = reverse * 10 + remainder;
		nb /= 10;
	}
	while (reverse > 0)
	{
		temp = reverse % 10;
		ft_putchar(temp + '0');
		reverse /= 10;
	}
	return ;
}
