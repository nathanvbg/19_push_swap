/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:10:54 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 17:26:47 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
/*
void    ft_print_c(t_list *c, char *str)
{
    int i;
    i = c->top;

    printf("\n%s\n", str);
    while (i >= 0)
    {
        printf("%d\n", c->items[i]);
        i--;
    }
    printf("^\nC\n-\n\n");
}

void    ft_print(t_list *a, t_list *b, char *str)
{
    int i;

    i = a->top;
    printf("\n%s\n", str);
    while (i >= 0)
    {
        printf("%d\n", a->items[i]);
        i--;
    }
    printf("^\nA\n-\n\n");
    if (b->top >= 0)
    {
        i = b->top;
        while (i >= 0)
        {
            printf("%d\n", b->items[i]);
            i--;
        }
        printf("^\nB\n-\n\n");
    }
}
*/
void	ft_free(t_list *a, t_list *b, t_list *c)
{
	free(a->items);
	free(b->items);
	free(c->items);
}

void	ft_algo(t_list *a, t_list *b)
{
	if (a->top == 2)
		ft_algo_three(a);
	else if (a->top == 3 || a->top == 4)
		ft_algo_five(a, b);
	else if (a->top >= 5 && a->top < 100)
		ft_large_algo(a, b, 5, 20);
	else if (a->top >= 100 && a->top < 500)
		ft_large_algo(a, b, 10, 50);
	else if (a->top >= 500 && a->top < 1000)
		ft_large_algo(a, b, 20, 50);
	else if (a->top >= 1000 && a->top < 10000)
		ft_large_algo(a, b, 100, 100);
	else if (a->top >= 10000 && a->top < 100000)
		ft_large_algo(a, b, 1000, 1000);
}

int	ft_process(char **arg, t_list *a, t_list *b, t_list *c)
{
	if (!ft_check(arg))
	{
		ft_putchar("Error\n");
		return (0);
	}
	if (!ft_initlists(arg, a, b, c))
	{
		ft_putchar("Error\n");
		return (0);
	}
	if (!ft_check_ordre(a))
		return (1);
	ft_algo(a, b);
	ft_free(a, b, c);
	return (1);
}

int	main(int ac, char **av)
{
	t_list	a;
	t_list	b;
	t_list	c;
	char	**arg;

	if (ac == 1)
		return (0);
	if (ac == 2)
	{
		arg = ft_split(av[1], ' ');
		if (!ft_process(arg, &a, &b, &c))
			return (1);
	}
	else
	{
		if (!ft_process(&av[1], &a, &b, &c))
			return (1);
	}
	return (0);
}
