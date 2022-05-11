/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 18:59:04 by hehwang           #+#    #+#             */
/*   Updated: 2022/05/11 19:01:03 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>

int		ft_strlen(const char *s);
int		ft_convert_base(char *s, int l, unsigned long a, const char *charset);
void	ft_tolowerstr(char *s);
void	ft_putchar(char c);

#endif
