/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:44:44 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/05 18:44:44 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t  len;
    size_t  i;
    char    *dest;

    i = 0;
    len = ft_strlen(s);
    dest = malloc((len + 1) * sizeof(char));
    if (!s || !f || !dest)
        return (NULL);
    while (i < len)
    {
        dest[i] = f(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
