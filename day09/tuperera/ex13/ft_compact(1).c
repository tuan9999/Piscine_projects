/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_compact.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 16:15:06 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 16:15:06 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (i < length)
	{
		if (tab[i])
		{
			tab[size] = tab[i];
			size++;
		}
		i++;
	}
	return (size);
}
