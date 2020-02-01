/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   do-op.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 18:44:38 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 18:44:39 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"
#include "operators.h"
#include <stdio.h>

void	ft_doop(char **str, int (**operation)(int, int), int type)
{
	int arg1;
	int arg2;
	int result;

	result = 0;
	if ((ft_checkstr(str[1]) == 0) || (ft_checkstr(str[3]) == 0))
		return ;
	arg1 = ft_atoi(str[1]);
	arg2 = ft_atoi(str[3]);
	if (type == 2 && arg2 == 0)
	{
		ft_putstr("Stop : division by zero");
		ft_putchar('\n');
		return ;
	}
	if (type == 4 && arg2 == 0)
	{
		ft_putstr("Stop : modulo by zero");
		ft_putchar('\n');
		return ;
	}
	result = operation[type](arg1, arg2);
	ft_putnbr(result);
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int (*operation[5])(int, int);
	int type;

	operation[0] = &ft_add;
	operation[1] = &ft_subtract;
	operation[2] = &ft_divide;
	operation[3] = &ft_multiply;
	operation[4] = &ft_modulo;
	if (argv[2][0] == '+')
		type = 0;
	if (argv[2][0] == '-')
		type = 1;
	if (argv[2][0] == '/')
		type = 2;
	if (argv[2][0] == '*')
		type = 3;
	if (argv[2][0] == '%')
		type = 4;
	if (argc != 4)
		return (0);
	ft_doop(argv, operation, type);
	return (0);
}
