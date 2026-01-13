/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:57:06 by vvieira           #+#    #+#             */
/*   Updated: 2026/01/13 19:32:48 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list **stack)
{
	t_list	*current;
	t_list	*tmp;

	current = *stack;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*stack = NULL;
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	int		total_size;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	total_size = parse_input(argc, argv, &a);
	check_rep(&a);
	if (!is_sorted(&a))
		sort(&a, &b, total_size);
	free_stack(&a);
	return (0);
}
