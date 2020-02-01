/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_spy.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 13:04:58 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 13:04:58 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *str1, char *str2)
{
	char *s1;
	char *s2;

	s1 = ft_strlowcase(str1);
	s2 = ft_strlowcase(str2);
	while (*s1)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (*str == ' ')
		str++;
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

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (ft_strcmp(argv[i], "president") == 0)
		{
			write(1, "ALERT!!!\n", 9);
			return (0);
		}
		if (ft_strcmp(argv[i], "bauer") == 0)
		{
			write(1, "ALERT!!!\n", 9);
			return (0);
		}
		if (ft_strcmp(argv[i], "attack") == 0)
		{
			write(1, "ALERT!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
