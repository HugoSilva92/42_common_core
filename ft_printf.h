/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:54:12 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/03 16:35:20 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

int	ft_prtstr(char *str);
int	ft_putchar(int c);
int	ft_nbsup16(unsigned long long nb);
void	ft_prtadr(unsigned long long ptr);
int	ft_putadr(unsigned long long ptr);
int ft_prtnb(int nb);
int	ft_nbsup10(unsigned int nb);
char	*ft_uitoa(unsigned int n);
int	ft_prtunnb(unsigned int nb);

#endif
