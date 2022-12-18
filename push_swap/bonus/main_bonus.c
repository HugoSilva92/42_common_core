/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:53:15 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/18 23:04:31 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < (n - 1))
			i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	do_moves(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		sa(stack_a);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		sb(stack_b);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		ss(stack_a, stack_b);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		pa(stack_b, stack_a);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		pb(stack_a, stack_b);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		ra(stack_a);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		rb(stack_b);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		rr(stack_a, stack_b);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		rra(stack_a);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		rrb(stack_b);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		rrr(stack_a, stack_b);
}

int	move_check(char *str)
{
	if (ft_strncmp(str, "sa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "sb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ss\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pa\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "pb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "ra\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rb\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rr\n", 3) == 0)
		return (1);
	else if (ft_strncmp(str, "rra\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrb\n", 4) == 0)
		return (1);
	else if (ft_strncmp(str, "rrr\n", 4) == 0)
		return (1);
	return (0);
}

void	getting_str(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	while(1)
	{
		str = get_next_line(0);
		if (str == NULL)
			break;
		if (!move_check(str))
		{
			write(2, "NABO!\n", 6);
			exit(1);
		}
		else
			do_moves(stack_a, stack_b, str);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (ac < 2)
		return (0);
	if (!is_correct_input(av))
		error(NULL, NULL);
	stack_a = get_values(ac, av);
	stack_b = NULL;
	getting_str(&stack_a, &stack_b);
	if (is_sorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
