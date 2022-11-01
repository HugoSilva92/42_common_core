/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:15:04 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 13:15:04 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char*)str)[i] == (unsigned char)c)
            return((void *)str + i);
        i++;
    }
    return (0);
}
