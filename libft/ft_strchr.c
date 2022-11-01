/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:56:16 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 18:56:16 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    unsigned int    i;

    i = 0;
    while (str[i] != '\0' && str[i] != (char)c)
        i++;
    if ((char)c == str[i])
        return ((char *)str + i);
    return (NULL);
}
