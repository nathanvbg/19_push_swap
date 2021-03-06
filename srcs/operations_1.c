/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:42:46 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 16:01:28 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_sa(t_list *a)
{
	int	temp;

	if (a->top < 1)
		return ;
	temp = a->items[a->top];
	a->items[a->top] = a->items[a->top - 1];
	a->items[a->top - 1] = temp;
	ft_putchar("sa\n");
}

void	ft_sb(t_list *b)
{
	int	temp;

	if (b->top < 1)
		return ;
	temp = b->items[b->top];
	b->items[b->top] = b->items[b->top - 1];
	b->items[b->top - 1] = temp;
	ft_putchar("sb\n");
}

void	ft_ss(t_list *a, t_list *b)
{
	ft_sa(a);
	ft_sb(b);
}

void	ft_pa(t_list *a, t_list *b)
{
	if (b->top == -1)
		return ;
	a->items[a->top + 1] = b->items[b->top];
	a->top++;
	b->top--;
	ft_putchar("pa\n");
}

void	ft_pb(t_list *a, t_list *b)
{
	if (a->top == -1)
		return ;
	b->items[b->top + 1] = a->items[a->top];
	b->top++;
	a->top--;
	ft_putchar("pb\n");
}
