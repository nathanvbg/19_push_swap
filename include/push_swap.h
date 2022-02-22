/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naverbru <naverbru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:10:35 by naverbru          #+#    #+#             */
/*   Updated: 2022/02/22 17:27:19 by naverbru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_list{
	int			top;
	int			*items;
}	t_list;

//main.c
void	ft_print(t_list *a, t_list *b, char *str);
void	ft_print_c(t_list *c, char *str);
void	ft_free(t_list *a, t_list *b, t_list *c);
void	ft_algo(t_list *a, t_list *b);
int		ft_process(char **arg, t_list *a, t_list *b, t_list *c);

//adjust.c
int		ft_find_smallest(t_list *c, long previous_min);
int		ft_adjust(t_list *a, t_list *c);

//init.c

int		ft_initlists(char **av, t_list *a, t_list *b, t_list *c);
int		ft_malloc(t_list *a, t_list *b, t_list *c, int ac);
int		ft_size(char **av);

//check.c
int		ft_check(char **av);
int		ft_check_atoi(char **av);
int		ft_check_double(char **arg);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_check_ordre(t_list *a);

//operations_1.c
void	ft_sa(t_list *pile);
void	ft_sb(t_list *pile);
void	ft_ss(t_list *a, t_list *b);
void	ft_pa(t_list *a, t_list *b);
void	ft_pb(t_list *a, t_list *b);

//operations_2.c
void	ft_ra(t_list *a);
void	ft_rb(t_list *b);
void	ft_rr(t_list *a, t_list *b);

//operations_3.c
void	ft_rra(t_list *a);
void	ft_rrb(t_list *b);
void	ft_rrr(t_list *a, t_list *b);

//algo.c
int		ft_find_closest(t_list *a, int max, int part_size);
void	ft_fill_b(t_list *a, t_list *b, int pos);
void	ft_fill_a(t_list *a, t_list *b, int pos);
void	ft_refill_a(t_list *a, t_list *b);
void	ft_large_algo(t_list *a, t_list *b, int part, int part_size);

//algo_small.c
void	ft_algo_three(t_list *a);
void	ft_algo_five(t_list *a, t_list *b);
void	ft_small_a(t_list *a, t_list *b);
void	ft_small_abis(t_list *a, t_list *b, int i);

#endif
