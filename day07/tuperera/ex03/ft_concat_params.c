/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_concat_params.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/14 18:53:03 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/14 18:53:04 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		countlen(char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*ptrstr;
	int		i;
	int		len;

	len = countlen(argv);
	ptrstr = (char *)malloc(sizeof(char) * len);
	if (argc <= 1)
		return (ptrstr);
	i = 0;
	argv++;
	while (*argv)
	{
		while (**argv)
		{
			*ptrstr = **argv;
			ptrstr++;
			(*argv)++;
			i++;
		}
		*ptrstr = '\n';
		ptrstr++;
		argv++;
		i++;
	}
	return ((ptrstr -= i));
}

int		countlen(char **argv)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 1;
	len = 0;
	argv++;
	while (argv[j])
	{
		while (argv[j][i])
		{
			len++;
			i++;
		}
		i = 0;
		j++;
	}
	return (len);
}
