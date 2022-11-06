/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:45:29 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/05 12:45:34 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char c)
{
	int	flag;
	size_t	result;

	result = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			result++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (result);
}

static char	*fill_str(const	char *str, size_t start, size_t finish)
{
	char	*dest;
	size_t	i;

	i = 0;
	dest = malloc ((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		dest[i] = str[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	size_t i;
	size_t i1;
	int	index;
	char	**split;

	i = 0;
	i1 = 0;
	index = -1;
	if (!s || !(split = malloc((word_count(s, c) + 1) * sizeof(char *))))
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[i1++] = fill_str(s, index, i);
			index = -1;
		}
		i++;
	}
	split[i1] = 0;
	return (split);
}
