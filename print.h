#ifndef PRINT_H
# define PRINT_H

# include <stdlib.h>
# include <unistd.h>

int	print_du(char type, int num);
int	print_x(char type, unsigned int num);
int	print_p(void *addr);
int	print_s(const char *str);

#endif
