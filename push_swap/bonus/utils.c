/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:17:38 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/16 17:21:36 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *str)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(str) + 1;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, str, i);
	return (dest);
}

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*s1;

	if (!dest && !src)
		return (0);
	i = 0;
	s = (char *)src;
	s1 = dest;
	while (i < n)
	{
		s1[i] = s[i];
		i++;
	}
	return (dest);
}
