/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:46:24 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 16:01:24 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_rra(t_list *a)
{
	int	i;
	int	temp1;
	int	temp2;

	i = a->top - 1;
	temp1 = a->items[a->top];
	a->items[a->top] = a->items[0];
	while (i >= 0)
	{
		temp2 = a->items[i];
		a->items[i] = temp1;
		temp1 = temp2;
		i--;
	}
	ft_putchar("rra\n");
}

void	ft_rrb(t_list *b)
{	
	int	i;
	int	temp1;
	int	temp2;

	i = b->top - 1;
	temp1 = b->items[b->top];
	b->items[b->top] = b->items[0];
	while (i >= 0)
	{
		temp2 = b->items[i];
		b->items[i] = temp1;
		temp1 = temp2;
		i--;
	}
	ft_putchar("rrb\n");
}

void	ft_rrr(t_list *a, t_list *b)
{
	ft_rra(a);
	ft_rrb(b);
}
