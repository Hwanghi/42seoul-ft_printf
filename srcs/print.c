/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:32:11 by hehwang           #+#    #+#             */
/*   Updated: 2022/05/11 19:05:15 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef INT_LEN
# define INT_LEN 11
#endif
#ifndef HEX_LEN
# define HEX_LEN 8
#endif
#ifndef ADR_LEN
# define ADR_LEN 14
#endif

int	print_du(char type, int num)
{
	int				len;
	int				sp;
	int				minus;
	char			str[INT_LEN];
	unsigned int	unum;

	minus = 1;
	if (type == 'd' || type == 'i')
		if (num < 0)
			minus = -1;
	unum = minus * num;
	sp = ft_convert_base(str, INT_LEN, unum, "0123456789");
	if (minus < 0)
		str[--sp] = '-';
	len = INT_LEN - sp;
	write(1, str + sp, len);
	return (len);
}

int	print_x(char type, unsigned int unum)
{
	int		len;
	int		sp;
	char	str[HEX_LEN];

	sp = ft_convert_base(str, HEX_LEN, unum, "0123456789ABCDEF");
	if (type == 'x')
		ft_tolowerstr(str + sp);
	len = HEX_LEN - sp;
	write(1, str + sp, len);
	return (len);
}

int	print_p(void *addr)
{
	int				len;
	int				sp;
	char			str[ADR_LEN];
	unsigned long	long_addr;

	long_addr = (unsigned long)addr;
	sp = ft_convert_base(str, ADR_LEN, long_addr, "0123456789abcdef");
	str[--sp] = 'x';
	str[--sp] = '0';
	len = ADR_LEN - sp;
	write(1, str + sp, len);
	return (len);
}

int	print_s(const char *str)
{
	int	len;

	if (!str)
	{
		len = 6;
		write(1, "(null)", len);
	}
	else
	{
		len = ft_strlen(str);
		write(1, str, len);
	}
	return (len);
}
