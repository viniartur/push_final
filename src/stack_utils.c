/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:55:13 by vvieira           #+#    #+#             */
/*   Updated: 2026/01/13 21:50:05 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	free_split(char **args)
{
	int	i;

	if (!args)
		return ;
	i = 0;
	while (args[i])
		free(args[i++]);
	free(args);
}

static void	cleanup_error(char **args, t_list **a)
{
	free_split(args);
	free_stack(a);
	exit_error();
}

static int	fill_stack_from_args(char **args, t_list **a)
{
	int		i;
	int		*num;
	t_list	*new_node;

	i = 0;
	while (args[i])
	{
		num = parse_number(args[i]);
		new_node = malloc(sizeof(t_list));
		if (!num || !new_node)
			cleanup_error(args, a);
		new_node->number = *num;
		free(num);
		new_node->next = NULL;
		ft_lst_add_back(a, new_node);
		i++;
	}
	return (i);
}

static int	parse_input_split(char *arg, t_list **a)
{
	char	**split_args;
	int		count;

	split_args = ft_split(arg, ' ');
	if (!split_args || !*split_args)
	{
		free_split(split_args);
		free_stack(a);
		exit_error();
	}
	count = fill_stack_from_args(split_args, a);
	free_split(split_args);
	return (count);
}

int	parse_input(int argc, char **argv, t_list **a)
{
	int	i;
	int	total_size;

	i = 1;
	total_size = 0;
	while (i < argc)
	{
		total_size += parse_input_split(argv[i], a);
		i++;
	}
	return (total_size);
}
