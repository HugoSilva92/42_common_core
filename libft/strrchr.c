/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:39:17 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:39:17 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    while (str[i] != c && i > 0)
        i--;
    if (i == 0 && str[i] != c)
        return (0);
    return ((char *)str + i);
}
