/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:38:58 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:38:58 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    char    *str1;

    i = 0;
    str1 = str;
    while (i < n)
    {
        str1[i] = c;
        i++;
    }
    return ((void *)str1);
}
