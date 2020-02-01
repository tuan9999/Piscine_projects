/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_scrambler.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 14:06:14 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 14:06:15 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int ta;
	int tb;
	int tc;
	int td;

	ta = ***a;
	tb = *b;
	tc = *******c;
	td = ****d;
	*******c = ta;
	****d = tc;
	*b = td;
	***a = tb;
}
