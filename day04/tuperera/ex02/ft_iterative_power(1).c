/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 12:07:24 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/09 12:07:25 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	else
	{
		result = 1;
		while (power != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
