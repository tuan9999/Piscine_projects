/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/08 18:33:15 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/08 18:33:15 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int c;
	int sign;
	int offset;
	int n;

	sign = 0;
	if (str[0] == '-')
		sign = -1;
	if (sign == -1)
		offset = 1;
	else
		offset = 0;
	n = 0;
	c = offset;
	while (str[c] != '\0')
	{
		n = n * 10 + str[c] - '0';
		c++;
	}
	if (sign == -1)
		n = -n;
	return (n);
}
