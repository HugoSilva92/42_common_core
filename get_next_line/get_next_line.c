/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:55:59 by huolivei          #+#    #+#             */
/*   Updated: 2022/11/12 18:55:59 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_hold(char *str)
{
	int	i;
	int	i1;
	char	*hold;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	hold = ft_calloc((ft_strlen(str) - i + 1), sizeof(char));
	i++;
	i1 = 0;
	while (str[i])
		hold[i1++] = str[i++];
	free(str);
	return(hold);
}

char	*ft_get_line(char *str)
{
	int	i;
	char	*line;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof(char));
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] != '\0' && str[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_buffer_reader(int fd, char *str)
{
	char	*buffer;
	int	i;

	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	i = 1;
	while (!ft_strchr(buffer, '\n') && i > 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return(str);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*hold;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	hold = ft_buffer_reader(fd, hold);
	if (!hold)
		return (NULL);
	line = ft_get_line(hold);
	hold = ft_hold(hold);
	return (line);
}
