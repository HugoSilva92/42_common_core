/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:35:00 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 23:35:00 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *s1, const char *s2)
{
    int i;
    int i1;
    char    *total;

    total = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
    if (!total || !s1 || !s2)
        return (NULL);
    i = 0;
    i1 = 0;
    while (s1[i] != '\0')
        total[i1++] = s1[i++];
    i = 0;
    while (s2[i] != '\0')
        total[i1++] = s2[i++];
    total[i1] = '\0';
    return (total);
}