/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   operators.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/20 13:11:08 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/20 13:11:09 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(int i, int j)
{
	int result;

	result = i + j;
	return (result);
}

int		ft_subtract(int i, int j)
{
	int result;

	result = i - j;
	return (result);
}

int		ft_divide(int i, int j)
{
	int result;

	result = i / j;
	return (result);
}

int		ft_multiply(int i, int j)
{
	int result;

	result = i * j;
	return (result);
}

int		ft_modulo(int i, int j)
{
	int result;

	result = i % j;
	return (result);
}
