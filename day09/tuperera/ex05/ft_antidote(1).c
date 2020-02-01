/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_antidote.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/16 11:34:56 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/16 11:34:56 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (j > k)
		swap(&j, &k);
	if (i > j)
		swap(&i, &j);
	return (j);
}

void	swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
