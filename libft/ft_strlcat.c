/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:39:05 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 18:43:14 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0;
	if(!dest || !src)
		return (0);
	while (dest[i])
		i++;
	if (n < i)
	{
		while (src[i1])
			i1++;
		return (n + i1);
	}
	while (n > 0 && i < (n - 1) && src[i1])
	{
		dest[i++] = src[i1++];
	}
	dest[i] = '\0';
	while (src[i1++])
		i++;
	return (i);
}

/*int	main()
{
	char	dest[] = "nem me vais ver!";
	char	src[] = "nem a mim, mas vais saber o nosso tamanho!";

	ft_putnbr_fd(ft_strlcat(dest, src, 5), 1);
	ft_putchar_fd('\n', 1);
}*/
