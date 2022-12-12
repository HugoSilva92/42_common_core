/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:22:12 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/12 11:21:53 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_nb(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	nb_cmp(char *str, char *str1)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (str[i] == '+')
	{
		if (str1[j] != '+')
			i++;
	}
	else if (str1[j] == '+')
		j++;
	while (str[i] && str1[j] && str[i] == str1[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)str[i] - (unsigned char)str1[j]);
}

int	has_duplicates(char **av)
{
	int	i;
	int	i1;

	i = 1;
	while (av[i])
	{
		i1 = 1;
		while (av[i1])
		{
			if (i != i1 && nb_cmp(av[i], av[i1]) == 0)
				return (1);
			i1++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
