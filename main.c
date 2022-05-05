#include <stdio.h>

int	ft_printf(const char *, ...);

int	main(int ac, char **av)
{
	printf("hi %s %d \n", "hello", 123);
	ft_printf("hi %s %d \n", "hello", 123);
	return (0);
}
