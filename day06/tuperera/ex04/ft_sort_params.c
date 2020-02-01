/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/13 18:25:48 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/13 18:25:49 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstring(char *str);

int		main(int argc, char **argv)
{
	char temp[100];
	int i;
	int j;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			if ((argv[i][j] < argv[i + 1][j]))
			{
				while (argv[i][j] != '\0')
				{
					temp[j] = argv[i + 1][j];
					argv[i + 1][j] = argv[i][j];
					argv[i][j] = temp[j];
					j++;
				}
				if (i > 1)
					i--;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_putstring(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstring(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}
