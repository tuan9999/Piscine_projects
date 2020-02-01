/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functionptrs.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/19 16:01:44 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/19 16:01:44 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i <= length)
	{
		f(tab[i]);
		write(1, "\n", 1);
		i++;
	}
}

void	ft_putnumber(int i)
{
	if (i < 10 && i >= 0)
	{
		i += '0';
		write(1, &i, 1);
	}
	if (i < 0)
	{
		write(1, &i, 1);
		i += '0';
		write(1, &i, 1);
	}
}

void	ft_add(int *i)
{
	*i += 5;
}

int		main(void)
{
	// creating int arrays
	int *tabb;
	int tab[] = {1, 2, 3, 4, 5};
	tabb = &tab[0];

	int length = 4;

	// creating function pointers
	void (*f)(int);
	void(*fa)(int*);

	// assigning ptr functs 
	f = &ft_putnumber;
	f(tab[3]);

	write(1, "\n", 1);

	fa = &ft_add;
	fa((tab + 3));

	f = &ft_putnumber;
	f(tab[3]);
	write(1, "\n", 1);
	ft_foreach(tabb, length, ft_putnumber);
}
