#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

# define INT_LEN 11
# define HEX_LEN 8
# define ADR_LEN 14

int		ft_strlen(const char *s);
int		ft_convert_base(char *, int, unsigned long, const char *);
void	ft_tolowerstr(char *s);
void	ft_putchar(char c);

#endif
