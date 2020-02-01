/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_max.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 14:46:44 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 14:46:44 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int max;
	int i;

	i = 0;
	max = tab[i];
	while (i < length)
	{
		if (tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}
