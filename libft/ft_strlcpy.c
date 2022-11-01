/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:42 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 17:31:42 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t len)
{
    size_t  i;
    size_t  srclen;

    if (!dest || !src)
        return (0);
    srclen = 0;
    while (src[srclen] != '\0')
        srclen++;
    i = 0;
    if (len > 0)
    {
        while (src[i] != '\0' && i < (len - 1))
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (srclen);
}
