/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_advanced_sort_wordtab.c                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 14:56:54 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 14:56:54 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		if (cmp(*(tab + i), *(tab + i + 1)) > 0)
		{
			temp = (*(tab + i + 1));
			(*(tab + i + 1)) = (*(tab + i));
			(*(tab + i)) = temp;
			if (i > 0)
				i--;
		}
		i++;
	}
}
