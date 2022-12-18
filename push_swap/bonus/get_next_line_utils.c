/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:39:54 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/18 23:17:37 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *str, int c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != (char)c)
		i++;
	if ((char)c == str[i])
		return ((char *)str + i);
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		i1;
	char	*total;

	total = malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!total)
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

void	*ft_calloc(size_t n, size_t daty)
{
	char	*total;

	total = malloc(n * daty);
	if (!total)
		return (NULL);
	ft_bzero(total, n * daty);
	return (total);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*tt;

	i = 0;
	tt = s;
	while (i < n)
	{
		tt[i] = '\0';
		i++;
	}
}
