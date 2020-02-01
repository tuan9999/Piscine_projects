/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_takes_place.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/15 18:45:02 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/15 18:45:03 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*time(int hour)
{
	char *time;

	if ((hour >= 0 && hour <= 11) || hour == 24)
		time = "A.M.";
	else
		time = "P.M.";
	return (time);
}

int		convert(int hour)
{
	if (hour > 12)
		hour -= 12;
	if (hour == 0)
		hour = 12;
	return (hour);
}

void	ft_takes_place(int hour)
{
	int endtime;

	if (hour > 24 || hour < 0)
		return ;
	endtime = hour + 1;
	printf("THE FOLLOWING TAKES PLACE BETWEEN");
	printf(" %02d.00 %s AND %02d.00 %s\n",
	convert(hour), time(hour), convert(endtime), time(endtime));
}
