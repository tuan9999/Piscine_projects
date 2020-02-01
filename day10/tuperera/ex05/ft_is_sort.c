/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_sort.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 12:39:59 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 12:40:00 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (f(tab[i], tab[i + 1]) == 0)
		while (f(tab[i], tab[i + 1]) == 0)
			i++;
	if (f(tab[i], tab[i + 1]) < 0)
	{
		while (i < length)
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
		return (1);
	}
	if (f(tab[i], tab[i + 1]) > 0)
	{
		while (i < length)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	return (1);
}
