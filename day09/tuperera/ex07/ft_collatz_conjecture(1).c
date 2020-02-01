/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_collatz_conjecture.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 12:32:01 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 12:32:02 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int t;

	t = base;
	if (base != 1)
	{
		if (base % 2 == 0)
			ft_collatz_conjecture((t / 2));
		else
			ft_collatz_conjecture(((t + 3) / 2));
	}
	return (base);
}
