/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:44:42 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 16:01:26 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_ra(t_list *a)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 1;
	temp1 = a->items[0];
	a->items[0] = a->items[a->top];
	while (i <= a->top)
	{
		temp2 = a->items[i];
		a->items[i] = temp1;
		temp1 = temp2;
		i++;
	}
	ft_putchar("ra\n");
}

void	ft_rb(t_list *b)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 1;
	temp1 = b->items[0];
	b->items[0] = b->items[b->top];
	while (i <= b->top)
	{
		temp2 = b->items[i];
		b->items[i] = temp1;
		temp1 = temp2;
		i++;
	}
	ft_putchar("rb\n");
}

void	ft_rr(t_list *a, t_list *b)
{
	ft_ra(a);
	ft_rb(b);
}
