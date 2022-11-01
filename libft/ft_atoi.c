/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:37:58 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/01 12:37:58 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while ((str[i] > 9 && str[i] < 13) || str[i] == 32)
        i++;
    if (str[i] == 45)
    {
        sign = -1;
        i++;
    }
    else if (str[i] == 43)
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += (str[i] - '0');
        i++;
    }
    return (result * sign);
}
