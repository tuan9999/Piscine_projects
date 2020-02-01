/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 18:17:24 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 18:17:24 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z') && *str != ' ')
			return (0);
		str++;
	}
	return (1);
}
