/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:54:50 by vvieira           #+#    #+#             */
/*   Updated: 2026/01/13 19:54:59 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_b;
	*list_b = tmp->next;
	tmp->next = *list_a;
	*list_a = tmp;
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*tmp;

	tmp = *list_a;
	*list_a = tmp->next;
	tmp->next = *list_b;
	*list_b = tmp;
	write(1, "pb\n", 3);
}

int	minnum(t_list **a)
{
	int		min;
	t_list	*p;

	min = (*a)->number;
	p = (*a)->next;
	while (p != NULL)
	{
		if (p->number < min)
			min = p->number;
		p = p->next;
	}
	return (min);
}

int	maxnum(t_list **a)
{
	int		max;
	t_list	*p;

	max = (*a)->number;
	p = (*a)->next;
	while (p != NULL)
	{
		if (p->number > max)
			max = p->number;
		p = p->next;
	}
	return (max);
}

int	maxindex(t_list **a)
{
	int		max_index;
	t_list	*p;

	p = *a;
	max_index = p->index;
	p = p->next;
	while (p != NULL)
	{
		if (max_index < p->index)
			max_index = p->index;
		p = p->next;
	}
	return (max_index);
}
