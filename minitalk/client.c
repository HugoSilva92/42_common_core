/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:27:21 by huolivei          #+#    #+#             */
/*   Updated: 2023/01/06 19:26:41 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


int	main(int ac, char **av)
{
	int	pid;
	if (ac == 2)
	{
		ft_printf("Error!");
		exit(EXIT_FAILURE);
	}
	pid = ft_atoi(av[1]);
	kill(pid, SIGUSR1);
}
