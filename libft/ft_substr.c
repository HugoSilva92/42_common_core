/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 22:50:22 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 22:50:22 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *str, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;

    i = 0;
    sub = malloc(sizeof(char) * len + 1);
    if (!sub)
        return (NULL);
    while (start < ft_strlen(str) && i < len)
    {
        sub[i] = str[start];
        i++;
        start++;
    }
    sub[i] = '\0';
    return (sub);
}
