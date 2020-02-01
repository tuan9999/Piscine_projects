/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 13:25:22 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 13:25:23 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
		i++;
	}
	str -= i;
	return (str);
}
