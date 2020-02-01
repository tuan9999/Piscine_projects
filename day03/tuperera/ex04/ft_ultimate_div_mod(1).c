/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/08 16:17:25 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/08 16:17:26 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tempd;
	int tempm;

	tempd = *a / *b;
	tempm = *a % *b;
	*a = tempd;
	*b = tempm;
}
