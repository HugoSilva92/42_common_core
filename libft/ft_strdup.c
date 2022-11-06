/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:03:22 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 19:07:27 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dest;
	size_t		i;

	i = ft_strlen(str) + 1;
	dest = malloc(i * sizeof(char));
	if (!dest)
		return(NULL);
	ft_memcpy(dest, str, i);
	return (dest);
}
