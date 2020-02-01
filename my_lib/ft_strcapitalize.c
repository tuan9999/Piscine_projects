/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: tuperera <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/12 14:02:58 by tuperera      #+#    #+#                 */
/*   Updated: 2019/08/12 14:02:58 by tuperera      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (i == 0)
		{
			while (str[i] != '\0')
				i++;
			if ((*str >= 'a' && *str <= 'z'))
				*str -= 32;
			str++;
			continue ;
		}
		if (*str == ' ' || (*str >= '!' && *str <= '@'))
		{
			(*(str + 1) == ' ') ? str += 2 : str++;
			if ((*str >= 'a' && *str <= 'z'))
				!(*(str - 1) >= '0' && *(str - 1) <= '9') ? *str -= 32 : 1 == 1;
		}
		else if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return ((str -= i));
}
