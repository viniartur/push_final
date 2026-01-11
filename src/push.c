/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:54:50 by vvieira           #+#    #+#             */
/*   Updated: 2025/11/14 18:54:54 by vvieira          ###   ########.fr       */
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
