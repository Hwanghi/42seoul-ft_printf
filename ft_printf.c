#include <stdarg.h>
#include "libft.h"

int	ft_printf(const char *str, ...)
{
	int	rd_size;
	int	i;
	int num;
	int len;
	va_list format;
	char *print_str;

	va_start(format, str);
	rd_size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			++i;
			if (str[i] == 'd' || str[i] == 'i')
			{
				num = va_arg(format, int);
				print_str = ft_itoa(num);
				
			}
			else if (str[i] == 's')
			{
				print_str = ft_strdup(va_arg(format, char *));
			}
			else
				continue ;
			len = ft_strlen(print_str);
			rd_size += len;
			write(1, print_str, len);
			free(print_str);
		}
		else
		{
			write(1, &str[i], 1);
			rd_size++;
		}
		++i;
	}
	return (rd_size);
}
