/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 22:41:48 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/03 22:41:48 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  i;
    size_t  i1;

    i = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[i] != '\0' && ft_strchr(set, s1[i]))
        i++;
    i1 = ft_strlen(s1);
    while (i1 > 0 && ft_strchr(set, s1[i1]))
        i1--;
    return (ft_substr(s1, 0, i1 + 1));
}
