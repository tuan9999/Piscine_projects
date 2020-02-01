/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 10:15:54 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/09 10:15:55 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		factorial;
	int		i;

	if (nb > 12)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	if (factorial != 0)
		return (factorial);
	else
		return (0);
}
