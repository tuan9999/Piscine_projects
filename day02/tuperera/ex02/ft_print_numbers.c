/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/07 11:54:29 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/07 11:54:30 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int i;

	i = 0;
	while (i != 10)
	{
		ft_putchar(i + '0');
		i++;
	}
	return ;
}
