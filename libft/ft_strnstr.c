/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:40:02 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/02 18:35:24 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	i1;

	i = 0;
	if (!s1)
		return (0);
	if (s2[0] == '\0')
		return ((char *) s1);
	while (s1[i] != '\0')
	{
		i1 = 0;
		while (s1[i + i1] == s2[i1] && (i + i1) < len)
		{
			if (s2[i1 + 1] == '\0')
				return ((char *) &s1[i]);
			i1++;
		}
		i++;
	}
	return (0);
}

/*int	main()
{
	char	str[] = "Indo eu, indo eu";
	char	str1[] = "indo";

	ft_putendl_fd(ft_strnstr(str, str1, ft_strlen(str)), 1);
}*/
