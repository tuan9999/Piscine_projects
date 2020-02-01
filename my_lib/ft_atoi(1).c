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
	int	i;

	i = 0;
	sign = 1;
	n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			sign = (str[i] == '-') ? -1 : 1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			n = n * 10 + str[i] - '0';
			i++;
		}
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		i++;
	}
	n = (sign == -1) ? -n : n;
	return (n);
}
