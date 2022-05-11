/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 19:01:16 by hehwang           #+#    #+#             */
/*   Updated: 2022/05/11 19:04:26 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_H
# define PRINT_H

# include <unistd.h>

int	print_du(char type, int num);
int	print_x(char type, unsigned int num);
int	print_p(void *addr);
int	print_s(const char *str);

#endif
