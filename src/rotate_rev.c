/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_rev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:54:56 by vvieira           #+#    #+#             */
/*   Updated: 2025/11/14 18:54:58 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*prev;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = *stack;
	prev = NULL;
	while (last->next != NULL)
	{
		prev = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	prev->next = NULL;
}

void	rra(t_list **list_a)
{
	reverse_rotate(list_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **list_b)
{
	reverse_rotate(list_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	write(1, "rrr\n", 4);
}
