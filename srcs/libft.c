/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:25:51 by hehwang           #+#    #+#             */
/*   Updated: 2022/05/11 18:55:19 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert_base(char save[], int sp, unsigned long num, const char *charset)
{
	int	base;

	base = ft_strlen(charset);
	if (num == 0)
		save[--sp] = charset[0];
	while (num)
	{
		save[--sp] = charset[num % base];
		num /= base;
	}
	return (sp);
}

int	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

void	ft_tolowerstr(char *str)
{
	int	diff;

	diff = 'a' - 'A';
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += diff;
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
