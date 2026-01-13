/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:17 by vvieira           #+#    #+#             */
/*   Updated: 2026/01/13 20:06:42 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	exit_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	parse_number(const char *str)
{
	long	num;
	int		i;

	if (!str || *str == '\0')
		return (-1);
	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!ft_isdigit(str[i]))
		return (-1);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	num = ft_atol(str);
	if (num < -2147483648 || num > 2147483647)
		return (-1);
	return ((int)num);
}

void	check_rep(t_list **a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = *a;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		while (tmp2)
		{
			if (tmp1->number == tmp2->number)
			{
				free_stack(a);
				exit_error();
			}
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
}
