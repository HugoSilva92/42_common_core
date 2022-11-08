/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:15 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 16:50:31 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != c && i > 0)
		i--;
	if (i == 0 && str[i] != c)
		return (0);
	return ((char *)str + i);
}

/*int	main()
{
	char	str[] = "Onde esta o W? Ca esta ele";
	char	c = 'W';

	ft_putendl_fd(ft_strchr(str, c), 1);
}*/
