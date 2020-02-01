/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/13 18:04:28 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/13 18:04:30 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstring(char *str);

int		main(int argc, char **argv)
{
	argv++;
	if (argc > 1)
	{
		while (*argv != 0)
		{
			ft_putstring(*argv);
			ft_putchar('\n');
			argv++;
		}
	}
}

void	ft_putstring(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
	return ;
}
