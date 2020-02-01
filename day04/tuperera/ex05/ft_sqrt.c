/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 14:04:15 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/09 14:04:15 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	float	sqrt;
	float	temp;
	int		check;

	sqrt = nb / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	check = sqrt;
	if (check == sqrt)
		return (sqrt);
	else
		return (0);
}
