/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/22 11:22:24 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/22 11:22:25 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstring(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = 1;
	if (argc != 2)
	{
		if (argc < 2)
			ft_putstring(1, "File name missing.");
		if (argc > 2)
			ft_putstring(1, "Too many arguments.");
		return (0);
	}
	argv++;
	fd = open(*argv, O_RDONLY);
	if (fd == -1)
	{
		ft_putstring(1, "Error.");
		return (0);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstring(1, buf);
	fd = close(fd);
	return (0);
}
