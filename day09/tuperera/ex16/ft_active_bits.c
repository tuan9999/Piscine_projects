/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_active_bits.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 14:56:31 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 14:56:31 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int bits;

	bits = 0;
	if (value < 0)
		value *= -1;
	while (value)
	{
		bits += value & 1;
		value >>= 1;
	}
	return (bits);
}
