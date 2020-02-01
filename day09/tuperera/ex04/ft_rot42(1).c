/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rot42.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 11:23:26 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 11:23:26 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_rotate(str[i], 'z');
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ft_rotate(str[i], 'Z');
		i++;
	}
	return (str);
}

char	ft_rotate(char s, char smax)
{
	int cycle;
	int i;

	cycle = 42 - 26;
	i = 0;
	while (i < cycle)
	{
		s += 1;
		if (s > smax)
			s -= 26;
		i++;
	}
	return (s);
}
