/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:59:58 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 17:59:58 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t destsize)
{
    size_t i;
    size_t i1;

    i = 0;
    i1 = 0;
    while (dest [i])
        i++;
    if (destsize < i)
    {
        while (src[i1])
            i1++;
        return (destsize + i1);
    }
    while (destsize > 0 && i < (destsize - 1) && src[i1])
    {
        dest[i++] = src[i1++];
    }
    dest[i] = '\0';
    while (src[i1++])
        i++;
    return (i);
}
