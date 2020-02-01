/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/13 17:40:09 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/13 17:40:10 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	ft_putstring(char *str);

int		main(int argc, char **argv)
{
	ft_putstring(argv[argc - 1]);
	ft_putchar('\n');
	return (0);
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
