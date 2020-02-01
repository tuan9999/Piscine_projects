#include <stdio.h>
#include "../include/gen_fncts.h"

void	ft_printf(char* format,...)
{ 
	char			*traverse;
	unsigned int	i;
	char			*s;

	va_list arg;
	va_start(arg, format);
	traverse = format;

	while (*traverse != '\0')
	{
		while (*traverse != '%' && *traverse != '\0')
		{
			ft_putchar(*traverse);
			traverse++;
		}
		
		traverse++;

		if (*(traverse - 1) == '%')
		{
			if (*traverse == 'c')
			{
				i = va_arg(arg, int);
				ft_putchar(i);
			}
			else if (*traverse == 'd' || *traverse == 'i')
			{
				i = va_arg(arg, int);
				if (i < 0)
				{
					i = -i;
					ft_putchar('-');
				}
				ft_putstr(convertlower(i, 10));
			}
			else if (*traverse == 'o')
			{
				i = va_arg(arg, unsigned int);
				ft_putstr(convertlower(i, 8));
			}
			else if (*traverse == 's')
			{
				s = va_arg(arg, char *);
				ft_putstr(s);
			}
			else if (*traverse == 'x')
			{
				i = va_arg(arg, unsigned int);
				ft_putstr(convertlower(i, 16));
			}
			else if (*traverse == 'X')
			{
				i = va_arg(arg, unsigned int);
				ft_putstr(convertupper(i, 16));
			}
			else if (*traverse == 'a')
			{
				i = va_arg(arg, unsigned int);
				ft_putstr(converthex(i, 10));
			}
		}
		traverse++;
	}
	va_end(arg); 
} 

int		main()
{ 
	ft_printf(" my printf \n %x\n", 90);
	//printf(" std printf \n %a\n", 1.230);
	
	return (0);
}
