/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:37:21 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:37:21 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = 0;
    if (!dest && !src)
        return (0);
    if (((size_t)dest - (size_t)src) < n)
    {
        i = n - 1;
        while (i >= 0 && i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
    }
    else
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}
