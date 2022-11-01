/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:04:52 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 15:04:52 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
            return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
        i++;
    }
    return (0);
}
