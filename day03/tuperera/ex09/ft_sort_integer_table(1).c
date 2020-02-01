/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_integer_table.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/08 19:39:47 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/08 19:39:48 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int temp;
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			if (i != 0)
				i--;
		}
		else
			i++;
	}
	return ;
}
