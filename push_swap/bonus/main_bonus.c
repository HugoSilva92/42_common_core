/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:53:15 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/29 16:29:56 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0' || s2[index] != '\0'))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	do_moves(t_list **stack_a, t_list **stack_b, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		sa(stack_a);
	else if (ft_strcmp(str, "sb\n") == 0)
		sb(stack_b);
	else if (ft_strcmp(str, "ss\n") == 0)
		ss(stack_a, stack_b);
	else if (ft_strcmp(str, "pa\n") == 0)
		pa(stack_b, stack_a);
	else if (ft_strcmp(str, "pb\n") == 0)
		pb(stack_a, stack_b);
	else if (ft_strcmp(str, "ra\n") == 0)
		ra(stack_a);
	else if (ft_strcmp(str, "rb\n") == 0)
		rb(stack_b);
	else if (ft_strcmp(str, "rr\n") == 0)
		rr(stack_a, stack_b);
	else if (ft_strcmp(str, "rra\n") == 0)
		rra(stack_a);
	else if (ft_strcmp(str, "rrb\n") == 0)
		rrb(stack_b);
	else if (ft_strcmp(str, "rrr\n") == 0)
		rrr(stack_a, stack_b);
}


void	getting_str(t_list **stack_a, t_list **stack_b)
{
	char	*str;

	str = get_next_line(0);
	while(1)
	{
		if (str == NULL)
			break;
		else
			do_moves(stack_a, stack_b, str);
		str = get_next_line(0);
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
	/*while (stack_a)
	{
		printf("%d", stack_a->value);
		stack_a = stack_a->next;
	}*/
	getting_str(&stack_a, &stack_b);
	while (stack_a->next)
	{
		printf("%d", stack_a->value);
		stack_a = stack_a->next;
	}
	printf("%d", stack_a->value);
	/*if (is_sorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);*/
}
