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

#include "ft_list.h"

int		main(int argc, char **argv)
{
	if (argc)
	{
		if (argc < 2)
			ft_write();
		if (argc >= 2)
		{
			argv++;
			ft_read(argv);
		}
		return (0);
	}
	return (0);
}
