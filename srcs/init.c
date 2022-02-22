/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:49:18 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 17:08:10 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	ft_malloc(t_list *a, t_list *b, t_list *c, int ac)
{
	a->items = malloc(ac * sizeof(int));
	if (a->items == 0)
		return (0);
	b->items = malloc(ac * sizeof(int));
	if (b->items == 0)
	{
		free(a->items);
		return (0);
	}
	c->items = malloc(ac * sizeof(int));
	if (c->items == 0)
	{
		free(a->items);
		free(b->items);
		return (0);
	}
	return (1);
}

int	ft_size(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int	ft_initlists(char **av, t_list *a, t_list *b, t_list *c)
{
	int	i;

	i = 0;
	b->top = -1;
	c->top = -1;
	if (!ft_malloc(a, b, c, ft_size(av)))
		return (0);
	while (av[i])
	{
		c->top++;
		c->items[ft_size(av) - i - 1] = ft_atoi(av[i]);
		i++;
	}
	a->top = c->top;
	ft_adjust(a, c);
	return (1);
}
