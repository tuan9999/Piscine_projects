/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 18:18:36 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 18:18:36 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}
