/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sastantua.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/11 10:58:51 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/11 10:58:52 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	sastantua(int size)
{
	int j;
	int k;
	int i;
	int space;
	int n = size;
	int o = 0;
	int check;
	int lvlinc;

	i = 1;
	check = 3;
	lvlinc = 4;
	space = (n * (n + n) - (n * 3));
	while (i <= check)
	{
		j = 0;
		k = 1;
		while (k++ < space)
			ft_putchar(' ');
		ft_putchar('/');
		while (j++ < (((2 * i) - 1) + (o * lvlinc)))
		{
			if ((i > ((n * n) - n) + 2) && (j > (n + i) && (j < (n + (i + 6)))))
				ft_putchar('|');
			else
				ft_putchar('*');
		}
		ft_putchar('\\');
		if ((i == check) && check < (n * n))
		{
			o++;
			check = check + (3 + o);
			space -= ((size + 1)/2);
			space++;
			if (o >= 3)
			{
				i++;
				check++;
				space--;
			}
		}
		i++;
		space--;
		ft_putchar('\n');
	}
}
