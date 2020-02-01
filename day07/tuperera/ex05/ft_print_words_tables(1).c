/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_words_tables.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 16:36:52 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/15 16:36:53 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	**ft_split_whitespaces(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_print_words_tables(char **tab)
{
	while (*tab)
	{
		while (**tab)
		{
			ft_putchar(**tab);
			(*tab)++;
		}
		ft_putchar('\n');
		tab++;
	}
}

int main(void)
{
	char **str = ft_split_whitespaces("a string is here");
	ft_print_words_tables(str);
	return 0;
}