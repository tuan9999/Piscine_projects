
#ifndef GEN_FNCTS_H
# define GEN_FNCTS_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
char	*convertupper(unsigned int num, int base);
char	*convertlower(unsigned int num, int base);
char	*converthex(float num, int base);

#endif
