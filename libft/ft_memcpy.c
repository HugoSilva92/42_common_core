/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:37:38 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:37:38 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t  i;
    const char *s;
    char *s1;

    if (!dest && !src)
        return (0);
    i = 0;
    s = (char *)src;
    s1 = dest;
    while (i < n)
    {
        s1[i] = s[i];
        i++;
    }
    return (dest);
}
