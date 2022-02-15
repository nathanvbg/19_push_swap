

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct t_list{
int maxsize;
int top;
int *items;
} s_list;

void    ft_initlist(int ac, char **av);

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

#endif