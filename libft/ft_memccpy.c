/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:37:51 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:37:51 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *) src)[i];
        if (((unsigned char *)src)[i] == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (0);
}
