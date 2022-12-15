/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huolivei <huolivei <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 09:42:35 by huolivei          #+#    #+#             */
/*   Updated: 2022/12/15 23:20:46 by huolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		small_sort(stack_a);
	else if (size > 3)
		sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	stack_size;

	if (ac < 2)
		return (0);
	if (!is_correct_input(av))
		error(NULL, NULL);
	stack_a = get_values(ac, av);
	stack_b = NULL;
	if (is_sorted(stack_a))
	{
		free_stack(&stack_a);
		return (0);
	}
	stack_size = get_size(stack_a);
	get_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	while(stack_a)
	{
		printf("%d\n", stack_a->value);
		stack_a = stack_a->next;
	}
	free_stack(&stack_a);
	free_stack(&stack_b);
}
