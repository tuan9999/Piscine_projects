/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 20:11:41 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 20:11:42 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*resptr;

	i = 0;
	while (dest[i] != '\0')
		i++;
	resptr = dest + i;
	i = 0;
	while (i < nb)
	{
		*resptr = *src;
		resptr++;
		src++;
		i++;
	}
	*resptr = '\0';
	return (dest);
}
