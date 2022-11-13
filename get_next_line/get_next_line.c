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
	hold = malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if (!hold)
		return (NULL);
	i++;
	i1 = 0;
	while (str[i])
		hold[i1++] = str[i++];
	hold[i] = '\0';
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
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_buffer_reader(int fd, char *str)
{
	char	*buffer;
	int	i;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	i = 1; 							//verificar condicao para 0
	while (!ft_strchr(str, '\n') && i)		//verficar i
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
