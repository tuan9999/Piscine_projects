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
#include "check.h"
#include <stdio.h>

int 	eval_expr(char *str)
{
	int (*operation[5])(int, int);
	int brackets;
	char **newstr;

	newstr = ft_split_whitespaces(str);
	operation[0] = &ft_add;
	operation[1] = &ft_subtract;
	operation[2] = &ft_divide;
	operation[3] = &ft_multiply;
	operation[4] = &ft_modulo;
	brackets = ft_checkbrackets(str);

	ft_doop(newstr, operation, brackets);
	return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}

// void	ft_doop(char **str, int (**operation)(int, int), int brackets)
// {
// 	int arg1;
// 	int arg2;
// 	int result;
// 	int i;
// 	int brac;

// 	brac = brackets;
// 	i = 0;
// 	result = operation[0](1, 2);
// 	arg1 = 0;
// 	arg2 = 0;
// 	printf("brac = %d\n", brac);
// 	while (str[i])
// 	{
// 		if (str[i][0] == '(')
// 		{
// 			brac--;
// 			if (brac == 0)
// 			{
// 				printf("str = %s\n", *(str + i));
// 				printf("str = %s\n", *(str + i + 1));
// 				printf("str = %s\n", *(str + i + 2));
// 				brac = brackets - 1;
// 			}
// 		}
// 		i++;
// 	}
// }

// int		calculate(char **str, int (**operation)(int, int))
// {
// 	int arg1;
// 	int arg2;
// 	int result;
// 	int i;
// 	int type;

// 	i = 0;
// 	result = 0;
// 	type = 0;
// 	while (str[i] != ')' && str[i] != '\0')
// 	{
// 		if (str[i] == '+')
// 			type = 0;
// 		if (str[i] == '-')
// 			type = 1;
// 		if (str[i] == '/')
// 			type = 2;
// 		if (str[i] == '*')
// 			type = 3;
// 		if (str[i] == '%')
// 			type = 4;
// 		i++;
// 	}
	
// 	arg1 = ft_atoi(str[1]);
// 	arg2 = ft_atoi(str[3]);
// 	result = operation[type](arg1, arg2);
// 	return (result);
// }
