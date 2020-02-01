/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_find_next_prime.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 15:09:46 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/09 15:09:47 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int i;

	if (nb == 0)
		return (0);
	if (nb == 1 || nb < 0)
		return (2);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			nb++;
			ft_find_next_prime(nb);
		}
		i++;
	}
	return (nb);
}
