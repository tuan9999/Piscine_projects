/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_wordtab.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 13:00:07 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 13:00:09 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		if (ft_strcmp(*(tab + i), *(tab + i + 1)) > 0)
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
