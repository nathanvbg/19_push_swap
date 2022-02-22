/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:14:19 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 17:15:19 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_closest(t_list *a, int max, int part_size)
{
	int	min;
	int	i;
	int	j;

	min = max - part_size;
	i = 0;
	j = a->top;
	while (i <= a->top / 2)
	{
		if ((a->items[i] >= min) && (a->items[i] <= max))
			break ;
		i++;
	}
	while (j >= a->top / 2)
	{
		if ((a->items[j] >= min) && (a->items[j] <= max))
			break ;
		j--;
	}
	if (i <= (a->top - j))
		return (i);
	else
		return (j);
}

void	ft_fill_b(t_list *a, t_list *b, int pos)
{
	if (pos <= a->top / 2)
	{
		while (pos >= 0)
		{
			ft_rra(a);
			pos--;
		}
	}
	if (pos > a->top / 2)
	{
		while (pos < a->top)
		{
			ft_ra(a);
			pos++;
		}
	}
	ft_pb(a, b);
}

void	ft_fill_a(t_list *a, t_list *b, int pos)
{
	if (pos <= b->top / 2)
	{
		while (pos >= 0)
		{
			ft_rrb(b);
			pos--;
		}
	}
	if (pos > b->top / 2)
	{
		while (pos < b->top)
		{
			ft_rb(b);
			pos++;
		}
	}
	ft_pa(a, b);
}

void	ft_refill_a(t_list *a, t_list *b)
{
	int	i;

	i = 0;
	while (b->top >= 0)
	{
		if (b->items[i] == b->top + 1)
		{
			ft_fill_a(a, b, i);
			i = -1;
		}
		i++;
	}
}

void	ft_large_algo(t_list *a, t_list *b, int part, int part_size)
{
	int	i;
	int	j;
	int	pos;

	i = 1;
	j = 1;
	while (j <= part)
	{
		while (i <= j * part_size && a->top >= 0)
		{
			pos = ft_find_closest(a, (j * part_size), part_size);
			ft_fill_b(a, b, pos);
			i++;
		}
		j++;
	}
	ft_refill_a(a, b);
}
