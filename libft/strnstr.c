/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:54:25 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 11:54:25 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t  i;
    size_t  i1;

    i = 0;
 
    if (s2[0] == '\0')
        return ((char *) s1);
    while (s1[i] != '\0')
    {
        i1 = 0;
        while (s1[i + i1] == s2[i1] && (i + i1) < len)
        {
            if (s2[i1 + 1] == '\0')
                return ((char *) &s1[i]);
            i1++;
        }
        i++;
    }
    return (0);
}
