/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 18:26:15 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 18:26:17 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*resptr;

	i = 0;
	while (dest[i] != '\0')
		i++;
	resptr = dest + i;
	while (*src != '\0')
	{
		*resptr = *src;
		resptr++;
		src++;
	}
	*resptr = '\0';
	return (dest);
}
