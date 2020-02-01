/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 14:00:12 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 14:00:12 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
		i++;
	}
	str -= i;
	return (str);
}
