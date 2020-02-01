/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/09 10:32:11 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/10 22:29:49 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	if (nb < 1 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int main(void)
{
	printf("%d", ft_recursive_factorial(5));
}
