/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   function.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/22 18:25:45 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/22 18:25:45 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_list.h"

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

void	ft_error(char *str)
{
	write(1, "cat: ", 5);
	write(1, str, ft_strlen(str));
	write(1, ": No such file or directory\n", 28);
}

void	ft_read(char **str)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	while (*str)
	{
		fd = open(*str, O_RDONLY);
		if (fd == -1)
			ft_error(*str);
		else
		{
			ret = read(fd, buf, BUF_SIZE);
			buf[ret] = '\0';
			ft_putstring(1, buf);
			fd = close(fd);
		}
		str++;
	}
}

void	ft_write(void)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open("ft_cat", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		ft_error(" ");
	while (1)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstring(fd, buf);
	}
	fd = close(fd);
}
