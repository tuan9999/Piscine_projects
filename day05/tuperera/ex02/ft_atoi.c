/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 10:35:11 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 10:35:12 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int sign;
	int n;
	int c;

	n = 0;
	while (*str)
	{
		while (*str == ' ' && c != 1)
			str++;
		if ((*str == '-' || *str == '+') && c != 1)
		{
			sign = (*str == '-') ? -1 : 1;
			str++;
		}
		if ((*str >= '0' && *str <= '9'))
		{
			c = 1;
			n = n * 10 + *str - '0';
		}
		if (!(*str >= '0' && *str <= '9'))
			break ;
		str++;
	}
	n = (sign == -1) ? -n : n;
	return (n);
}
