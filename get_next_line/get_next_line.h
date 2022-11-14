/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:01:17 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/12 19:01:17 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _GET_NEXT_LINE_
#define _GET_NEXT_LINE_

# include <unistd.h>
# include <stdlib.h>
char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t n, size_t daty);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
