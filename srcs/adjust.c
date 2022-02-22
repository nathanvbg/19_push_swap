/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adjust.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:38:11 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 16:00:24 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_find_smallest(t_list *c, long previous_min)
{
	int		i;
	int		j;
	long	min;

	i = 0;
	j = -1;
	min = 2147483648;
	while (i <= c->top)
	{
		if (c->items[i] < min && c->items[i] > previous_min)
		{
			min = c->items[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	ft_adjust(t_list *a, t_list *c)
{
	int		i;
	int		j;
	int		k;
	long	previous_min;

	i = 1;
	j = 0;
	previous_min = -2147483649;
	while (j <= c->top)
	{
		k = ft_find_smallest(c, previous_min);
        //if (k == -1)
        //    return (0);
		a->items[k] = j + 1;
		previous_min = c->items[k];
		j++;
	}
	return (1);
}
