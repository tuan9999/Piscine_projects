/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/26 10:53:35 by tuperera       #+#    #+#                */
/*   Updated: 2019/08/28 21:37:51 by mmulle        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/functions.h"
#include "../include/extrafncts.h"
#include "../include/bsq.h"

char	*ft_strdup(char *src, int len)
{
	char	*res;
	int		i;

	i = 0;
	res = malloc(sizeof(char) * len + 10);
	while (i < len)
	{
		*res = *src;
		res++;
		src++;
		i++;
	}
	res -= i;
	free(src);
	return (res);
}

void	readfle(char *str)
{
	int		fd;
	int		ret;
	char	*save;

	g_len = 16;
	save = malloc(sizeof(char) * g_len);
	fd = 1;
	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error.", 7);
		return ;
	}
	ret = 1;
	extend_readfle(fd, ret, save);
}

void	extend_readfle(int fd, int ret, char *save)
{
	int		i;
	int		j;

	j = 0;
	while (ret)
	{
		ret = read(fd, g_buf, 10);
		i = 0;
		while (i != ret)
		{
			save[j] = g_buf[i];
			j++;
			i++;
		}
		if (j == g_len)
		{
			save = ft_strdup(save, g_len);
			g_len += 8;
		}
	}
	save[j] = '\0';
	fd = close(fd);
	charcheck(save);
	assignvars(save);
}

char	*read_output(int j)
{
	char	*save;
	int		i;
	int		ret;

	g_len = 16;
	save = malloc(sizeof(char) * g_len);
	ret = read(0, g_buf, 10);
	while (ret)
	{
		i = 0;
		while (i != ret)
		{
			save[j] = g_buf[i];
			j++;
			i++;
		}
		if (j == g_len)
		{
			save = ft_strdup(save, g_len);
			g_len += 8;
		}
		ret = read(0, g_buf, 10);
	}
	save[j] = '\0';
	return (save);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;

	i = 1;
	j = 0;
	str = NULL;
	if (argc < 2)
	{
		str = read_output(j);
		assignvars(str);
		return (0);
	}
	else
	{
		while (argv[i])
		{
			readfle(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
