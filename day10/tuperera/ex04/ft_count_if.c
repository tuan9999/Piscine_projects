/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_count_if.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 12:37:58 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 12:37:59 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}
