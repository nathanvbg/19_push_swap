/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:28:29 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 16:03:45 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_algo_three(t_list *a)
{
	if ((a->items[0] > a->items[2]) && (a->items[2] > a->items[1]))
		ft_sa(a);
	else if ((a->items[2] > a->items[1]) && (a->items[1] > a->items[0]))
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if ((a->items[2] > a->items[1]) && (a->items[1] < a->items[0]))
		ft_ra(a);
	else if ((a->items[2] < a->items[1]) && (a->items[0] < a->items[1])
		&& (a->items[0] > a->items[2]))
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if ((a->items[1] > a->items[2]) && (a->items[2] > a->items[0]))
		ft_rra(a);
}

void	ft_small_a(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while ((b->items[b->top] > a->items[a->top - i]) && (i <= a->top))
		i++;
	if (i == a->top + 1)
	{
		ft_pa(a, b);
		ft_ra(a);
	}
	else if (i == 0)
		ft_pa(a, b);
	else if (i == 1)
	{
		ft_pa(a, b);
		ft_sa(a);
	}
	else
		ft_small_abis(a, b, i);
}

void	ft_small_abis(t_list *a, t_list *b, int i)
{
	if (i == 2)
	{
		ft_ra(a);
		ft_pa(a, b);
		ft_sa(a);
		ft_rra(a);
	}
	else if (i == 3)
	{
		ft_rra(a);
		ft_pa(a, b);
		ft_ra(a);
		ft_ra(a);
	}
}

void	ft_algo_five(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	ft_pb(a, b);
	if (a->top == 3)
		ft_pb(a, b);
	ft_algo_three(a);
	ft_small_a(a, b);
	if (b->top >= 0)
		ft_small_a(a, b);
}
