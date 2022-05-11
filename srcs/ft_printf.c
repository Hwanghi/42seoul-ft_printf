/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:25:43 by hehwang           #+#    #+#             */
/*   Updated: 2022/05/11 18:54:47 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "print.h"
#include "ft_printf.h"

static int	istype(char c)
{
	int	i;

	i = -1;
	while (++i < 9)
	{
		if ("cspdiuxX%"[i] == c)
			return (1);
	}
	return (0);
}

static int	check_type(char type, va_list ap)
{
	int	print_size;

	print_size = 0;
	if (type == 'd' || type == 'i' || type == 'u')
		print_size = print_du(type, va_arg(ap, int));
	else if (type == 'x' || type == 'X')
		print_size = print_x(type, va_arg(ap, int));
	else if (type == 'p')
		print_size = print_p(va_arg(ap, void *));
	else if (type == 's')
		print_size = print_s(va_arg(ap, void *));
	else
	{
		if (type == 'c')
			ft_putchar((char)va_arg(ap, int));
		else if (type == '%')
			ft_putchar('%');
		print_size = 1;
	}
	return (print_size);
}

static int	pf_printf(const char *fmt, va_list ap)
{
	int	print_size;
	int	i;

	print_size = 0;
	i = 0;
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			++i;
			if (istype(fmt[i]))
				print_size += check_type(fmt[i], ap);
		}
		else
		{
			ft_putchar(fmt[i]);
			print_size++;
		}
		++i;
	}
	return (print_size);
}

int	ft_printf(const char *fmt, ...)
{
	int		print_size;
	va_list	ap;

	va_start(ap, fmt);
	print_size = pf_printf(fmt, ap);
	va_end(ap);
	if (print_size < 0)
		return (-1);
	return (print_size);
}
