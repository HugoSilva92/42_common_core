/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:43:41 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/05 14:43:43 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	numlen(int n)
{
	int	rst;

	rst = 0;
	if (n <= 0)
	{
		n *= -1;
		rst++;
	}
	while (n > 0)
	{
		n /= 10;
		rst++;
	}
	return (rst);
}

char	*ft_itoa(int n)
{
	char	*str;
	int	i;

	i = numlen(n);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	str[i--] = '\0';
	while (n)
	{
		str[i] = n % 10 + '0';
		i--;
		n /= 10;
	}
	return (str);
}
