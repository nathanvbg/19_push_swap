#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct t_list{
int top;
int *items;
} s_list;

//main.c
void    ft_print(s_list *a, s_list *b, char *str);
void    ft_print_c(s_list *c);
void    ft_free(s_list *a, s_list *b);

//adjust.c
int ft_find_smallest(s_list *c, long previous_min);
int ft_adjust(s_list *a, s_list *c);

//init.c
int ft_check(char **av);
int ft_check_atoi(char **av);
int ft_initlists(int ac, char **av, s_list *a, s_list *b, s_list *c);
int ft_malloc(s_list *a, s_list *b, s_list *c, int ac);

//operations_1.c
void    ft_sa(s_list *pile);
void    ft_sb(s_list *pile);
void    ft_ss(s_list *a, s_list *b);
void    ft_pa(s_list *a, s_list *b);
void    ft_pb(s_list *a, s_list *b);

//operations_2.c
void    ft_ra(s_list *a);
void    ft_rb(s_list *b);
void    ft_rr(s_list *a, s_list *b);

//operations_3.c
void    ft_rra(s_list *a);
void    ft_rrb(s_list *b);
void    ft_rrr(s_list *a, s_list *b);

//algo.c
void    ft_algo(s_list *a, s_list *b);
void    ft_algo_three(s_list *a);
int     ft_find_closest(s_list *a, int max);
void    ft_fill_b(s_list *a, s_list *b, int pos);
void    ft_sort_b(s_list *b, int nbr);

#endif