#include "../include/gen_fncts.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*convertupper(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while(num != 0)
	{
		--ptr;
		*ptr = Representation[num % base];
		num /= base;
	}
	return (ptr); 
}

char	*convertlower(unsigned int num, int base)
{
	static char Representation[] = "0123456789abcdef";
	static char buffer[50];
	char		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while(num != 0)
	{
		--ptr;
		*ptr = Representation[num % base];
		num /= base;
	}
	return (ptr); 
}

char	*converthex(float num, int base)
{
	static char Representation[] = "0123456789abcdef";
	static char buffer[50];
	char		*ptr;
	int			nm;
	int			decimal;

	ptr = &buffer[49];
	*ptr = '\0';
	nm = num / 1;

	decimal = num;

	while (decimal != 0)
	{
		--ptr;
		*ptr = Representation[decimal % base];
		decimal /= base;
	}
	
	return (ptr); 
}
